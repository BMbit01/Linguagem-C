#include <stdio.h> 

struct Carro {
    char marca[20]; 
    float preco;
    int ano;
};

int main() {
    
    struct Carro meuCarro;
    strcpy(meuCarro.marca, "Corolla"); 
    meuCarro.ano = 2018;             
    meuCarro.preco = 105000.10;      

    
    printf("Marca: %s\n", meuCarro.marca);
    printf("Ano: %d\n", meuCarro.ano);
    printf("Preço: %.2f\n", meuCarro.preco);

    return 0;
}
