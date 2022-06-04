#include <stdio.h>

int main() {
    int dezena1, dezena2;
    int equacao1, equacao2, equacao3;

    printf("Digite uma dezena no intervalo de 10 a 99: ");
    scanf("%d", &dezena1);
    printf("Agora digite outra dezena no intervalo de 10 a 99: ");
    scanf("%d", &dezena2);

    equacao1 = dezena1 + dezena2;
    equacao2 = (equacao1 * equacao1) / 100;
    equacao3 = (equacao1 * equacao1) % 100;

    if ((equacao2== dezena1) && (equacao3 == dezena2)) {
        printf("Propriedade satisfeita, pois o valor do quadrado da soma foi: %d%d\n", equacao2, equacao3);
    }
    else {
        printf("Propriedade nao satisfeita\n");
    }
    
    system("pause");
    return 0;
}