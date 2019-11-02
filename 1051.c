#include <stdio.h>
 
int main() {
 
    float salario, reaj;
    
    scanf("%f", &salario);
    
    if (salario <= 2000) {
    	printf("Isento\n");
	}
	
	else if (salario <= 3000) {
		reaj = (salario - 2000.0) * 0.08; 
		printf("R$ %.2f\n", reaj);
	}
	
	else if (salario <= 4500) {
		reaj = (salario - 3000.0) * 0.18 + (1000 * 0.08);
		printf("R$ %.2f\n", reaj);
	}
	
	else {
		reaj = (salario - 4500.0) * 0.28 + (1500 * 0.18) + (1000 * 0.08);
		printf("R$ %.2f\n", reaj);
	}
 
    return 0;
}
