//Grava caracter por caracter

#include <stdio.h>
#include <conio.h>

int main ()
{
    FILE *arq;
    char c;
    int aux;

    arq = fopen ("D:\\arquivo1.txt", "a");

    if (arq == NULL)
    {
        printf ("Ocorreu erro na abertura de caracter.txt!\n");
    }
    else 
    {
        printf ("Digite um caracter: ");
        c = getche ();
        while (c != 'f')
        {
            aux = fputc (c, arq);
            if (aux == EOF)
            {
                printf ("\nErro na gravacao do caracter!\n");
            }
            else
            {
                printf("\nGravacao realizada com sucesso!\n");
            }
            printf("\n\nDigite outro caracter: ");
            c = getche ();

        }
        fclose (arq);
    }
    return 0;
}