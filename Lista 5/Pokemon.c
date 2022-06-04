#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[21];
    char tipo[4];
    int ataque;
    int defesa;
} Pokemons;

int main(void){
    int numDePokemons;
    scanf("%d", &numDePokemons);

    Pokemons Pk[numDePokemons];

    int i;

    for(i=0; i<numDePokemons; i++){
        scanf(" %s", Pk[i].nome);
        scanf(" %s", Pk[i].tipo);
        scanf("%d", &Pk[i].ataque);
        scanf("%d", &Pk[i].defesa);
    }

    char lutador1[21], lutador2[21];
    int j;
    int lutador1Ponto = 0, lutador2Ponto = 0;
    char comando[9];
    int x = 1, contadorSeparado = 0;

    while(x == 1){
        scanf(" %s", comando);
        if(strcmp(comando, "luta")==0){
            scanf(" %s vs %s", lutador1, lutador2);
            for(i=0; i<numDePokemons; i++){
                if((strcmp(Pk[i].nome, lutador1) == 0)){
                    for(j=0; j<numDePokemons; j++){
                        if((strcmp(Pk[j].nome, lutador2) == 0)){
                            if(Pk[i].ataque - Pk[j].defesa > Pk[j].ataque - Pk[i].defesa){lutador1Ponto+=1;}
                            if(Pk[i].ataque - Pk[j].defesa < Pk[j].ataque - Pk[i].defesa){lutador2Ponto+=1;}
                            if(lutador1Ponto >= 1){
                                printf("%s deitou %s na porrada\n", Pk[i].nome, Pk[j].nome);
                            }
                            else if(lutador2Ponto >= 1){
                                printf("%s deitou %s na porrada\n", Pk[j].nome, Pk[i].nome);
                            }
                            else{
                                printf("parece que temos um empate\n");
                            }
                        }
                    }
                }
            }
        }

        else if(strcmp(comando, "0") == 0){
            x=0;
        }

        else {
            for(i=0; i<numDePokemons; i++){
                if(strstr(comando, Pk[i].tipo) != NULL){
                    contadorSeparado+=1;
                    printf("Pokemon %d: %s\n", contadorSeparado, Pk[i].nome);
                    printf(" Ataque: %d\n", Pk[i].ataque);
                    printf(" Defesa: %d\n", Pk[i].defesa);
                }
            }
            contadorSeparado=0;
        }
    }
    return 0;
}