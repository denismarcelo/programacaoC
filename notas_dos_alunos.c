#include <stdio.h>

int main() {
    
    int aluno;

    char * nomes[3][3] = {
        {"Aluno 1", "Português: 4.0", "Matemática: 8.0"},
        {"Aluno 2", "Português: 5.0", "Matemática: 7.0"},
        {"Aluno 3", "Português: 9.0", "Matemática: 3.0"}
    };

    printf("Selecione o aluno para ver sua nota:\n");
    printf("Para o Aluno 1, digite 1\n");
    printf("Para o Aluno 2, digite 2\n");
    printf("Para o Aluno 3, digite 3\n");
    scanf("%d", &aluno);

    printf("As notas do %s são:\n%s e %s\n", nomes[aluno - 1][0], nomes[aluno - 1][1], nomes[aluno - 1][2]);
}