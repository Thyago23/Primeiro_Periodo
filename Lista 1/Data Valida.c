#include <stdio.h>
int main() {
    int dia, mes, ano, resto1, resto2, restoEqua;
    scanf("%d %d %d", &dia, &mes, &ano);

    restoEqua = ano % 400;
    resto1 = ano % 100;
    resto2 = resto1 % 4;

    if ((1900 > ano) || (ano > 2100)) {
        printf("invalida");
    }
    else if (((mes == 1) || (mes == 3) || (mes == 7) || (mes == 8) || (mes == 10) || (mes == 12) || (mes == 5)) && ((dia >= 1) && (dia <= 31))) {
        printf("valida");
    }
    else if ((mes == 4) || (mes == 6) || (mes == 9) || (mes == 11) && (dia == 31)) {
        printf("invalida");
    }
    else if ((mes == 4) || (mes == 6) || (mes == 9) || (mes == 11) && (dia >= 1) && (dia < 31)) {
        printf("valida");
    }
    else if (resto2 > 0 && (mes == 2) && (dia == 29)) {
        printf("invalida");
    }
    else if ((resto2 == 0) && (mes == 2) && (restoEqua == 0) && ((dia >=1 ) && (dia <= 29))) {
        printf("valida");
    }
    else if ((resto2 != 0 ) && (mes == 2) && ((dia >=1 ) && (dia <= 28))) {
        printf("valida");
    }
    else {
        printf("invalida");
    }
    return 0;
}