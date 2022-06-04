#include <stdio.h>
int main() {
    int doce, p1, p2, p3;
    scanf("%d", &doce);
    scanf("%d", &p1);
    scanf("%d", &p2);
    scanf("%d", &p3);
    if ((p1 + p2 + p3) <= doce) {
        printf("3");
    }
    else if ((p1 + p2 <= doce) || (p1 + p3 <= doce) || (p2 + p3 <= doce)) {
        printf("2");
    }
    else if ((p1 <= doce) || (p2 <= doce) || (p3 <= doce)) {
        printf("1");
    }
    else {
        printf("0");
    }
return 0;
}