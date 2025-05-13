#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int main ()
{
    FILE *arq;
    int vetor[TAM];
    int qtd, i;

    arq = fopen ("D:\\ExemploEscrita2.bin", "rb");
    if (arq == NULL)
    {
        printf ("Erro na abertura do arquivo!\n");  
        exit (1);
    }

    qtd = fread(vetor, sizeof(int), TAM, arq);
    for (i = 0; i < qtd; i++)
    {
        printf ("%d ", vetor[i]);
    }
    
    fclose(arq);
    return 0;
}