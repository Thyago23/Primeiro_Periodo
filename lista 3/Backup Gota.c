#include <stdio.h>

int main(){
    int numLinhas, numColunas;
    int i, j, k;

    scanf("%d %d", &numLinhas, &numColunas);

    char matrizPosicao[numLinhas][numColunas];

    for(i=0; i<numLinhas; i++){
        for(j=0; j<numColunas; j++){
            scanf(" %c", &matrizPosicao[i][j]);
        }
    }

    for(i=0; i<numLinhas; i++){
        for(j=0; j<numColunas; j++){
            if(matrizPosicao[i][j] == 'o'){
                if(matrizPosicao[i+2][j] == '#'){
                    for(k=0; k<numColunas; k++){
                        if(matrizPosicao[i+2][k] == '#'){
                            matrizPosicao[i+1][k] = 'o';
                            if(k >= 1){
                                matrizPosicao[i+1][k-1] = 'o';
                            }
                            if(k <= (numColunas-2)){
                                matrizPosicao[i+1][k+1] = 'o';
                            }
                        }
                    }
                }
                if((matrizPosicao[i+1][j] != '#')&&(matrizPosicao[i+2][j] != '#')){
                    matrizPosicao[i+1][j] = 'o';
                }
            }
            printf("%c", matrizPosicao[i][j]);
        }
        printf("\n");
    }
    return 0;
}