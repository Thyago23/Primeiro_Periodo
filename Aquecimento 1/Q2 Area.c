#include <stdio.h>
#define pi 3.14159

int main() {
    float base, altura, retangulo, raio, circulo, proporcao, total;
    printf("Informe o comprimento da base: \n");
    scanf("%f", &base);
    printf("Informe a proporcao da base para a altura: \n");
    scanf("%f", &proporcao);
    altura = base / proporcao;
    retangulo = base * altura;
    printf("A area do retangulo e: %.2f\n", retangulo);
    raio = altura / 2;
    circulo = pi * raio * raio;
    printf("A area do circulo e: %.2f\n", circulo);
    total = retangulo + circulo;
    printf("A area total e: %.2f\n", total);
    return 0;
}