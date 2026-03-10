#include <stdio.h>

int main() {
    //definindo as variáveis
    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;

    int resultadoA, resultadoB;

    //exibir as informações dos produtos
    printf("O produto %s tem estoque %u de valor R$%.2f\n", produtoA, estoqueA, valorA);
    printf("O produto %s tem estoque %u de valor R$%.2f\n", produtoB, estoqueB, valorB);

    //comparando o estoque
    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf("O %s tem estoque mínimo %d\n", produtoA, resultadoA);
    printf("O %s tem estoque mínimo %d\n", produtoB, resultadoB);

    //comparações entre os valores totais dos produtos
    printf("O valor de A (R$%.2f) é maior que o valor de B (R$%.2f)? %d\n", estoqueA * valorA, estoqueB * valorB, (estoqueA * valorA) > (estoqueB * valorB));
}