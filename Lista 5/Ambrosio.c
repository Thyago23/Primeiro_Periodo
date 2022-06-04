#include <stdio.h>
#include <string.h>

typedef struct{
    int passagem;
    int dia, mes, ano;
    char origem[20];
    char destino[20];
    int hora, minutos;
    int assento;
    int idade;
    char nome[30];
} Passageiros;

int main(void){
    Passageiros pessoa[43];

    int i;
    int numPassageiros = 0;
    int idadeTodos = 0;
    int media;

    for(i=0; i<44; i++){
        scanf("%d", &pessoa[i].passagem);
        if(pessoa[i].passagem != -1){
            numPassageiros += 1;
            scanf("%d/%d/%d", &pessoa[i].dia, &pessoa[i].mes, &pessoa[i].ano);
            scanf(" %[^\n]", pessoa[i].origem);
            scanf(" %[^\n]", pessoa[i].destino);
            scanf("%d:%d", &pessoa[i].hora, &pessoa[i].minutos);
            scanf("%d", &pessoa[i].assento);
            scanf("%d", &pessoa[i].idade);
            idadeTodos += pessoa[i].idade;
            scanf(" %[^\n]", pessoa[i].nome);
        }
        else{
            i=44;
        }
    }

    media = idadeTodos/numPassageiros;

    for(i=0; i<numPassageiros; i++){
        if(pessoa[i].idade > media && pessoa[i].assento%2 == 0){
            printf("%s\n", pessoa[i].nome);
        }
    }

    return 0;
}