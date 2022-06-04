#include <stdio.h>

int main() {
    int moedas, precoA, precoB, precoC, precoD;
    float custoBenA, custoBenB, custoBenC, custoBenD;
    scanf("%d", &moedas);
    scanf("%d %d %d %d", &precoA, &precoB, &precoC, &precoD);

    custoBenA = 80 / precoA;
    custoBenB = 100 / precoB;
    custoBenC = 120 / precoC;
    custoBenD = 80 / precoD;

    if ((moedas < precoA) && (moedas < precoB) && (moedas < precoB) && (moedas < precoB)) {
        printf("Acho que vou a pe :(");
    }
    else if ((custoBenA >= custoBenB) && (custoBenA >= custoBenC) && (custoBenA >= custoBenD)) {
        printf("Verde");
    }
    else if ((custoBenB > custoBenA) && (custoBenB >= custoBenC) && (custoBenB >= custoBenD)) {
        printf("Vermelho");
    }
    else if ((custoBenC > custoBenA) && (custoBenC > custoBenB) && (custoBenC >= custoBenD)) {
        printf("Roxo");
    }
    else if ((custoBenD > custoBenA) && (custoBenD > custoBenB) && (custoBenD > custoBenC)) {
        printf("Amarelo");
    }    
    return 0;
}