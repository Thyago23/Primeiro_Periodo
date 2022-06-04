#include <stdio.h>
int main() {
    int hora, min, adicional, resultado, resto;
    printf("Digite a hora: \n");
    scanf("%d", &hora);
    printf("Agora digite os minutos: \n");
    scanf("%d", &min);
    printf("O horario informado foi: %d:%d\n", hora, min);
    printf("Informe o tempo adicional em minutos: \n");
    scanf("%d", &adicional);
    resultado = (hora*60 + min + adicional)/60;
    resto = (hora*60 + min + adicional)%60;
    printf("A hora resultou em: %d:%.2d", resultado, resto);
    return 0;
}