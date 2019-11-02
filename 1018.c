#include <stdio.h>
 
int main() {
 
    int m, n100, n50, n20, n10, n5, n2, n;
    
    scanf("%d", &m);
    
    n100 = m / 100;
    n50 = (m % 100) / 50;
    n20 = ((m % 100) % 50) / 20;
    n10 = (((m % 100) % 50) % 20) / 10;
    n5 = ((((m % 100) % 50) % 20) % 10) / 5;
    n2 = (((((m % 100) % 50) % 20) % 10) % 5) /2;
    n = ((((((m % 100) % 50) % 20) % 10) % 5) % 2) / 1;
    
    printf("%d\n", m);
    printf("%d nota(s) de R$ 100,00\n", n100);
    printf("%d nota(s) de R$ 50,00\n", n50);
    printf("%d nota(s) de R$ 20,00\n", n20);
    printf("%d nota(s) de R$ 10,00\n", n10);
    printf("%d nota(s) de R$ 5,00\n", n5);
    printf("%d nota(s) de R$ 2,00\n", n2);
    printf("%d nota(s) de R$ 1,00\n", n);
 
    return 0;
}
