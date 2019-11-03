#include <stdio.h>

int main()
{
    int minI, horI, minF, horF, tempH = 0, tempM = 0;

    scanf("%d %d %d %d", &horI, &minI, &horF, &minF);

    tempH = horF - horI;

    if (tempH < 0)
    {
        tempH = 24 + (horF - horI);
    }

    tempM = minF - minI;

    if (tempM < 0)
    {
        tempM = 60 + (minF - minI);
        tempH -= 1;
    }

    if (horF == horI && minF == minI)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }

    else
    {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", tempH, tempM);
    }

    return 0;
}