#include <stdio.h>

int main(){
    int tamVetor = 0, diferenca = 0;
    int i;
    int carteira = 0;

    scanf("%d %d", &tamVetor, &diferenca);

    int vetor[tamVetor];

    for(i=0; i<tamVetor; i++){
        scanf("%d", &vetor[i]);
    }

    return 0;
}