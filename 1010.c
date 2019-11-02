#include <stdio.h>

int main() {
	
	int cod1, cod2, qtd1, qtd2;
	double valor_uni1, valor_uni2, valor_total;
	
	scanf ("%d %d %lf", &cod1, &qtd1, &valor_uni1);
	scanf ("%d %d %lf", &cod2, &qtd2, &valor_uni2);
	
	valor_total = ((qtd1 * valor_uni1) + (qtd2 * valor_uni2));
	
	printf ("VALOR A PAGAR: R$ %.2lf\n", valor_total);
	
	return 0;
}
