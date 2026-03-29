#include <stdio.h>

void moverTorre (int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas  - 1);
    }
}

void moverBispo (int casas) {
    if (casas > 0) {
        printf("Cima, Direita\n");
        moverBispo(casas  - 1);
    }
}

void moverRainha (int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas  - 1);
    }
}

int main () {
    printf("Torre:\n");
    moverTorre(5);

    printf("\nBispo:\n");
    moverBispo(5);

    printf("\nRainha:\n");
    moverRainha(8);

    //movimento do cavalo
    int i = 1;
    printf("\nCavalo:\n");
    while (i < 2) {

        for (int j = 1; j <= 2; j++) {
            printf("Baixo\n");
        }

        printf("Esquerda\n");
        i++;
        printf("\n");
    }

    return 0;
}