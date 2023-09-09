// Segundo uma tabela médica, o peso ideal está relacionado com a altura e o sexo. Faça um programa que receba a altura e o sexo de uma pessoa, após isso calcule e imprima o seu peso ideal, utilizando as seguintes fórmulas:
//• Para homens: (72,7 * A) – 58
//• Para mulheres: (62,1 * A) – 44,7
//• Em que: A = Altura

#include <stdio.h>

int main() {
    float A, peso_ideal;
    char sexo;

    printf("Digite sua altura: ");
    scanf("%f", &A);

    printf("Digite o seu sexo (M para masculino, F para feminino): ");
    scanf(" %c", &sexo);

    if (sexo == 'M' || sexo == 'm') {
        peso_ideal = (72.7 * A) - 58;
    } 
    else 
    
    if (sexo == 'F' || sexo == 'f') {
        peso_ideal = (62.1 * A) - 44.7;
    } 
    else {
        printf("Sexo inválido.\n");
        return 0;
    }

    printf("O peso ideal é: %.2f kg\n", peso_ideal);

    return 0;
}
