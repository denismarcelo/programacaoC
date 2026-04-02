#include <stdio.h>
#include <stdbool.h>

#define linha 10
#define coluna 10

int main() {

    int matriz[linha][coluna];
    int target, soma = 1;
    bool found = false;

    printf("Digite um número de 1 a 100 para encontrar seu índice na matriz: ");
    scanf("%d", &target);

    for(int i = 0; i < linha; i++) {
        for(int j = 0; j < coluna; j++) {
            matriz[i][j] = soma;
            soma++;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    

    for(int i = 0; i < linha; i++) {
        for(int j = 0; j < coluna; j++) {
            if(matriz[i][j] == target) {
                printf("\n%d está no índice %d, %d!\n", target, i, j);
                found = true;
                break;
            }
        if(found) break;
        }

    }
    if(!found) {
        printf("\nElemento %d não encontrado na matriz.\n", target);
    }

    return 0;    
}