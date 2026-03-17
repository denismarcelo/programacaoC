#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int opcao, numeroSecreto, palpite;

    //imprimindo o menu do jogo
    printf("Menu principal\n");
    printf("1. Iniciar jogo\n");
    printf("2. Ver regras\n");
    printf("3. Sair\n");
    printf("Selecione uma opção: ");
    scanf("%d", &opcao);

    //executando as opções do menu
    switch(opcao) {
        case 1:
            srand(time(0));
            numeroSecreto = rand() % 10;
            printf("Digite um número de 0 a 9: ");
            scanf("%d", &palpite);

            if(numeroSecreto == palpite) {
                printf("Parabéns, você acertou!\n");
                printf("Número secreto: %d\n", numeroSecreto);
            } else {
                printf("Você errou :(\n");
                printf("Número secreto: %d\n", numeroSecreto);
            }

            break;
        case 2:
            printf("Explicação das  regras...");
            break;
        case 3:
            printf("Saindo do jogo.");
            break;
        default:
            printf("Opção inválida.");
            break;
    }
}