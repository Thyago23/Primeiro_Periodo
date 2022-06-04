#include <stdio.h>

int main(){
    long int vetor[100000];
    long int i, j;
    long int carteira;

    while(scanf("%ld", &vetor[j]) != EOF){
        EOF;
    }

    for(i=0; i<100000; i++){
        if(vetor[i] < vetor[i-1]){
            carteira = vetor[i-1];
            vetor[i-1] = vetor[i];
            vetor[i] = carteira;
            carteira = 0;
        }
    }

    for(i=0; i<100000; i++){
        printf("%ld", vetor[i]);
    }

    return 0;
}