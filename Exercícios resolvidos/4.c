//if-else

#include <stdio.h>

int main() {
    
    int numero;
    
    printf("Digite um numero: ");
    scanf("%d", &numero);
    
    if(numero > 20){
        printf("O número digitado é maior que 20\n");
    }
    
    else {
        printf("O numero digitado é menor que 20");
    }

    return 0;
}
