#include <stdio.h>

typedef struct{
    char nomeMonitor[50];
    int idMonitor;
} Monitores;

typedef struct{
    char nomeAluno[50];
    int idAssociado;
    int pontuacao;
} Alunos;

typedef struct{
    int questao1;
    int questao2;
    int questao3;
    int questao4;
    int questao5;
    int questao6;
    int questao7;
    int questao8;
    int questao9;
} Listas;

int main(void){
    int qntMonitores;
    scanf("%d", &qntMonitores);
    Monitores monitores[qntMonitores];

    int i, j;

    for(i=0; i<qntMonitores; i++){
        scanf(" %s", monitores[i].nomeMonitor);
        scanf("%d", &monitores[i].idMonitor);
    }

    int qntAlunos;
    scanf("%d", &qntAlunos);
    Alunos alunos[qntAlunos];

    for(i=0; i<qntAlunos; i++){
        scanf(" %s", alunos[i].nomeAluno);
        scanf("%d", &alunos[i].idAssociado);
    }

    Listas questao[qntAlunos];

    for(i=0; i<qntAlunos; i++){
        scanf("%d", &questao[i].questao1);
        scanf("%d", &questao[i].questao2);
        scanf("%d", &questao[i].questao3);
        scanf("%d", &questao[i].questao4);
        scanf("%d", &questao[i].questao5);
        scanf("%d", &questao[i].questao6);
        scanf("%d", &questao[i].questao7);
        scanf("%d", &questao[i].questao8);
        scanf("%d", &questao[i].questao9);
    }

    for(i=0; i<qntAlunos; i++){
        alunos[i].pontuacao=0;
        if(questao[i].questao1 == 1){alunos[i].pontuacao+=1;}
        if(questao[i].questao2 == 1){alunos[i].pontuacao+=1;}
        if(questao[i].questao3 == 1){alunos[i].pontuacao+=1;}
        if(questao[i].questao4 == 1){alunos[i].pontuacao+=1;}
        if(questao[i].questao5 == 1){alunos[i].pontuacao+=1;}
        if(questao[i].questao6 == 1){alunos[i].pontuacao+=1;}
        if(questao[i].questao7 == 1){alunos[i].pontuacao+=1;}
        if(questao[i].questao8 == 1){alunos[i].pontuacao+=1;}
        if(questao[i].questao9 == 1){alunos[i].pontuacao+=1;}
    }

    int listaPremiada;
    scanf("%d", &listaPremiada);

    for(i=0; i<qntAlunos; i++){
        if(listaPremiada == 1 && questao[i].questao3 == 1){
            alunos[i].pontuacao+=1;
        }
        if(listaPremiada == 2 && questao[i].questao6 == 1){
            alunos[i].pontuacao+=1;
        }
        if(listaPremiada == 3 && questao[i].questao9 == 1){
            alunos[i].pontuacao+=1;
        }
    }

    for(i=0; i<qntAlunos; i++){
        printf("%s\n", alunos[i].nomeAluno);
        for(j=0; j<qntAlunos; j++){
            if(alunos[i].idAssociado == monitores[j].idMonitor){
                printf("%s\n", monitores[j].nomeMonitor);
            }
        }
        printf("%d\n", alunos[i].pontuacao);
    }

    return 0;
}