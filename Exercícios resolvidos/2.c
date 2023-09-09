//Imprimindo os valores pares entre 1 e 20, utilizando a função for

#include<stdio.h>

int main(){
    
    int num;
    
    printf("Os valores pares entre 1 e 20 são:\n");
    
    for (num = 2; num <=20; num += 2){
    
        printf("%d\n", num);
    }
}
