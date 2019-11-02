#include <stdio.h>
 
int main() {
 
    int km;
    double litros, gastos;
    
    scanf ("%d %lf", &km, &litros);
    
    gastos = km / litros;
    
    printf ("%.3lf km/l\n", gastos);
 
    return 0;
}
