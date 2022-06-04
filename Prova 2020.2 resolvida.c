#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    float pReal;
    float pImag;
} Complexo;

void empilhe(Complexo **cPilha, Complexo umC, int *tPilha){
    Complexo *aux = *cPilha;

    aux = (Complexo*) realloc(aux, ((*tPilha) + 1) * sizeof(Complexo));
    if(aux == NULL){
        printf("Erro na realocacao na adicao!\n");
        free(cPilha);
        exit(1);
    }

    aux[(*tPilha)].pReal = umC.pReal;
    aux[(*tPilha)].pImag = umC.pImag;

    (*tPilha)++;
    *cPilha = aux;
}

Complexo desempilhe(Complexo **cPilha, int *tPilha){
    Complexo *aux = *cPilha;
    Complexo removido;

    removido = aux[(*tPilha)-1];

    aux = (Complexo*) realloc(aux, (*tPilha) * sizeof(Complexo));
    if(aux == NULL){
        printf("Erro de realocacao na remocao!\n");
        free(cPilha);
        exit(1);
    }

    (*tPilha)--;
    *cPilha = aux;

    return removido;
}

Complexo topo(Complexo *cPilha, int tPilha){
    Complexo aux = cPilha[tPilha-1];
    return aux;
}

int pilhaVazia(Complexo *cPilha, int tPilha){
    if(cPilha == NULL || tPilha == 0){
        return 1;
    }
    else{
        return 0;
    }
}

void salvePilha(Complexo *cPilha, int tPilha){;
    FILE *pont_arquivo = fopen("pilha.bin", "wb");
    if(pont_arquivo == NULL){
        printf("Erro ao abrir o arquivo! (sw5)\n");
        exit(1);
    }
    fprintf(pont_arquivo, "%d\n", tPilha);
    fwrite(cPilha, tPilha, sizeof(Complexo), pont_arquivo);

    fclose(pont_arquivo);
}

Complexo *recuperePilha(int *tPilha){
    FILE *pont_arquivo = fopen("pilha.bin", "rb");
    if(pont_arquivo == NULL){
        printf("Erro ao abrir o arquivo! (sw6)\n");
        exit(1);
    }
    fscanf(pont_arquivo, "%d\n", tPilha);

    Complexo *cPilhaLida = NULL; 
    cPilhaLida = (Complexo*)realloc(cPilhaLida, (*tPilha) * sizeof(Complexo));
    if(cPilhaLida == NULL){
        printf("Erro na alocacao de espaco para receber a pilha.\n");
        exit(1);
    }

    fread(cPilhaLida, *tPilha, sizeof(Complexo), pont_arquivo);
    fclose(pont_arquivo);

    return cPilhaLida;
}

int main(void){
    int tPilha = 0;
    int escolha;
    int result4 = 0;

    Complexo *cPilha = NULL;
    Complexo umC;
    Complexo valorRemovido;
    Complexo fimPilha;

    do{
        printf("Escolha uma das seguintes opcoes: \n");
        printf("Adicionar: [1]\n");
        printf("Remover o ultimo: [2]\n");
        printf("Verificar o topo: [3]\n");
        printf("Verificar se a pilha esta vazia: [4]\n");
        printf("Salvar em um arquivo: [5]\n");
        printf("Carregar do arquivo salvado: [6]\n");
        printf("Sair: [7]\n");
        scanf("%d", &escolha);
        switch(escolha){
            case 1:
                printf("Qual o valor real?");
                scanf("%f", &umC.pReal);
                printf("Qual o  valor da imagem?");
                scanf("%f", &umC.pImag);
                printf("\n\n\n");

                empilhe(&cPilha, umC, &tPilha);
                break;
            case 2:
                valorRemovido = desempilhe(&cPilha, &tPilha);
                printf("Parte real removida: %.2f\n", valorRemovido.pReal);
                printf("Parte imaginaria removida: %.2f\n\n\n", valorRemovido.pImag);
                break;
            case 3:
                fimPilha = topo(cPilha, tPilha);
                printf("Parte real do topo: %.2f\n", fimPilha.pReal);
                printf("Parte imaginaria do topo: %.2f\n\n\n", fimPilha.pImag);
                break;
            case 4:
                result4 = pilhaVazia(cPilha, tPilha);
                if(result4 == 1){
                    printf("A pilha esta vazia!\n\n\n");
                }
                else{
                    printf("A pilha nao esta vazia!\n\n\n");
                }
                break;
            case 5:
                salvePilha(cPilha, tPilha);
                printf("Pilha Salva!\n\n\n");
                break;
            case 6:
                cPilha = recuperePilha(&tPilha);
                printf("Pilha carregada!\n\n\n");
                break;
            case 7:
                break;
            default:
                printf("Opção inválida!\n\n\n");
                break;
        }
    }while(escolha != 7);

    return 0;
}