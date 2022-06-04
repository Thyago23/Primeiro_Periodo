#include <stdio.h>
#include <stdlib.h>

int main(void){
    char c;
    char *pc;

    c = 'a';
    pc = &c;

    printf("%p %c\n", &c, c);

    printf("%p %c\n", pc, *pc);

    printf("%p\n", &pc);

    printf("%p %p\n", &*pc, *&pc);

    // O endereço apontado por pc é o endereço de c, que é igual ao ponteiro do endereço guardado em pc.

    return 0;
}