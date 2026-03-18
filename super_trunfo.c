#include <stdio.h>
#include <string.h>

//criando as variáveis
int pontos_turisticos1, pontos_turisticos2, atributo_escolhido, opcao_escolhida;
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
    // printf("\nAgora vamos exibir as informações das cartas!\n");
    // printf("\nCarta 1:\n");
    // printf("\nEstado: %c\n"
    //     "Código: %s\n"
    //     "Nome da Cidade: %s\n"
    //     "População: %lu habitantes\n"
    //     "Área: %.2f km²\n"
    //     "PIB: %.2lf reais\n"
    //     "Pontos Turísticos: %d\n"
    //     "Densidade Populacional: %.2f hab/km²\n"
    //     "PIB per Capita: %.2f reais\n"
    //     "Super Poder da Carta: %.2f\n",
    //     estado1, codigo1, nome_cidade1, populacao1, area1, pib1, pontos_turisticos1, densidade1, pib_capta1, super_poder1);

    // printf("\nCarta 2:\n");
    // printf("\nEstado: %c\n"
    //     "Código: %s\n"
    //     "Nome da Cidade: %s\n"
    //     "População: %lu habitantes\n"
    //     "Área: %.2f km²\n"
    //     "PIB: %.2lf reais\n"
    //     "Pontos Turísticos: %d\n"
    //     "Densidade Populacional: %.2f hab/km²\n"
    //     "PIB per Capita: %.2f reais\n"
    //     "Super Poder da Carta: %.2f\n",
    //     estado2, codigo2, nome_cidade2, populacao2, area2, pib2, pontos_turisticos2, densidade2, pib_capta2, super_poder2);

    //menu interativo de opções
    printf("\n*** Qual atributo você quer comparar? ***\n");
    printf("1. Quero comparar todos\n");
    printf("2. Quero escolher um atributo\n");
    printf("Selecione uma opção: ");
    scanf("%d", &opcao_escolhida);

    if(opcao_escolhida == 1) {
        printf("\nAgora vamos comparar todos os atributos!\n");
        if(populacao1 > populacao2) {
            printf("\nPopulação - %s ganhou com %lu habitantes\n", nome_cidade1, populacao1);
        } else if(populacao1 < populacao2){
            printf("\nPopulação - %s ganhou com %lu habitantes\n", nome_cidade2, populacao2);
        } else {
            printf("\nPopulação - Empatou com %lu habitantes\n", populacao2);
        }

        if(area1 > area2) {
            printf("Área - %s ganhou com %.2f km²\n", nome_cidade1, area1);
        } else if(area1 < area2) {
            printf("Área - %s ganhou com %.2f km²\n", nome_cidade2, area2);
        } else {
            printf("Área - Empatou com %.2f km²\n", area2);
        }

        if(pib1 > pib2) {
            printf("PIB - %s ganhou com %.2lf reais\n", nome_cidade1, pib1);
        } else if(pib1 < pib2) {
            printf("PIB - %s ganhou com %.2lf reais\n", nome_cidade2, pib2);
        } else {
            printf("PIB - Empatou com %.2lf reais\n", pib2);
        }

        if(pontos_turisticos1 > pontos_turisticos2) {
            printf("Pontos Turísticos - %s ganhou com %d pontos turísticos\n", nome_cidade1, pontos_turisticos1);
        } else if(pontos_turisticos1 < pontos_turisticos2) {
            printf("Pontos Turísticos - %s ganhou com %d pontos turísticos\n", nome_cidade2, pontos_turisticos2);
        } else{
            printf("Pontos Turísticos - Empatou com %d pontos turísticos\n", pontos_turisticos2);
        }

        if(densidade1 < densidade2) {
            printf("Densidade Populacional - %s ganhou com %.2lf hab/km²\n", nome_cidade1, densidade1);
        } else if(densidade1 > densidade2){
            printf("Densidade Populacional - %s ganhou com %.2lf hab/km²\n", nome_cidade2, densidade2);
        } else {
            printf("Densidade Populacional - Empatou com %.2lf hab/km²\n", densidade2);
        }

        if(pib_capta1 > pib_capta2) {
            printf("PIB per Capita - %s ganhou com %.2f reais\n", nome_cidade1, pib_capta1);
        } else if(pib_capta1 < pib_capta2) {
            printf("PIB per Capita - %s ganhou com %.2f reais\n", nome_cidade2, pib_capta2);
        } else{
            printf("PIB per Capita - Empatou com %.2f reais\n", pib_capta2);
        }

        if(super_poder1 > super_poder2) {
            printf("Super Poder - %s ganhou com %.2f de poder!\n", nome_cidade1, super_poder1);
        } else if(super_poder1 < super_poder2) {
            printf("Super Poder - %s ganhou com %.2f de poder!\n", nome_cidade2, super_poder2);
        } else {
            printf("Super Poder - Empatou com %.2f de poder!\n", super_poder2);
        }

    } else {
        //menu interativo de escolha de atributo
        printf("\n*** Menu de escolha de atributo ***\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos turísticos\n");
        printf("5. Densidade populacional\n");
        printf("6. PIB per Capita\n");
        printf("7. Super Poder da Carta\n");
        printf("Selecione o atributo a ser comparado: ");
        scanf("%d", &atributo_escolhido);

        //comparações das cartas
        switch(atributo_escolhido) {
            case 1:
                if(populacao1 == populacao2) {
                    printf("\n%s vs %s\n", nome_cidade1, nome_cidade2);
                    printf("Atributo: População\n");
                    printf("Carta 1: %lu habitantes\n", populacao1);
                    printf("Carta 2: %lu habitantes\n", populacao2);
                    printf("Empatou!!!\n");
                } else if(populacao1 > populacao2) {
                    printf("\n%s vs %s\n", nome_cidade1, nome_cidade2);
                    printf("Atributo: População\n");
                    printf("Carta 1: %lu habitantes\n", populacao1);
                    printf("Carta 2: %lu habitantes\n", populacao2);
                    printf("Vencedora: %s\n", nome_cidade1);
                } else {
                    printf("\n%s vs %s\n", nome_cidade1, nome_cidade2);
                    printf("Atributo: População\n");
                    printf("Carta 1: %lu habitantes\n", populacao1);
                    printf("Carta 2: %lu habitantes\n", populacao2);
                    printf("Vencedora: %s\n", nome_cidade2);
                }
                break;
            case 2:
                if(area1 == area2) {
                    printf("\n%s vs %s\n", nome_cidade1, nome_cidade2);
                    printf("Atributo: Área\n");
                    printf("Carta 1: %.2f km²\n", area1);
                    printf("Carta 2: %.2f km²\n", area2);
                    printf("Empatou!!!\n");
                } else if(area1 > area2) {
                    printf("\n%s vs %s\n", nome_cidade1, nome_cidade2);
                    printf("Atributo: Área\n");
                    printf("Carta 1: %.2f km²\n", area1);
                    printf("Carta 2: %.2f km²\n", area2);
                    printf("Vencedora: %s\n", nome_cidade1);
                } else {
                    printf("\n%s vs %s\n", nome_cidade1, nome_cidade2);
                    printf("Atributo: Área\n");
                    printf("Carta 1: %.2f km²\n", area1);
                    printf("Carta 2: %.2f km²\n", area2);
                    printf("Vencedora: %s\n", nome_cidade2);
                }
                break;
            case 3:
                if(pib1 == pib2) {
                    printf("\n%s vs %s\n", nome_cidade1, nome_cidade2);
                    printf("Atributo: PIB\n");
                    printf("Carta 1: %.2lf reais\n", pib1);
                    printf("Carta 2: %.2lf reais\n", pib2);
                    printf("Empatou!!!\n");
                } else if(pib1 > pib2) {
                    printf("\n%s vs %s\n", nome_cidade1, nome_cidade2);
                    printf("Atributo: PIB\n");
                    printf("Carta 1: %.2lf reais\n", pib1);
                    printf("Carta 2: %.2lf reais\n", pib2);
                    printf("Vencedora: %s\n", nome_cidade1);
                } else {
                    printf("\n%s vs %s\n", nome_cidade1, nome_cidade2);
                    printf("Atributo: PIB\n");
                    printf("Carta 1: %.2lf reais\n", pib1);
                    printf("Carta 2: %.2lf reais\n", pib2);
                    printf("Vencedora: %s\n", nome_cidade2);
                }
                break;
            case 4:
                if(pontos_turisticos1 == pontos_turisticos2) {
                    printf("\n%s vs %s\n", nome_cidade1, nome_cidade2);
                    printf("Atributo: Pontos turísticos\n");
                    printf("Carta 1: %d\n", pontos_turisticos1);
                    printf("Carta 2: %d\n", pontos_turisticos2);
                    printf("Empatou!!!\n");
                } else if(pontos_turisticos1 > pontos_turisticos2) {
                    printf("\n%s vs %s\n", nome_cidade1, nome_cidade2);
                    printf("Atributo: Pontos turísticos\n");
                    printf("Carta 1: %d\n", pontos_turisticos1);
                    printf("Carta 2: %d\n", pontos_turisticos2);
                    printf("Vencedora: %s\n", nome_cidade1);
                } else {
                    printf("\n%s vs %s\n", nome_cidade1, nome_cidade2);
                    printf("Atributo: Pontos turísticos\n");
                    printf("Carta 1: %d\n", pontos_turisticos1);
                    printf("Carta 2: %d\n", pontos_turisticos2);
                    printf("Vencedora: %s\n", nome_cidade2);
                }
                break;
            case 5:
                if(densidade1 == densidade2) {
                    printf("\n%s vs %s\n", nome_cidade1, nome_cidade2);
                    printf("Atributo: Densidade populacional\n");
                    printf("Carta 1: %.2f hab/km²\n", densidade1);
                    printf("Carta 2: %.2f hab/km²\n", densidade2);
                    printf("Empatou!!!\n");
                } else if(densidade1 < densidade2) {
                    printf("\n%s vs %s\n", nome_cidade1, nome_cidade2);
                    printf("Atributo: Densidade populacional\n");
                    printf("Carta 1: %.2f hab/km²\n", densidade1);
                    printf("Carta 2: %.2f hab/km²\n", densidade2);
                    printf("Vencedora: %s\n", nome_cidade1);
                } else {
                    printf("\n%s vs %s\n", nome_cidade1, nome_cidade2);
                    printf("Atributo: Densidade populacional\n");
                    printf("Carta 1: %.2f hab/km²\n", densidade1);
                    printf("Carta 2: %.2f hab/km²\n", densidade2);
                    printf("Vencedora: %s\n", nome_cidade2);
                }
                break;
            case 6:
                if(pib_capta1 == pib_capta2) {
                    printf("\n%s vs %s\n", nome_cidade1, nome_cidade2);
                    printf("Atributo: PIB per Capita\n");
                    printf("Carta 1: %.2f reais\n", pib_capta1);
                    printf("Carta 2: %.2f reais\n", pib_capta2);
                    printf("Empatou!!!\n");
                } else if(pib_capta1 > pib_capta2) {
                    printf("\n%s vs %s\n", nome_cidade1, nome_cidade2);
                    printf("Atributo: PIB per Capita\n");
                    printf("Carta 1: %.2f reais\n", pib_capta1);
                    printf("Carta 2: %.2f reais\n", pib_capta2);
                    printf("Vencedora: %s\n", nome_cidade1);
                } else {
                    printf("\n%s vs %s\n", nome_cidade1, nome_cidade2);
                    printf("Atributo: PIB per Capita\n");
                    printf("Carta 1: %.2f reais\n", pib_capta1);
                    printf("Carta 2: %.2f reais\n", pib_capta2);
                    printf("Vencedora: %s\n", nome_cidade2);
                }
                break;
            case 7:
                if(super_poder1 == super_poder2) {
                    printf("\n%s vs %s\n", nome_cidade1, nome_cidade2);
                    printf("Atributo: Super Poder da Carta\n");
                    printf("Carta 1: %.2f\n", super_poder1);
                    printf("Carta 2: %.2f\n", super_poder2);
                    printf("Empatou!!!\n");
                } else if(super_poder1 > super_poder2) {
                    printf("\n%s vs %s\n", nome_cidade1, nome_cidade2);
                    printf("Atributo: Super Poder da Carta\n");
                    printf("Carta 1: %.2f\n", super_poder1);
                    printf("Carta 2: %.2f\n", super_poder2);
                    printf("Vencedora: %s\n", nome_cidade1);
                } else {
                    printf("\n%s vs %s\n", nome_cidade1, nome_cidade2);
                    printf("Atributo: Super Poder da Carta\n");
                    printf("Carta 1: %.2f\n", super_poder1);
                    printf("Carta 2: %.2f\n", super_poder2);
                    printf("Vencedora: %s\n", nome_cidade2);
                }
                break;
            default:
                printf("Opção de atributo inválida.");
        }
    }
}