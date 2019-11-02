#include <stdio.h>
 
int main() {
 
    double num, soma = 0.0, media = 0.0;
	int qtd = 0, i;
    
    for (i = 0; i < 6; i++) {
    	scanf ("%lf", &num);
    	
    	if (num > 0.0) {
    		qtd++;
    		soma += num;
		}
	}
	
	media = soma / qtd;
 
 	printf ("%d valores positivos\n", qtd);
 	printf("%.1lf\n", media);
 
    return 0;
}
