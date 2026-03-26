#include <stdio.h>

int b = 1;
int r = 1;

int main () {
    //movimento da torre
    printf("\nTorre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    //movimento do bispo
    printf("\nBispo:\n");
    while (b <= 5) {
        printf("Cima, Direita\n");
        b++;
    }

    //movimento da rainha
    printf("\nRainha:\n");
    do {
        printf("Esquerda\n");
        r++;
    } while (r <= 8);

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