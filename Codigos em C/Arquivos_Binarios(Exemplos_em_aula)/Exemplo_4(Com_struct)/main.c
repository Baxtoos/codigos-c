#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int codigo;
    char nome[20];
    char endereco;
    int idade;
}tipo_cliente;

int main ()
{
    tipo_cliente cliente = (100, "Teste de cliente", "Rua Teste, 1050", 18);
    FILE *arq;
    int qtd;

    arq = fopen ("D:\\ExemploEscrita4.dat", "wb");
    if (arq == NULL)
    {
        printf ("Erro na abertura do arquivo!\n");
        exit(1);
    }
    
    qtd = fwrite (&cliente, sizeof(tipo_cliente), 1, arq);
    if (qtd == 1);
    {
        printf ("Gravacao efetivada com sucesso!\n")
    }
    else 
    {
        printf ("Erro na gravacao!\n");
    }
    
    fclose (arq);
    return 0;
}
