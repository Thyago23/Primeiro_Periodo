#include <stdio.h>
int main() {
    int soldadosA, tanquesA, avioesA, lancaA;
    int soldadosI, tanquesI, avioesI, lancaI;
    int soldadosR, tanquesR, avioesR, lancaR;
    int forSold, forTanq, forAvio, forLanc;
    int decisaoAliada = 0;
    int decisaoInimiga = 0;

    scanf("%d %d %d %d", &soldadosA, &tanquesA, &avioesA, &lancaA);
    scanf("%d %d %d %d", &soldadosI, &tanquesI, &avioesI, &lancaI);
    scanf("%d %d %d %d", &soldadosR, &tanquesR, &avioesR, &lancaR);

    forSold = soldadosA - (soldadosI + soldadosR);
    forTanq = tanquesA - (tanquesI + tanquesR);
    forAvio = avioesA - (avioesI + avioesR);
    forLanc = lancaA - (lancaI + lancaR);

    if (forSold > 0) {
        decisaoAliada += 1;
    }
    if (forSold < 0) {
        decisaoInimiga += 1;
    }
    if (forTanq > 0) {
        decisaoAliada += 1;
    }
    if (forTanq < 0) {
        decisaoInimiga += 1;
    }
    if (forAvio > 0) {
        decisaoAliada += 1;
    }
    if (forAvio < 0) {
        decisaoInimiga += 1;
    }
    if (forLanc > 0) {
        decisaoAliada += 1;
    }
    if(forLanc < 0) {
        decisaoInimiga += 1;
    }
    if (decisaoAliada >= 3) {
        printf("Avancar");
    }
    else if (3 <= decisaoInimiga) {
        printf("Recuar");
    }
    else if ((decisaoAliada <= 2) && (decisaoInimiga <= 2)) {
        printf("Permanecer");
    }
    return 0;
}