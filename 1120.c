#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    int j, i, x;
    char numGeral[200], numIn;

    scanf ("%c %s", &numIn, numGeral);

    while (numIn != '0') {

        x = strlen(numGeral);
        
        for (i = 0; i < x; i++) {
            if (numGeral[i] == numIn) {
                for (j = i; j < x; j++) {
                    numGeral[j] = numGeral[j + 1];
                }
                numGeral[x - 1] = 0;
                x--;
                i--;
            }
        }

        for (i = 0; i < x - 1; i++) {
            if (numGeral[i] == '0') {
                for (j = i; j < x; j++) {
                    numGeral[j] = numGeral[j + 1];
                }
                numGeral[x - 1] = 0;
                x--;
                i--;
            }

            else {
                break;
            }
        }

        if (x == 0) {
            numGeral[0] = '0';
            numGeral[1] = '\0';
        }

        printf ("%s\n", numGeral);

        scanf (" %c %s", &numIn, numGeral);
    }

    return 0;
}