#include <stdio.h>

int main()
{
    int i, n, primo;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &primo);

        if (primo == 2 || primo == 3 || primo == 5 || primo == 7 || primo == 11)
        {
            printf("%d eh primo\n", primo);
        }

        else
        {

            if (primo % 2 == 0)
            {
                printf("%d nao eh primo\n", primo);
            }

            else if (primo % 3 == 0)
            {
                printf("%d nao eh primo\n", primo);
            }

            else if (primo % 5 == 0)
            {
                printf("%d nao eh primo\n", primo);
            }

            else if (primo % 7 == 0)
            {
                printf("%d nao eh primo\n", primo);
            }

            else if (primo % 11 == 0)
            {
                printf("%d nao eh primo\n", primo);
            }

            else
            {
                printf("%d eh primo\n", primo);
            }
        }
    }

    return 0;
}