#include <stdio.h>
 
int main() {
 
    int tempoI, tempoF, duracao;

    scanf ("%d %d", &tempoI, &tempoF);

    if (tempoF > tempoI) {
        duracao = tempoF - tempoI;
    }

    else {
        duracao = (tempoF - tempoI) + 24;
    }

    printf("O JOGO DUROU %d HORA(S)\n", duracao);
 
    return 0;
}