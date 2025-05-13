#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int main ()
{
    FILE *arq;
    int vetor [TAM] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int qtd; 

    arq = fopen ("D:\\ExemploEscrital2.bin", "wb");
    if (arq == NULL)
    {
        printf ("Erro na abertura do arquivo!\n");
        exit (1);
    }

    qtd = fwrite (vetor, sizeof(vetor), 1, arq);
    if (qtd == 1)
    {
        printf ("Gravacao efetivada com sucesso!\n");
    }
    else
    {
        printf ("Erro na abertura!\n");
    }
    
    fclose (arq);
    return 0;
}