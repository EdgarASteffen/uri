#include <stdio.h>
 
int main() {
 
    float ladoA, ladoB, ladoC, perim, area;
    
    scanf("%f %f %f", &ladoA, &ladoB, &ladoC);
    
    if (ladoA < ladoB + ladoC && ladoB < ladoA + ladoC && ladoC < ladoA + ladoB) {
    	perim = ladoA + ladoB + ladoC;
		
		printf("Perimetro = %.1f\n", perim);
	}
	
	else {
		area = ((ladoA + ladoB) * ladoC) / 2.0;
    	
    	printf("Area = %.1f\n", area);
	}
 
    return 0;
}
