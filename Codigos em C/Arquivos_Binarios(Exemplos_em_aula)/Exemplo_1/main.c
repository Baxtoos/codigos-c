#include <stdio.h>
#include <stdlib.h>

int main ()
{
FILE *arq;
char texto[] = "Aula de fwrite()";
int qtd;

arq = fopen ("D:\\ExemploEscrital.bin", "wb");
if (arq == NULL)
{
    printf ("Erro na abertura do arquivo!\n");
    exit (1);
}

qtd = fwrite (texto, sizeof(texto), 1, arq);
if (qtd == 1)
{
    printf ("Gravacao efetivada com sucesso!\n");
}
else 
{
    printf ("Erro na abertura");
}

fclose(arq);
return 0;
}