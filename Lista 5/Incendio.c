#include <stdio.h>

typedef struct{
    int id;
    float temp;
    char letra;
} Sprinklers;

int main(void){
    int casosTeste, numSprinklers;
    int i, j;
    float tempSoma = 0;
    float mediaTemp, tempFinal;

    scanf("%d", &casosTeste);

    for(i=0; i<casosTeste; i++){
        scanf("%d", &numSprinklers);
        Sprinklers sprink[numSprinklers];

        for(j=0; j<numSprinklers; j++){
            scanf("%d %f %c", &sprink[j].id, &sprink[j].temp, &sprink[j].letra);
            tempSoma += sprink[j].temp;
        }

        mediaTemp = tempSoma/numSprinklers;
        tempFinal = mediaTemp + (mediaTemp*0.15);

        printf("TESTE %d\n", i+1);
        for(j=0; j<numSprinklers; j++){
            if(sprink[j].temp > tempFinal || sprink[j].letra == 'S' || sprink[j].temp > 40){
                printf("%d\n", sprink[j].id);
            }
        }
    }

    return 0;
}