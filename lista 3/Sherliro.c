#include <stdio.h>

int main(){
    int tamSequencia;
    int i;

    scanf("%d", &tamSequencia);

    int sequencia[tamSequencia];

    for(i=0; i < tamSequencia; i++){
        scanf("%d", &sequencia[i]);
        if((i>=2) && (sequencia[i] != sequencia[i-1] + sequencia[i-2])){
            printf("Sherliro achou o termo %d que deveria estar na posicao %d", sequencia[i-1] + sequencia[i-2], i+1);
            break;
        }
    }
    return 0;
}