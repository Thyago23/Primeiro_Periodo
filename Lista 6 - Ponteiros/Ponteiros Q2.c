#include <stdio.h>
#include <stdlib.h>

int main(void){
    int vet[5] = {1,2,3,9,5};
    int *p;
    int i;

    p = &vet;

    printf("%d %d\n", &vet, p);

    for(i=0; i<5; i++){
        printf("%d ", p[i]);
    }

    printf("\n");

    for(i=0; i<5; i++){
        printf("%d ", *(p+i));
    }

    printf("\n");

    for(i=0; i<5; i++){
        printf("%d ", vet[i]);
    }

    return 0;
}