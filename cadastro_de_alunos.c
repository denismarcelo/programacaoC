#include <stdio.h>
#include <string.h>

int main (){
    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    getchar();

    printf("Digite seu nome: \n");
    fgets(nome, 50, stdin);
    nome[strcspn(nome, "\n")] = '\0';
    printf("Seu nome é %s\n", nome);

    printf("Digite sua matrícula: \n");
    scanf("%d", &matricula);

    printf("Nome do aluno: %s\nMatrícula: %d\n", nome, matricula);
    printf("Idade: %d\nAltura: %.2f\n", idade, altura);

    return 0;
}