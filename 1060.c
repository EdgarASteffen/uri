#include <stdio.h>
 
int main() {
 
    double num;
	int qtd = 0, i;
    
    for (i = 0; i < 6; i++) {
    	scanf ("%lf", &num);
    	
    	if (num > 0.0) {
    		qtd++;
		}
	}
 
 	printf ("%d valores positivos\n", qtd);
 	
    return 0;
}
