#include <stdio.h>
#include <string.h>

int main()
{
    int senha;

    scanf("%d", &senha);

    while (1)
    {
        if (senha != 2002)
        {
            printf("Senha Invalida\n");

            scanf("%d", &senha);
        }

        else
        {
            printf("Acesso Permitido\n");
            break;
        }
    }

    return 0;
}