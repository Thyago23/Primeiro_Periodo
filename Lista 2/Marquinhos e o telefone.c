#include <stdio.h>
int main() {
    int n1, n4, nRestante, soma;
    int divisor, contador1 = 0, contador2 = 0, contadorGeral = 0;
    int testePrimo1, testePrimo2;
    scanf("%d__%d-%d", &n1, &n4, &nRestante);

    if(n1!=0 && n4!=0) {
        for(soma=0; soma<=99; soma++) {
            contador1 = 0;
            contador2 = 0;
            testePrimo1 = soma /n1;
            testePrimo2 = soma /n4;
            for(divisor=1; divisor<=testePrimo1; divisor++){
                if(testePrimo1 % divisor==0){
                    contador1++;
                }
            }
            if (contador1 == 2) {
                contadorGeral++;
                for(divisor=1; divisor<=testePrimo2; divisor++){
                    if(testePrimo2 % divisor ==0){
                        contador2++;
                    }
                }
                if(contador2 == 2){
                    printf("%d%.2d%d-%d\n", n1, soma, n4, nRestante);
                    contadorGeral++;
                }
            } 
        }
        if (contadorGeral == 0) {
            printf("Marquinhos esta louco!\n");
        }
    }
    else {
        printf("Marquinhos esta louco!\n");
    }
    return 0;
}