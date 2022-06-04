#include <stdio.h>

int main() {

    int hora, minutos;

    printf("Informe as horas no intervalo de 00 a 24: \n");
    scanf("%d", &hora);
    printf("Agora informe os minutos no intervalo de 00 a 59: \n");
    scanf("%d", &minutos);

    if ((00 <= hora) && (hora <= 11)) {
        printf("O horario atual e: %d:%.2d da manha\n", hora, minutos);
    }
    if (hora == 12) {
        printf("O horario atual e: %d:%.2d da tarde\n", hora, minutos);
    }
    if ((13 <= hora) && (hora <= 17)) {
        hora -= 12;
        printf("O horario atual e: %d:%.2d da tarde\n", hora, minutos);
    }
    if ((18 <= hora) && (hora <= 23)) {
        hora -= 12;
        printf("O horario atual e: %d:%.2d da noite\n", hora, minutos);
    }
    if (hora == 24) {
        hora -= 24;
        printf("O horario atual e: %d:%.2d da manha\n", hora, minutos);
    }
    system("pause");
    return 0;
}