#include <stdio.h>
#include <string.h>

//criando as variáveis
int pontos_turisticos1, pontos_turisticos2;
unsigned long int populacao1, populacao2;
float area1, area2, densidade1, densidade2, pib_capta1, pib_capta2, super_poder1, super_poder2;
char estado1, estado2, codigo1[4], codigo2[4], nome_cidade1[20], nome_cidade2[20];
double pib1, pib2;

float densidade_populacional1() {
    densidade1 = (double)populacao1 / area1;
    return densidade1;
}

float densidade_populacional2() {
    densidade2 = (double)populacao2 / area2;
    return densidade2;
}

float pib_per_capta1() {
    pib_capta1 = pib1 / (double)populacao1;
    return pib_capta1;
}

float pib_per_capta2() {
    pib_capta2 = pib2 / (double)populacao2;
    return pib_capta2;
}

int main (){

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
    scanf("%lu", &populacao1);

    printf("Insira a Área: ");
    scanf("%f", &area1);

    printf("Insira o PIB: ");
    scanf("%lf", &pib1);

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
    scanf("%lu", &populacao2);

    printf("Insira a Área: ");
    scanf("%f", &area2);

    printf("Insira o PIB: ");
    scanf("%lf", &pib2);

    printf("Insira o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    densidade_populacional1();
    densidade_populacional2();
    pib_per_capta1();
    pib_per_capta2();

    //calculando o super poder das cartas
    super_poder1 = (double)populacao1 + (double)area1 + pib1 + (double)pontos_turisticos1 + (double)pib_capta1 + (double)(1.0 / densidade1);
    super_poder2 = (double)populacao2 + (double)area2 + pib2 + (double)pontos_turisticos2 + (double)pib_capta2 + (double)(1.0 / densidade2);

    //exibindo as informações das cartas
    printf("\nAgora vamos exibir as informações das cartas!\n");
    printf("\nCarta 1:\n");
    printf("\nEstado: %c\n"
        "Código: %s\n"
        "Nome da Cidade: %s\n"
        "População: %lu habitantes\n"
        "Área: %.2f km²\n"
        "PIB: %.2lf reais\n"
        "Pontos Turísticos: %d\n"
        "Densidade Populacional: %.2f hab/km²\n"
        "PIB per Capita: %.2f reais\n"
        "Super Poder da Carta: %.2f\n",
        estado1, codigo1, nome_cidade1, populacao1, area1, pib1, pontos_turisticos1, densidade1, pib_capta1, super_poder1);

    printf("\nCarta 2:\n");
    printf("\nEstado: %c\n"
        "Código: %s\n"
        "Nome da Cidade: %s\n"
        "População: %lu habitantes\n"
        "Área: %.2f km²\n"
        "PIB: %.2lf reais\n"
        "Pontos Turísticos: %d\n"
        "Densidade Populacional: %.2f hab/km²\n"
        "PIB per Capita: %.2f reais\n"
        "Super Poder da Carta: %.2f\n",
        estado2, codigo2, nome_cidade2, populacao2, area2, pib2, pontos_turisticos2, densidade2, pib_capta2, super_poder2);

    //comparação das cartas
    printf("\nAgora vamos definir a carta vencedora!\n");
    if(populacao1 > populacao2) {
        printf("\nPopulação - %s ganhou com %lu habitantes\n", nome_cidade1, populacao1);
    } else {
        printf("\nPopulação - %s ganhou com %lu habitantes\n", nome_cidade2, populacao2);
    }

    if(area1 > area2) {
        printf("Área - %s ganhou com %.2f km²\n", nome_cidade1, area1);
    } else {
        printf("Área - %s ganhou com %.2f km²\n", nome_cidade2, area2);
    }

    if(pib1 > pib2) {
        printf("PIB - %s ganhou com %.2lf reais\n", nome_cidade1, pib1);
    } else {
        printf("PIB - %s ganhou com %.2lf reais\n", nome_cidade2, pib2);
    }

    if(pontos_turisticos1 > pontos_turisticos2) {
        printf("Pontos Turísticos - %s ganhou com %d pontos turísticos\n", nome_cidade1, pontos_turisticos1);
    } else {
        printf("Pontos Turísticos - %s ganhou com %d pontos turísticos\n", nome_cidade2, pontos_turisticos2);
    }

    if(densidade1 < densidade2) {
        printf("Densidade Populacional - %s ganhou com %.2lf hab/km²\n", nome_cidade1, densidade1);
    } else {
        printf("Densidade Populacional - %s ganhou com %.2lf hab/km²\n", nome_cidade2, densidade2);
    }

    if(pib_capta1 > pib_capta2) {
        printf("PIB per Capita - %s ganhou com %.2f reais\n", nome_cidade1, pib_capta1);
    } else {
        printf("PIB per Capita - %s ganhou com %.2f reais\n", nome_cidade2, pib_capta2);
    }

    if(super_poder1 > super_poder2) {
        printf("Super Poder - %s ganhou com %.2f de poder!\n", nome_cidade1, super_poder1);
    } else {
        printf("Super Poder - %s ganhou com %.2f de poder!\n", nome_cidade2, super_poder2);
    }
}