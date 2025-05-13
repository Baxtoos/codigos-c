#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int main ()
{
    FILE *arq;
    int vetor[TAM];
    int qtd, x;

    arq = fopen ("D:\\ExemploEscrita3.bin", "rb");
    if (arq == NULL)
    {
        printf ("Erro na abertura do arquivo!\n");
        exit (1);
    }

    qtd = fread(vetor, sizeof(int), TAM, arq);
    for (x = 0; x < qtd; x++)
    {
        printf ("%c (%d)\n", vetor[x], vetor[x]);
    }
    
    fclose(arq);
    return 0;
}