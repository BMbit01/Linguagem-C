#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void encryptString(char* senha) {
    int length = strlen(senha);

    for (int i = 0; i < length; i++) {
        // Substitui cada caractere pelo próximo na tabela ASCII
        senha[i] = senha[i] + 1;
    }
}

int main()
{
    char endereco_completo[100];
    char nome_completo[100];
    char rg[13];
    char cpf[12];
    char data[11];


 

    printf("Digite seu endereco completo: ");
    fgets(endereco_completo, sizeof(endereco_completo), stdin);
    endereco_completo[strcspn(endereco_completo, "\n")] = '\0'; // Remove o caractere de nova linha
    encryptString(endereco_completo);

    printf("Digite seu nome completo: ");
    fgets(nome_completo, sizeof(nome_completo), stdin);
    nome_completo[strcspn(nome_completo, "\n")] = '\0'; // Remove o caractere de nova linha
    encryptString(nome_completo);

    printf("Digite seu rg: ");
    fgets(rg, sizeof(rg), stdin);
    rg[strcspn(rg, "\n")] = '\0'; // Remove o caractere de nova linha
    encryptString(rg);

    printf("Digite seu CPF: ");
    fgets(cpf, sizeof(cpf), stdin);
    cpf[strcspn(cpf, "\n")] = '\0'; // Remove o caractere de nova linha
    encryptString(cpf);

    printf("Digite sua data de nascimento (DD/MM/AAAA): ");
    fgets(data, sizeof(data), stdin);
    data[strcspn(data, "\n")] = '\0'; // Remove o caractere de nova linha
    encryptString(data);


    printf("endereco completo encriptado:%s\n", endereco_completo);
    printf("Nome completo encriptado: %s\n", nome_completo);
    printf("Rg encriptado:%s\n ",rg);
    printf("CPF encriptado: %s\n", cpf);
    printf("Data de nascimento encriptada: %s\n", data);

     char combinedData[12345];
    snprintf(combinedData, sizeof(combinedData), "%s%s%s%s%s",rg, cpf, data, nome_completo,endereco_completo);

    printf("Senha gerada: %s\n", combinedData);

 


    return 0;
}
