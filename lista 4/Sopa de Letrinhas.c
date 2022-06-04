#include <stdio.h>

int main(){
    int qntPalavras;
    int i, j, k, l;
    char frase[30];
    int comparador;
    int quantVezes = 0;

    scanf(" %s", frase);
    scanf("%d", &qntPalavras);

    char palavra[qntPalavras][30];
    char backup[30];

    for(i=0; i<qntPalavras; i++){
        scanf(" %s", palavra[i]);
    }

    for(i=0; i<qntPalavras; i++){
        for(l=0; l<30; l++){
            backup[l]='\0';
        }
        for(j=0; palavra[i][j]!='\0'; j++){
            for(k=0; frase[k]!='\0'; k++){
                if(palavra[i][j] == frase[k]){
                    backup[j] = palavra[i][j];
                }
            }
        }
        comparador = strcmp(backup, palavra[i]);
        if(comparador == 0){
            quantVezes++;
        }
    }

    printf("E possivel formar %d palavras com esse conjunto", quantVezes);
    return 0;
}