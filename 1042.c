#include <stdio.h>
 
int main() {
 
    int a, b, c, x=0, y=0, z=0;
    
    scanf("%d %d %d", &a, &b, &c);
    
    if ((a > b) && (a > c) && (b > c)) {
    	x = a;
    	y = b;
    	z = c;
	}
	
	else if ((a > b) && (a > c) && (c > b)) {
		x = a;
		y = c;
		z = b;
	}
	
	else if ((b > a) && (b > c) && (a > c)) {
		x = b;
		y = a;
		z = c;
	}
	
	else if ((b > a) && (b > c) && (c > a)) {
		x = b;
		y = c;
		z = a;
	}
	
	else if ((c > a) && (c > b) && (a > b)) {
		x = c;
		y = a;
		z = b;
	}
	
	else {
		x = c;
		y = b;
		z = a;
	}
	
	printf("%d\n%d\n%d\n", z, y, x);
	printf("\n%d\n%d\n%d\n", a, b, c);
 
    return 0;
}
