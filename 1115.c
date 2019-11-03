#include <stdio.h>

int main()
{
    int X, Y;

    scanf("%d %d", &X, &Y);

    while (1)
    {
        if ((X > 0) && (Y > 0))
        {
            printf("primeiro\n");
            scanf("%d %d", &X, &Y);
        }

        else if ((X < 0) && (Y > 0))
        {
            printf("segundo\n");
            scanf("%d %d", &X, &Y);
        }

        else if ((X < 0) && (Y < 0))
        {
            printf("terceiro\n");
            scanf("%d %d", &X, &Y);
        }

        else if ((X > 0) || (Y < 0))
        {
            printf("quarto\n");
            scanf("%d %d", &X, &Y);
        }

        else
        {
            break;
        }
    }

    return 0;
}