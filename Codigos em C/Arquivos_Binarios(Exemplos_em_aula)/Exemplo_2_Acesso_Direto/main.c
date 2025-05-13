#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int codigo;
    char nome[20];
    char endereco[32];
    int idade;
} tipo_cliente;

int main ()
{ 
    char arquivo[30] = "ExemploEscrita4.dat";
    tipo_cliente cliente;
    FILE *arq;
    int qtd, aux;

    arq = fopen (arquivo, "r + b");
    if (arq == NULL)
    {
        printf ("Erro na abertura do arquivo!\n");
        exit (1);
    }

    fseek (arq, 1 * sizeof (cliente), SEEK_SET);
    fread (&cliente, sizeof(cliente), 1, arq);
    cliente.idade = 29;

    fseek (arq, -sizeof (cliente), SEEK_CUR);
    fwrite (&cliente, sizeof(cliente), 1, arq);

    fseek (arq, 0, SEEK_SET);

    qtd = 0;
    aux = fread(&cliente, sizeof(cliente), 1, arq);
    while (!feof(arq))
    {
        printf("Codigo: %d - Nome: %s\n", cliente.codigo, cliente.nome);
        printf("Idade: %d - Endereco: %s\n\n", cliente.idade, cliente.endereco);
        qtd++;
        aux = fread (&cliente, sizeof(cliente), 1, arq);
    }

    printf("\nLidos: %d\n", qtd);
    fclose (arq);
    return 0;
}