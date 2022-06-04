#include <stdio.h>
#include <string.h>

int main()
{
    char str[50]; // String
    char str_inv[50]; // String invertida
    char *ptr_str = str;
    char *ptr_inv = str_inv;
    int i=-1;
    scanf(" %s", str);

    i+=1;
    while(*(ptr_str+i) != '\0'){
        i++;
    }
    while(i>0){
        *(ptr_inv++) = *(ptr_str+i-1);
        i--;
    }
    *(ptr_inv++) = '\0';

    // Porque uma string é um vetor de caracteres, assim como um ponteiro, que armazena cada caracter na devida posição desse vetor.

    printf(" O inverso da string : %s\n\n",str_inv);
    return 0;
}