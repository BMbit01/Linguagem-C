#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Struct de Estudante
struct Student {
    char nome[50];
    int idade;
    float nota;
};

//Struct de Course
struct Course {
    char nome[50];
    struct Student estudantes[3];
};

int main(){

    //Declarando um ponteiro para um inteiro
    int *ptr;
    //alocando memória de forma dinâmica
    ptr = (int *)malloc(sizeof(int));
    //Atribuindo o valor 100 ao inteiro
    *ptr = 100;
    
    //Imprimindo o valor do inteiro
    printf("Valor atribuido ao ponteiro: %d\n", *ptr);

    //Declarando uma variável do tipo Student
    struct Student dados_estudante1;
    //Informando valores
    strcpy(dados_estudante1.nome, "Brenno");
    dados_estudante1.idade = 18;
    dados_estudante1.nota = 8.5;

    printf("Nome: %s\n", dados_estudante1.nome);
    printf("Idade: %d\n", dados_estudante1.idade);
    printf("Nota: %.1f\n", dados_estudante1.nota);
    
    //ponteiro para a struct
    struct Student *dados_estudante2;
    //2.a alocando memória de forma dinâmica
    dados_estudante2 = (struct Student *)malloc(sizeof(struct Student));
    
    //Informando valores
    strcpy(dados_estudante2->nome, "Lucas Silva");
    dados_estudante2->idade = 19;
    dados_estudante2->nota = 7.0;f
    
    //Imprimindo os valores 
    printf("Nome: %s\n", dados_estudante2->nome);
    printf("Idade: %d\n", dados_estudante2->idade);
    printf("Nota: %.1f\n", dados_estudante2->nota);

    free(dados_estudante2); // Libere a memória
    
    //Declarando uma variável do tipo Course
    struct Course course1;

    //Valores dos 3 estudantes
    strcpy(course1.nome, "Analise e Desenvolvimento de Sistemas");
    strcpy(course1.estudantes[0].nome, "Jhonata");
    course1.estudantes[0].idade = 20;
    course1.estudantes[0].nota = 9.5;
    strcpy(course1.estudantes[1].nome, "Guilherme");
    course1.estudantes[1].idade = 19;
    course1.estudantes[1].nota = 10;
    strcpy(course1.estudantes[2].nome, "Fernando");
    course1.estudantes[2].idade = 21;
    course1.estudantes[2].nota = 8.0;
    
    //Imprimindo o nome do curso, os nomes dos estudantes, idade e notas
    printf("Curso: %s\n", course1.nome);
    for (int i = 0; i < 3; i++) {
        printf("Nome: %s\n Idade: %d\n Nota: %.1f\n", course1.estudantes[i].nome, course1.estudantes[i].idade, course1.estudantes[i].nota);
    }

    //Utilizando a função typedef
    typedef struct {
        char nome[50];
        struct Course CourseList[10];
    } Course;

    //Valores atribuídos
    Course nome_cursos;
    strcpy(nome_cursos.CourseList[0].nome, "Sistemas de Informacao");
    strcpy(nome_cursos.CourseList[1].nome, "Analise e Desenvolvimento de Sistemas");
    strcpy(nome_cursos.CourseList[2].nome, "Engenharia de Software");
    strcpy(nome_cursos.CourseList[3].nome, "Ciencia da computacao");
    strcpy(nome_cursos.CourseList[4].nome, "Medicina");
    strcpy(nome_cursos.CourseList[5].nome, "Enfermagem");
    strcpy(nome_cursos.CourseList[6].nome, "Direito");
    strcpy(nome_cursos.CourseList[7].nome, "Contabilidade");
    strcpy(nome_cursos.CourseList[8].nome, "Biomedicina");
    strcpy(nome_cursos.CourseList[9].nome, "Engenharia");

    //Impressão dos dados
    for (int i = 0; i < 10; i++) {
        printf("Curso: %s\n", nome_cursos.CourseList[i].nome);
    }
    
}
