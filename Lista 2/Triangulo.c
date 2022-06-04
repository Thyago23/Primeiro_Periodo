#include <stdio.h>

int main(){
    char letra;
    int valorDaLetra = 0;
    int i=1, j=0, k = 0;
    scanf("%c", &letra);

    valorDaLetra = (letra - 64);

    for(i-1; i<=valorDaLetra; i++){
        j = valorDaLetra - 1;
        for(; j>=i; j--){
            printf(".");
        }
        k=1;
        for(; k<=i; k++){
            printf("%c", k + 64);
        }
        k-=2;
        for(; k>=1; k--){
            printf("%c", k + 64);
        }
        j = (valorDaLetra - 1);
        for(; j>=i; j--){
            printf(".");
        }
        printf("\n");
    }
    return 0;
}