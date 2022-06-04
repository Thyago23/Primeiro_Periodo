#include <stdio.h>

int main(){
    int tamVetor;
    int deslocamento;
    int i;

    scanf("%d", &tamVetor);
    char letra[tamVetor];

    for(i=0; i<tamVetor; i++){
        scanf(" %c", &letra[i]);
    }

    scanf("%d", &deslocamento);

    for(i=0; i<tamVetor; i++){
        if((letra[i] + deslocamento) <= 122){
            printf("%c", letra[i] + deslocamento);
        }
        else if((letra[i] + deslocamento) > 122 && deslocamento<52){
            printf("%c", letra[i] + deslocamento - 26);
        }
        else if((letra[i] + deslocamento) > 122 && (deslocamento/26>=2)){
            printf("%c", letra[i] + deslocamento - (deslocamento/26*26));
        }
    }
    return 0;
}