#include <stdio.h>

int main() {
    int a, b, c, d, e, f;
    float x, y;
    printf("Insira os valores de (a, b, c, d, e e f) respectivamente, apenas os separando com o botao enter: \n");
    printf("Digite o valor de a: \n");
    scanf("%d", &a);
    printf("Digite o valor de b: \n");
    scanf("%d", &b);
    printf("Digite o valor de c: \n");
    scanf("%d", &c);
    printf("Digite o valor de d: \n");
    scanf("%d", &d);
    printf("Digite o valor de e: \n");
    scanf("%d", &e);
    printf("Digite o valor de f: \n");
    scanf("%d", &f);

    y = (a*f - d*c) / (a*e - d*b);
    x = (c - b*y) / a;

    printf("O valor de  y e: %f\n", y);
    printf("O valor de x e: %f\n", x);
    return 0;
}