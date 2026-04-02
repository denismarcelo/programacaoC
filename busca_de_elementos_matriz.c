#include <stdio.h>
#include <stdbool.h>

int main() {

    int matriz[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int target;

    printf("Digite um número de 1 a 16 para encontrar sua posição na matriz: ");
    scanf("%d", &target);

    bool found = false;

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(matriz[i][j] == target) {
                printf("\n%d está na posição %d, %d!\n", target, i, j);
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