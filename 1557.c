#include <stdio.h>
#include <math.h>
 
int main() {
 
    int qtdLinhas, lin, col, mtzQuad[15][15], a = 0;

    while (1){
        scanf ("%d", &qtdLinhas);

        if (qtdLinhas == 0) break;

        for (lin = 0; lin < qtdLinhas; lin ++) {
            a = lin;
            for (col = 0; col < qtdLinhas; col ++) {
                mtzQuad[lin][col] = pow(2, a);
                printf("\t%d",mtzQuad[lin][col]);
                a++;
            }
            printf("\n");
        }
    }   
}