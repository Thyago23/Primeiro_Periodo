#include <stdio.h>
#include <math.h>

int main() {
    int x, y, a, b, n, m;
    int equa1, pot1, equa2, pot2, equa3;
    scanf("(%d, %d)", &x, &y);
    scanf("%d*x^%d - %d*y^%d", &a, &n, &b, &m); //a*x^n - b*y^m != 0

    pot1 = pow(x, n);
    equa1 = a * pot1;
    pot2 = pow(y, m);
    equa2 = b * pot2;
    equa3 = equa1 - equa2;

    if (equa3 != 0) {
        printf("a função está definida em (%d,%d)", x, y);
    }
    else {
        printf("a função não está definida em (%d,%d) .-.", x, y);
    }
    return 0;
}