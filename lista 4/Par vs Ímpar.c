#include <stdio.h>

int main(){
    int tamMatriz;
    int i, j, k, l;
    int pontosPar = 0, pontosImpar = 0;
    int somaTotal, produto = 0;

    scanf("%d", &tamMatriz);

    produto = tamMatriz*tamMatriz;

    int matriz[tamMatriz][tamMatriz];
    char nome[produto][31];

    for(i=0; i<produto; i++){
        scanf(" %s", nome[i]);
    }

    int contagem = 0;
    for(i=0; i<tamMatriz; i++){
        for(j=0; j<tamMatriz; j++){
            if((i+j)%2==0){
                somaTotal = 0;
                for(k=0; nome[contagem][k]!='\0'; k++){
                    if((k%2)==0){
                        somaTotal += nome[contagem][k];
                    }
                }
                matriz[i][j] = somaTotal;
            }
            else{
                somaTotal = 0;
                for(k=0; nome[contagem][k]!='\0'; k++){
                    if((k%2)!=0){
                        somaTotal += nome[contagem][k];
                    }
                }
                matriz[i][j] = somaTotal;
            }    
        contagem++;
        }
        
    }

    for(i=0; i<tamMatriz; i++){
        for(j=0; j<tamMatriz; j++){
            if((i+j)%2==0){
                pontosPar += matriz[i][j];
            }
            else{
                pontosImpar += matriz[i][j];
            }
        }
    }

    if(pontosPar == pontosImpar){
        printf("Tivemos um empate em %d pontos!", pontosPar);
    }
    else if(pontosPar > pontosImpar){
        printf("Os pares venceram com %d pontos!", pontosPar);
    }
    else{
        printf("Os impares venceram com %d pontos!", pontosImpar);
    }
    return 0;
}