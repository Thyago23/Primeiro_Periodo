#include <stdio.h>
#include <string.h>

int main(){
    int valorEntrada;
    int i;

    char add[4] = "add";
    char and[4] = "and";
    char mov[4] = "mov";
    char sub[4] = "sub";

    scanf("%d", &valorEntrada);

    char palavra1[4];
    char valor1;
    char valor2;

    char palavras1[valorEntrada];
    char valores1[valorEntrada];
    char valores2[valorEntrada];

    for(i=0; i<valorEntrada; i++){
        scanf(" %s %c, %c", &palavra1, &valor1, &valor2);
        if(strcmp(palavra1, add) == 0){palavras1[i] = 1;}
        if(strcmp(palavra1, mov) == 0){palavras1[i] = 2;}
        if(strcmp(palavra1, sub) == 0){palavras1[i] = 3;}
        if(strcmp(palavra1, and) == 0){palavras1[i] = 4;}
        valores1[i] = valor1;
        valores2[i] = valor2;
    }

    for(i=0; i<valorEntrada; i++){
        if(palavras1[i] == 1){
            printf("%c += %c\n", valores1[i], valores2[i]);
        }
        if(palavras1[i] == 2){
            printf("%c = %c\n", valores1[i], valores2[i]);
        }
        if(palavras1[i] == 3){
            printf("%c -= %c\n", valores1[i], valores2[i]);
        }
        if(palavras1[i] == 4){
            printf("%c = %c & %c\n", valores1[i], valores1[i], valores2[i]); 
        }
    }
    return 0;
}