#include <stdio.h>

int SomaVaretas(int varetas, int i)
{
    int comp, nVaretas;

    if (i == 0)
    {
        return varetas;
    }

    else
    {
        scanf("%d %d", &comp, &nVaretas);

        if (nVaretas % 2 == 0)
        {
            varetas += nVaretas;
        }

        else
        {
            varetas += nVaretas - 1;
        }

        return SomaVaretas(varetas, (i - 1));
    }
}

int main()
{
    int n, tVaretas = 0;

    scanf("%d", &n);

    while (n != 0)
    {
        printf("%d\n", SomaVaretas(tVaretas, n) / 4);

        scanf("%d", &n);
    }
}