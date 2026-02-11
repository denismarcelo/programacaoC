#include <stdio.h>
#include <string.h>

int main (){
    //criando as variáveis
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;
    float area1, area2, pib1, pib2;
    char estado1, estado2, codigo1[4], codigo2[4], nome_cidade1[20], nome_cidade2[20];

    //pedindo as informações da carta 1 ao usuário

    printf("Vamos começar preenchendo as informações da primeira Carta!\n");

    printf("Insira o Estado: ");
    scanf("%c", &estado1);

    printf("Insira o Código: ");
    scanf("%s", codigo1);

    getchar();

    printf("Insira o Nome da Cidade: ");
    fgets(nome_cidade1, 20, stdin);
    nome_cidade1[strcspn(nome_cidade1, "\n")] = '\0';

    printf("Insira a População: ");
    scanf("%d", &populacao1);

    printf("Insira a Área: ");
    scanf("%f", &area1);

    printf("Insira o PIB: ");
    scanf("%f", &pib1);

    printf("Insira o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    //pedindo as informações da carta 2 ao usuário

    printf("\nAgora vamos para a segunda Carta!\n");

    getchar();

    printf("Insira o Estado: ");
    scanf("%c", &estado2);

    printf("Insira o Código: ");
    scanf("%s", codigo2);

    getchar();

    printf("Insira o Nome da Cidade: ");
    fgets(nome_cidade2, 20, stdin);
    nome_cidade2[strcspn(nome_cidade2, "\n")] = '\0';

    printf("Insira a População: ");
    scanf("%d", &populacao2);

    printf("Insira a Área: ");
    scanf("%f", &area2);

    printf("Insira o PIB: ");
    scanf("%f", &pib2);

    printf("Insira o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    //exibindo as informações das cartas
    printf("\nAgora vamos exibir as informações das cartas!\n");
    printf("\nCarta 1:\n");
    printf("\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d habitantes\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nPontos Turísticos: %d\n", estado1, codigo1, nome_cidade1, populacao1, area1, pib1, pontos_turisticos1);

    printf("\nCarta 2:\n");
    printf("\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d habitantes\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nPontos Turísticos: %d\n", estado2, codigo2, nome_cidade2, populacao2, area2, pib2, pontos_turisticos2);
}