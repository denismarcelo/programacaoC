#include <stdio.h>

int main() {
    
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10];

    // imprimindo a primeira linha de letras
    printf("   ");
    for(int i = 0; i < 10; i++) {
        printf("%c ", linha[i]);
    }
    printf("\n");

    // definindo tudo como 0 (abaixo da primeira linha de letras)
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // definindo poder da cruz
    for(int i = 0; i <= 4; i++) {
        tabuleiro[i][3] = 3;

        for(int j = 1; j <= 5; j++) {
            tabuleiro[2][j] = 3;
        }
    }

    // definindo o poder do cone
    tabuleiro[5][2] = 1;
    for(int i = 1; i <= 3; i++) {
        tabuleiro[6][i] = 1;

        for(int j = 0; j <= 4; j++) {
            tabuleiro[7][j] = 1;
        }
    }

    // definindo o poder do octaedro
    tabuleiro[3][7] = 2;
    tabuleiro[7][7] = 2;
    for(int i = 5; i <= 10; i++){
        tabuleiro[5][i] = 2;
        
        for(int j = 6; j <= 8; j++) {
            tabuleiro[4][j] = 2;
            tabuleiro[6][j] = 2;
        }
    }

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