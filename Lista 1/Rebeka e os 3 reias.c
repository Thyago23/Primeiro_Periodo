#include <stdio.h>

int main()
{
    int premio;
    int porcentagem1, porcentagem2, porcentagem3;
    float partePessoa1, partePessoa2, partePessoa3;
    int rebekaDinheiro = 3;
    int adicional;

    scanf("%d %d %d %d", &premio, &porcentagem1, &porcentagem2, &porcentagem3);

    partePessoa1 = (premio * porcentagem1) / 100.0;
    partePessoa2 = (premio * porcentagem2) / 100.0;
    partePessoa3 = (premio * porcentagem3) / 100.0;

    adicional = premio - (partePessoa1 + partePessoa2 + partePessoa3);

    if ((partePessoa1 == (int)partePessoa1) && (partePessoa2 == (int)partePessoa2) && (partePessoa3 == (int)partePessoa3))
    {
        rebekaDinheiro += adicional;
        printf("Cada homem ficou com %.0f, %.0f e %.0f reais, respectivamente\n", partePessoa1, partePessoa2, partePessoa3);
    }
    else
    {
        premio++;
        partePessoa1 = (premio * porcentagem1) / 100.0;
        partePessoa2 = (premio * porcentagem2) / 100.0;
        partePessoa3 = (premio * porcentagem3) / 100.0;
        if ((partePessoa1 == (int)partePessoa1) && (partePessoa2 == (int)partePessoa2) && (partePessoa3 == (int)partePessoa3))
        {
            if (adicional >= 2)
            {
                rebekaDinheiro += adicional - 1;
                printf("Cada homem ficou com %.0f, %.0f e %.0f reais, respectivamente\n", partePessoa1, partePessoa2, partePessoa3);
            }
            else
            {
                printf("Nao foi dessa vez que Rebeka pode ajudar...\n");
            }
        }
        else
        {
            premio++;
            partePessoa1 = (premio * porcentagem1) / 100.0;
            partePessoa2 = (premio * porcentagem2) / 100.0;
            partePessoa3 = (premio * porcentagem3) / 100.0;
            if ((partePessoa1 == (int)partePessoa1) && (partePessoa2 == (int)partePessoa2) && (partePessoa3 == (int)partePessoa3))
            {
                if (adicional >= 3)
                {
                    rebekaDinheiro += adicional - 2;
                    char a, b, c;
                    scanf("%s", &a);
                    scanf("%s", &b);
                    scanf("%s", &c);
                    printf("Cada homem ficou com %.0f, %.0f e %.0f reais, respectivamente\n", partePessoa1, partePessoa2, partePessoa3);
                    printf("%d\n", ((a - 96) + (b - 96) + (c - 96)));
                }
                else
                {
                    printf("Nao foi dessa vez que Rebeka pode ajudar...\n");
                }
            }
            else
            {
                premio++;
                partePessoa1 = (premio * porcentagem1) / 100.0;
                partePessoa2 = (premio * porcentagem2) / 100.0;
                partePessoa3 = (premio * porcentagem3) / 100.0;
                if ((partePessoa1 == (int)partePessoa1) && (partePessoa2 == (int)partePessoa2) && (partePessoa3 == (int)partePessoa3))
                {
                    if (adicional >= 4)
                    {
                        rebekaDinheiro += adicional - 3;
                        int idade1, idade2, idade3, divisor = 0;
                        scanf("%d %d %d", &idade1, &idade2, &idade3);
                        printf("Cada homem ficou com %.0f, %.0f e %.0f reais, respectivamente\n", partePessoa1, partePessoa2, partePessoa3);
                        if (idade1 % 3 == 0)
                        {
                            divisor += idade1 / 3;
                        }
                        if (idade2 % 3 == 0)
                        {
                            divisor += idade2 / 3;
                        }
                        if (idade3 % 3 == 0)
                        {
                            divisor += idade3 / 3;
                        }
                        if (divisor != 0)
                        {
                            printf("%d\n", divisor);
                        }
                    }
                }
                else
                {
                    printf("Nao foi dessa vez que Rebeka pode ajudar...\n");
                }
            }
        }
    }
    if (rebekaDinheiro >= 7)
    {
        printf("Ela conseguiu! Rebeka voltou para casa e apanhou da mae por sumir noite passada!\n");
    }
    else
    {
        printf("E parece que Rebeka vai ter que voltar andando...\n");
    }
    return 0;
}