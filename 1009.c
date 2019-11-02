#include <stdio.h>
 
int main() {
 
    char nome[20];
    double salario, comissao, sal_final;
    
    scanf (" %s", &nome);
    scanf ("%lf", &salario);
    scanf ("%lf", &comissao);
    
    sal_final = salario + (comissao * 0.15);
    
    printf ("TOTAL = R$ %.2lf", sal_final);
 
    return 0;
}
