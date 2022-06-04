#include <stdio.h>

int main(){
    int i, j, k;
    int escolhaDeVitores;

    int vitores[4][2];
    int LK[3][2];

    for(i=0; i<4; i++){
        for(j=0; j<2; j++){
            scanf("%d", &vitores[i][j]);
        }
    }
    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
            scanf("%d", &LK[i][j]);
        }
    }
    for(i=0; i<4; i++){
        scanf("%d", &escolhaDeVitores);
        escolhaDeVitores--;
        for(j=0; j<3; j++){
            for(k=0; k<2; k++){
                if((LK[j][k] == vitores[escolhaDeVitores][0])||(LK[j][k] == vitores[escolhaDeVitores][1])){
                    printf("%d-%d %d\n", LK[j][0], LK[j][1], j+1);
                    LK[j][0] = 7;
                    LK[j][1] = 7;
                    k = 2;
                    j = 3;
                }
            }
        }
    }
    return 0;
}