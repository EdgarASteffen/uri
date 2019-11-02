#include <stdio.h>
 
int main() {
 
    int n, m, i, j;    
	
    while (1) {
    	scanf("%d %d", &n, &m);
    	
    	if (m < 1 || n < 1){
    		break;
		}
		
    	else {
    		j = 0;
    		
		    if (m > n) {
		    	for (i = n; i <= m; i++) {
		    		printf("%d ", i);
		    		j += i;
				}
				
				printf("Sum=%d\n", j);
			}
			
			else if (m < n) {
				for (i= m; i <= n; i++) {
					printf("%d ", i);
					j += i;
				}
				
				printf("Sum=%d\n", j);
			}
		}
	}
	
    return 0;
}
