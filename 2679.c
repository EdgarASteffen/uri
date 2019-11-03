#include <stdio.h>

int main()
{
    int X, Y;

    scanf("%d", &X);

    if (X % 2 == 0)
    {
        Y = X + 2;
    }

    else
    {
        Y = X + 1;
    }

    printf("%d\n", Y);

    return 0;
}