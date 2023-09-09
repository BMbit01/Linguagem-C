#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <openssl/sha.h>

# define SHA224
# define SHA256
# define SHA384
# define SHA512


void generateRandomString(char* str, int length) {
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int charsetLength = strlen(charset);

    srand(time(NULL));

    for (int i = 0; i < length; i++) {
        int index = rand() % charsetLength;
        str[i] = charset[index];
    }

    str[length] = '\0';
}

void hashPassword(const char* password, unsigned char* hash) {
    SHA256((unsigned char*)password, strlen(password), hash);
}

int main()
{
    int length;
    printf("Digite o tamanho da senha desejada: ");
    scanf("%d", &length);

    char password[length + 1];
    unsigned char hashedPassword[SHA256_DIGEST_LENGTH];

    generateRandomString(password, length);
    hashPassword(password, hashedPassword);

    printf("Senha gerada: %s\n", password);
    printf("Senha criptografada: ");
    for (int i = 0; i < SHA256_DIGEST_LENGTH; i++) {
        printf("%02x", hashedPassword[i]);
    }
    printf("\n");

    return 0;
}
