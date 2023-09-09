//Usuário inseri um número, se esse número for maior que 20 é impresso na tela "O número digitado é maior que 20"

#include <stdio.h>

int main() {
    
    int numero;
    
    printf("Digite um numero: ");
    //Usuário inseri um número
    scanf("%d", &numero);

    //Estrutura de decisão
    if(numero > 20){
        printf("O numero digitado e maior que 20");
    }

    return 0;
}
