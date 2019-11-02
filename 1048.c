#include <stdio.h>
 
int main() {
 
    float salario, reaj = 0.0;
    
    scanf("%f", &salario);
    
    if 	(salario <=400.00) {
    	reaj = salario * 0.15;
    	
    	printf("Novo salario: %.2f\n", salario+reaj);
    	printf("Reajuste ganho: %.2f\n", reaj);
    	printf("Em percentual: 15 %\n");
	}
	
	else if (salario <= 800.00) {
		reaj = salario * 0.12;
		
		printf("Novo salario: %.2f\n", salario+reaj);
    	printf("Reajuste ganho: %.2f\n", reaj);
    	printf("Em percentual: 12 %\n");
	}
	
	else if (salario <= 1200.00) {
		reaj = salario * 0.1;
		
		printf("Novo salario: %.2f\n", salario+reaj);
    	printf("Reajuste ganho: %.2f\n", reaj);
    	printf("Em percentual: 10 %\n");
    }
	
	else if (salario <= 2000.00) {
		reaj = salario * 0.07;
		
		printf("Novo salario: %.2f\n", salario+reaj);
    	printf("Reajuste ganho: %.2f\n", reaj);
    	printf("Em percentual: 7 %\n");
	}
	
	else {
		reaj = salario * 0.04;
		
		printf("Novo salario: %.2f\n", salario+reaj);
    	printf("Reajuste ganho: %.2f\n", reaj);
    	printf("Em percentual: 4 %\n");
	}
 
    return 0;
}
