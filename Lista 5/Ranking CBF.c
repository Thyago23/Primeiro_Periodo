#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[16];
    float valorMercado;
    int qntJogadores;
    int qntTitulos;
    char ney[4];
    char fla[4];
    float pontuacao;
} Clubes;

int main(void){
    int qntClubes;
    scanf("%d", &qntClubes);

    Clubes clube[qntClubes], carteira;

    int i, j;

    for(i=0; i<qntClubes; i++){
        scanf(" %[^\n]", clube[i].nome);
        scanf("%f %d %d", &clube[i].valorMercado, &clube[i].qntJogadores, &clube[i].qntTitulos);
        scanf(" %s", clube[i].ney);
        scanf(" %s", clube[i].fla);
    }

    for(i=0; i<qntClubes; i++){
        clube[i].pontuacao = 0;
        clube[i].pontuacao += clube[i].valorMercado;
        if(clube[i].qntJogadores != 0){clube[i].pontuacao += (clube[i].qntJogadores*100);}
        if(clube[i].qntTitulos != 0){clube[i].pontuacao += (clube[i].qntTitulos*2000);}
        if(strcmp(clube[i].ney, "sim") == 0){clube[i].pontuacao += 10000;}
        if(strcmp(clube[i].fla, "sim") == 0){clube[i].pontuacao += 20000;}
    }

    for(i=0; i<qntClubes; i++){
        for(j=i+1; j<qntClubes; j++){
            if(clube[i].pontuacao < clube[j].pontuacao){
                carteira = clube[i];
                clube[i] = clube[j];
                clube[j] = carteira;
            }
        }
    }

    for(i=0; i<qntClubes; i++){
        printf("%s %.2f\n", clube[i].nome, clube[i].pontuacao);
    }

    return 0;
}