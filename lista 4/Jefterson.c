#include <stdio.h>
#include <string.h>

int main(void)
{
    int numSuspeitos;
    scanf("%d", &numSuspeitos);

    int i, j, k;

    char provaDNA[3][11];
    char suspeitoNome[numSuspeitos][21];
    char suspeitoDNA[numSuspeitos][51];
    char *buscador;
    int contador1[numSuspeitos], contador2[numSuspeitos];

    for(i=0; i<3; i++){
        scanf(" %s", provaDNA[i]);
    }
    for(i=0; i<numSuspeitos; i++){
        scanf(" %s - %s", suspeitoNome[i], suspeitoDNA[i]);
        contador1[i] = 0;
        contador2[i] = 0;
    }

    for(i=0; i<numSuspeitos ; i++){
        buscador = 0;
        for(j=0; j<3 ;j++){
            buscador = strstr(suspeitoDNA[i], provaDNA[j]);
            if(buscador != NULL){
                contador2[i]++;
                contador1[i] += strlen(provaDNA[j]); 
            }
        }
    }

    for (i = 0; i < numSuspeitos-1; i++){
        for (j = i; j < numSuspeitos; j++ ){
            if(contador2[i] > contador2[j]){
                int armazenagem = contador2[j];
                contador2[j] = contador2[i];
                contador2[i] = armazenagem;
                char armazenagem2[21];
                strcpy(armazenagem2, suspeitoNome[j]);
                strcpy(suspeitoNome[j], suspeitoNome[i]);
                strcpy(suspeitoNome[i], armazenagem2);
                armazenagem = contador1[j];
                contador1[j] = contador1[i];
                contador1[i] = armazenagem;
            }
        }
    }

    if(contador2[numSuspeitos-1] != contador2[numSuspeitos-2]){
        printf("X reponsavel por essa atrocidade foi %s!", suspeitoNome[numSuspeitos-1]);
    }
    else {
        if (contador1[numSuspeitos-1] > contador1[numSuspeitos-2]){
            printf("X reponsavel por essa atrocidade foi %s!", suspeitoNome[numSuspeitos-1]);
        }
        else if (contador1[numSuspeitos-1] < contador1[numSuspeitos-2]){
            printf("X reponsavel por essa atrocidade foi %s!", suspeitoNome[numSuspeitos-2]);
        }
        else {
            printf("Nao pegamos x pilantra desse vez...");
        }
    }

    return 0;
}