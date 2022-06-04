#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char str[50];
    int i, j, k, l;
    int comprimento;

    char **entrada;

    entrada = (char **) calloc(1, sizeof(char *));
    if(!(entrada[0] = (char*) calloc(1, sizeof(char)))){
        printf("Erro de alocacao!\n");
        free(entrada[0]);
        free(entrada);
        exit(1);
    }
    else{
        for(i=0; scanf(" %49[^\n]", str) != EOF; i++){
            comprimento = strlen(str);
            entrada = (char **) realloc(entrada, (i+1) * sizeof(char *));
            if(!(entrada[i] = (char *) realloc(entrada[i], (comprimento+1) * sizeof(char)))){
                printf("Erro na entrada: %d\n", i+1);
                for(k=0; k<i; k++){
                    free(entrada[k]);
                }
                free(entrada);
                exit(1);
            }
            else{
                strcpy(entrada[i], str);
            }
        }
    }

    for(l=0; l<i; l++){
        printf("Entrada [%d]: %s\n", l+1, entrada[l]);
    }

    for(; i>0; i--){
        free(entrada[i]);
    }
    free(entrada);

    return 0;
}