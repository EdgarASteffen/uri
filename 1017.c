#include <stdio.h>
 
int main() {
 
    float horas, veloc, tempoviag;
    
    scanf("%f", &horas);
	scanf("%f", &veloc);
	
	tempoviag = ((horas * veloc) / 12);
	
	printf("%.3f\n", tempoviag); 
 
    return 0;
}
