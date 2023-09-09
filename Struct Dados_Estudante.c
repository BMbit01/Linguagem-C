#include <stdio.h>
#include <string.h>

struct Estudante {
    char nome[50];
    int matricula;
    float nota_1, nota_2, nota_3;
    float media;
};

int main() {
    struct Estudante DadosEstudante;

    strcpy(DadosEstudante.nome, "Brenno");
    DadosEstudante.matricula = 2023036;
    DadosEstudante.nota_1 = 9;
    DadosEstudante.nota_2 = 8;
    DadosEstudante.nota_3 = 6;
    DadosEstudante.media = (DadosEstudante.nota_1 + DadosEstudante.nota_2 + DadosEstudante.nota_3) / 3;

    printf("Nome: %s\n", DadosEstudante.nome);
    printf("Matricula: %lld\n", (long long)DadosEstudante.matricula); // Usando %lld para inteiros long long
    printf("Nota 1: %.2f\n", DadosEstudante.nota_1); // Usando %.2f para mostrar duas casas decimais
    printf("Nota 2: %.2f\n", DadosEstudante.nota_2);
    printf("Nota 3: %.2f\n", DadosEstudante.nota_3);
    printf("Media: %.2f\n", DadosEstudante.media);

    return 0; // Indicando que o programa foi executado com sucesso
}
