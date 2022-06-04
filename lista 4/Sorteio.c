#include <stdio.h>
#include <string.h>

int main(){
    int pessoasCarro;
    int pessoasMoto;
    int i, j;
    int numero1, numero2;
    char nomeBackup[11];

    scanf(" %d", &pessoasCarro);
    char nomesC[pessoasCarro][11];

    for(i=0; i<pessoasCarro; i++){
        scanf(" %s", nomesC[i]);
    }

    scanf(" %d", &pessoasMoto);
    char nomesM[pessoasMoto][11];

    for(i=0; i<pessoasMoto; i++){
        scanf(" %s", nomesM[i]);
    }

    for(i = 0; i < pessoasCarro; i++){ 
        for(j = i+1; j < pessoasCarro ; j++){       
            if(strcmp(nomesC[i], nomesC[j]) > 0){
                strcpy(nomeBackup, nomesC[i]);
                strcpy(nomesC[i], nomesC[j]);
                strcpy(nomesC[j], nomeBackup);
            }
        }
    }
    for(i = 0; i < pessoasMoto; i++){
        for(j = i+1; j < pessoasMoto; j++){
            if(strcmp(nomesM[i], nomesM[j]) > 0){
                strcpy(nomeBackup, nomesM[i]);
                strcpy(nomesM[i], nomesM[j]);
                strcpy(nomesM[j], nomeBackup);
            }
        }
    }

    scanf("%d %d", &numero1, &numero2);
    numero1--;
    numero2--;

    if(strcmp(nomesC[numero1], nomesM[numero2]) == 0){
        printf("Quem ganhou tudo hoje foi %s", nomesC[numero1]);
    }
    else{
        printf("Quem ganhou o carro foi: %s\n", nomesC[numero1]);
        printf("Quem ganhou a moto foi: %s\n", nomesM[numero2]);
    }

    return 0;
}