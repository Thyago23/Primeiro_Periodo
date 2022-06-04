#include <stdio.h>

int main(){
    int l, c;
    int i, j;

    scanf("%d %d", &l, &c);

    int matriz[l][c];

    for(i=0; i<l; i++){
        for(j=0; j<c; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i=0; i<c; i++){
        for(j=0; j<l; j++){
            printf("%d ", matriz[j][i]);
        }
        printf("\n");
    }
    return 0;
}