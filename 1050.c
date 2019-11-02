#include <stdio.h>
#include <string.h>
 
int main() {
 
    char DDD[3];
    
    scanf ("%s", DDD);
    
    if (strcmp(DDD,"11") == 0) {
    	printf("Sao Paulo\n");
	}
	
	else if (strcmp(DDD,"19") == 0) {
		printf("Campinas\n");
	}
	
	else if (strcmp(DDD,"21") == 0) {
		printf("Rio de Janeiro\n");
	}
	
	else if (strcmp(DDD,"27") == 0) {
		printf("Vitoria\n");
	}
	
	else if (strcmp(DDD,"31") == 0) {
		printf("Belo Horizonte\n");
	}
	
	else if (strcmp(DDD,"32") == 0) {
		printf("Juiz de Fora\n");
	}
	
	else if (strcmp(DDD,"61") == 0) {
		printf("Brasilia\n");
	}
	
	else if (strcmp(DDD,"71") == 0) {
		printf("Salvador\n");
	}
	
	else {
		printf("DDD nao cadastrado\n");
	}
 
    return 0;
}
