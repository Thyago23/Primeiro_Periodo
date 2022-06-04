#include <stdio.h>
int main() {
    int valor = 1;
    int div, quadrado1, quadrado2;

    while(valor!=0){
    scanf("%d", &valor);
    int ini1 = 1, ini2 = 0;
    div = valor % 2;
        while(div != 0){
            quadrado1 = (ini1) * (ini1);
            quadrado2 = (ini2) * (ini2);

            if (valor == (quadrado1 - quadrado2)){
                printf("%d - %d\n", quadrado1, quadrado2);
                break;
            }
            else {
            ini1++;
            ini2++;
            }
        }
    }
    return 0; 
}