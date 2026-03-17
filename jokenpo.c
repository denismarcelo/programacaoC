#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int escolhaJogador, escolhaComputador;

    //menu do jogo
    printf("*** Jogo de Jokenpô ***\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Escolha uma opção: ");
    scanf("%d", &escolhaJogador);

    //selecionando escolhas
    switch(escolhaJogador) {
        case 1:
        printf("Jogador: Pedra\n");
        break;
        case 2:
        printf("Jogador: Papel\n");
        break;
        case 3:
        printf("Jogador: Tesoura\n");
        break;
        default:
        printf("Opção inválida.\n");
    }

    srand(time(0));
    escolhaComputador = rand() % 3 + 1; //vai de 0 a 2, somando 1 fica de 1 a 3

    switch(escolhaComputador) {
        case 1:
        printf("Computador: Pedra\n");
        break;
        case 2:
        printf("Computador: Papel\n");
        break;
        case 3:
        printf("Computador: Tesoura\n");
        break;
    }

    if(escolhaJogador == escolhaComputador) {
        printf("### Empatou! ###\n");
    } else if((escolhaJogador == 1) && (escolhaComputador == 3) ||
            (escolhaJogador == 2) && (escolhaComputador == 1) ||
            (escolhaJogador == 3) && (escolhaComputador == 2)) {
                printf("### Parabéns, você venceu! ###\n");
            } else {
                printf("### Você perdeu! ###\n");
            }

}