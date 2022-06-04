#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    float X1, X2, delta;

    printf("Digite o valor de a: \n");
    scanf("%d", &a);
    printf("Digite o valor de b: \n");
    scanf("%d", &b);
    printf("Por ultimo o valor de c: \n");
    scanf("%d", &c);

    delta = b*b - 4*a*c;
    X1 = (-b + sqrt(delta)) / (2 * a);
    X2 = (-b - sqrt(delta)) / (2 * a);

    if (delta > 0) {
        printf("A primeira raiz da equacao e: %.2f \n", X1);
        printf("A segunda raiz da equacao e: %.2f \n", X2);
    }
    if (delta < 0) {
        printf("Nao ha raizes no conjunto dos numeros reais que satisfaca a equacao\n");
    }
    if (delta == 0) {
        printf("A raiz de X1 é igual a raiz de X2\n"); 
    }
    else {
        printf("Erro de valores!");
    }

    system("pause");
    return 0;
}