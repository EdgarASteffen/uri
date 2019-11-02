#include <stdio.h>
#include <math.h>

int main()
{

    int dinero, n100, n50, n20, n10, n5, n2;
    int moedas, m1, m50, m25, m10, m05, m01;
    double money;
    double convM;

    scanf("%lf", &money);

    dinero = (int)money;
    convM = money - dinero;
    moedas = convM * 100;

    n100 = dinero / 100;
    n50 = (dinero % 100) / 50;
    n20 = ((dinero % 100) % 50) / 20;
    n10 = (((dinero % 100) % 50) % 20) / 10;
    n5 = ((((dinero % 100) % 50) % 20) % 10) / 5;
    n2 = (((((dinero % 100) % 50) % 20) % 10) % 5) / 2;

    m1 = (((((dinero % 100) % 50) % 20) % 10) % 5) % 2;
    m50 = moedas / 50;
    m25 = (moedas % 50) / 25;
    m10 = ((moedas % 50) % 25) / 10;
    m05 = (((moedas % 50) % 25) % 10) / 5;
    m01 = (((moedas % 50) % 25) % 10) % 5;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", n100);
    printf("%d nota(s) de R$ 50.00\n", n50);
    printf("%d nota(s) de R$ 20.00\n", n20);
    printf("%d nota(s) de R$ 10.00\n", n10);
    printf("%d nota(s) de R$ 5.00\n", n5);
    printf("%d nota(s) de R$ 2.00\n", n2);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", m1);
    printf("%d moeda(s) de R$ 0.50\n", m50);
    printf("%d moeda(s) de R$ 0.25\n", m25);
    printf("%d moeda(s) de R$ 0.10\n", m10);
    printf("%d moeda(s) de R$ 0.05\n", m05);
    printf("%d moeda(s) de R$ 0.01\n", m01);

    return 0;
}
