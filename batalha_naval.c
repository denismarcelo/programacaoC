#include <stdio.h>

int main() {
    
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10];

    // definindo tudo como 0 (abaixo da primeira linha de letras)
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // definindo navio (simbolizado com 3) em DEF3
    for(int i = 3; i <= 5; i++) {
        tabuleiro[2][i] = 3;
    }

    // definindo navio (simbolizado com 3) em H678
    for(int i = 5; i <= 7; i++) {
        tabuleiro[i][7] = 3;
    }

    // imprimindo a primeira linha de letras
    printf("   ");
    for(int i = 0; i < 10; i++) {
        printf("%c ", linha[i]);
    }
    printf("\n");

    // imprimindo todos os zeros e substituindo a primeira coluna por números de 1 a 10
    for(int i = 0; i < 10; i++) {
        printf("%2d ", i + 1);

        for(int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }

        printf("\n");
    }



    return 0;
}