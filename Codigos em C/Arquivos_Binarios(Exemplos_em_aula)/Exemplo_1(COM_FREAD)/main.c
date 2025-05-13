#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main ()
{
    FILE *arq;
    char texto[MAX];
    int qtd;

    arq = fopen ("D:\\ExemploEscrital.bin", "rb");
    if (arq == NULL)
    {
        printf ("Erro na abertura do arquivo!\n");
        exit (1);
    }

    qtd = fread(texto, 1, MAX, arq);

    printf ("Caracteres lidos: %d\n", qtd);
    printf ("%s\n", texto);
    fclose (arq);
    return 0;
}
