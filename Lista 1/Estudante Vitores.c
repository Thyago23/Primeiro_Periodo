#include <stdio.h>
#include <math.h>
int main() {
    int a = 0, b = 0, c = 0;
    int q = 0, r = 0, m = 0, d = 0, sm = 0, sb = 0;
    scanf("%d %d %d", &a, &b, &c);


    if (a * a == c) {
        q++;
        printf("Quadrado Vitoris\n");
    }
    if ((a % b == c) && q==1) {
        r++;
        printf("tambem Resto\n");
    }
    if ((a % b == c) && q==0) {
        r++;
        printf("Resto Vitoris\n");
    }
    if ((a * b == c) && (q==1 || r==1)) {
        m++;
        printf("tambem Multi\n");
    }
    if ((a * b == c) && (q==0 && r==0)) {
        m++;
        printf("Multi Vitoris\n");
    }
    if ((a / b == c) && (q==1 || r==1 || m==1)) {
        d++;
        printf("tambem Div\n");
    }
    if ((a / b == c) && (q==0 && r==0 && m==0)) {
        d++;
        printf("Div Vitoris\n");
    }
    if ((a + b == c) && (q==1 || r==1 || m==1 || d==1)) {
        sm++;
        printf("tambem Soma\n");
    }
    if ((a + b == c) && (q==0 && r==0 && m==0 && d==0)) {
        sm++;
        printf("Soma Vitoris\n");
    }
    if ((a - b == c) && (q==1 || r==1 || m==1 || d==1 || sm==1)) {
        sb++;
        printf("tambem Sub\n");
    }
    if ((a - b == c) && (q==0 && r==0 && m==0 && d==0 && sm==0)) {
        sb++;
        printf("Sub Vitoris\n");
    }
    if (q==0 && r==0 && m==0 && d==0 && sm==0 && sb==0) {
        printf("Impossivel vitores");
    }
    return 0;
}