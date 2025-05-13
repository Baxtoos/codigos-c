#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int codigo;
    char nome[20];
    char endereco [32];
    int idade;
}tipo_cliente;

int main ()
{
    tipo_cliente cliente[10];
    FILE *arq;
    int qtd, x;

    arq = fopen("D:\\ExemploEscrita4.dat", "rb");
    if (arq == NULL)
    {
        printf ("Erro na abertura do arquivo!\n");
        exit (1);
    }

    qtd = fread (cliente, sizeof(tipo_cliente), 10, arq);
    for (x = 0; x < qtd; x++)
    {
        printf ("Codigo %d - Nome: %s\n", cliente[x].codigo, cliente[x].nome);
        printf ("Idade> %d - Endereco: %s\n", cliente[x].idade, cliente[x].endereco);
    }
    fclose (arq);
    return 0;
}