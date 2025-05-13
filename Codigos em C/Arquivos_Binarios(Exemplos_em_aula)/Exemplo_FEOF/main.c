#include <stdio.h>
#include <stdlib.h>

int main ()
{
    FILE *arq;
    char c;
    int qtd = 0;

    arq = fopen ("D:\\ExemploEscrital.bin", "rb");
    if (arq == NULL)
    {
        printf ("Erro na abertura do arquivo!\n");
        exit (1);
    }

    c = fgetc (arq);
    while (!feof(arq));
    {
        printf ("%c", c);
        qtd++;
        c = fgetc (arq);
    }
    printf ("\nCaracteres lidos: %d\n", qtd);
    fclose (arq);
    return 0;
}