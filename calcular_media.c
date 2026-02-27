#include <stdio.h>

float nota1, nota2, nota3;

void entrada() {
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
}

float calculo_media() {
    float media = (nota1 + nota2 + nota3) / 3;
    printf("Média: %.2f", media);
    return media;
}

int main() {
    entrada();
    calculo_media();
    return 0;
}