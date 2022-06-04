#include <stdio.h>
#include <stdlib.h>

struct el_lista{
    int valor;
    struct el_lista *proximo;
};

int main(void){
    int i = 0, j; 
    int valorEntrada;
    struct el_lista *ponteiro;
    ponteiro = NULL;

    while(scanf("%d", &valorEntrada) && valorEntrada != 0){
        if(!(ponteiro = (struct el_lista*) realloc(ponteiro, (i+1) * sizeof(struct el_lista)))){
            printf("Erro de alocacao!\n");
            free(ponteiro);
            exit(1);
        }
        else{
            (ponteiro+i)->valor = valorEntrada;
            (ponteiro+i)->proximo = NULL;
            if(i>0){
                (ponteiro+i-1)->proximo = ponteiro+i;
            }
        }
        i++;
    }

    for(j=0; j<i; j++){
        printf("Valor [%d]: %d\n", j+1, ponteiro->valor);
        ponteiro = (ponteiro++)->proximo;
    }

    free(ponteiro);

    return 0;
}