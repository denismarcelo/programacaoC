#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numeroAleatorio, numeroEscolhido, palpite;

int main() {
    srand(time(0));
    numeroAleatorio = rand() % 101;
    
    printf("Digite um número de 0 a 100: ");
    scanf("%d", &numeroEscolhido);

    printf("\nAposta:\n");
    printf("1. Meu número é maior!\n");
    printf("2. Meu número é menor!\n");
    printf("3. Vai ser empate!\n");
    printf("Selecione uma opção: ");
    scanf("%d", &palpite);

    switch(palpite) {
        case 1:
            numeroEscolhido > numeroAleatorio ? printf("\nParabéns, você acertou! O número era %d\n.", numeroAleatorio) : printf("\nNão foi dessa vez. O número era %d!\n", numeroAleatorio);
            break;
        case 2:
            numeroEscolhido < numeroAleatorio ? printf("\nParabéns, você acertou! O número era %d\n.", numeroAleatorio) : printf("\nNão foi dessa vez. O número era %d!\n", numeroAleatorio);
            break;
        case 3:
            numeroEscolhido < numeroAleatorio ? printf("\nParabéns, deu empate! O número era %d\n.", numeroAleatorio) : printf("\nNão foi dessa vez. O número era %d!\n", numeroAleatorio);
            break;
        default:
            printf("Opção inválida.");
            break;
    }
}