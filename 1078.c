#include <stdio.h>
 
int main() {
 
    int i, tab;
    
    scanf("%d", &tab);
    
    for (i = 0; i < 10; i++) {
    	printf("%d x %d = %d\n", i+1, tab, tab*(i+1));
	}
 
    return 0;
}
