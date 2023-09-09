//Faça um programa que leia o destino do passageiro, se a viagem inclui retorno (ida e volta) e informe o preço da passagem

#include <stdio.h>

int main() {
    
    int destino; 
    char consultar;
    
    printf ("Consultar destino e preço das passagens? (s/n)\n");
    scanf("%c", &consultar);
    
    if (consultar == 's' || consultar == 'S'){
        
        printf("Região Norte (Digite 1)\nRegião Nordeste (Digite 2)\nRegião Centro-Oeste (Digite 3)\nRegião Sul (Digite 4)\n\n");
    
    printf("Qual será seu destino?\n");
    scanf("%d", &destino);
    }
    
    else {
        printf("Volte para o início");
    } 
    
    switch (destino){
        
        case 1: 
        printf("Você escolheu a Região Norte\n");
        
        printf("Sua viagem inclui retorno? 1-SIM 0-NAO\n");
        scanf("%d", &destino);
        
        if (destino == 1){
            printf("Passagem de IDA e VOLTA: R$900.00\n");
        }
        else
           printf("Passagem de IDA: R$500.00\n");
        break; 

        case 2: 
        printf("Você escolheu a Região Nordeste\n");
        
        printf("Sua viagem inclui retorno? 1-SIM 0-NAO\n");
        scanf("%d", &destino);
        
        if (destino == 1){
            printf("Passagem de IDA e VOLTA: R$650.00\n");
        }
        else {
            printf("Passagem de IDA: R$350.00\n");
        }
        break;
        
        case 3: 
        printf("Você escolheu a Região Centro-oeste\n");
        
        printf("Sua viagem inclui retorno? 1-SIM 0-NAO\n");
        scanf("%d", &destino);
        
        if (destino == 1){
            printf("Passagem de IDA e VOLTA: R$600.00\n");
        }
        else {
            printf("Passagem de IDA: R$350.00\n");
        }
        break;
        
        case 4: 
        printf("Você escolheu a Região Sul\n");
        
        printf("Sua viagem inclui retorno? 1-SIM 0-NAO\n");
        scanf("%d", &destino);
        
        if (destino == 1){
            printf("Passagem de IDA e VOLTA: R$550.00\n");
        }
        else {
            printf("Passagem de IDA: R$300.00\n");
        }
        break;
        
        default:
        printf("Região não listada");
        break;
        }
    

    return 0;
}
