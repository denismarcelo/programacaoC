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

    return 0;
}