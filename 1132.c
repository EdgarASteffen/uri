#include <stdio.h>
 
int main() {
 
    int i, X, Y, soma;

    scanf ("%d", &X); //100
    scanf ("%d", &Y); //200

    soma = 0;

    if (X < Y) {
        for (i = X; i <= Y; i++) {
            if (i % 13 != 0) {
                soma = soma + i;
            }
        }
    }

    else if (Y < X) {
        for (i = Y; i <= X; i++) {
            if (i % 13 != 0) {
                soma = soma + i;
            }
        }
    }

    printf ("%d\n", soma);
 
    return 0;
}