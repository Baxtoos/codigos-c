#include <stdio.h>
#include <string.h>

char *calcular_digito(char *chave, char *digito);

int main ()
{
    char chave [14];
    char  digito [2];
    scanf ("%s", chave);

    while (strcmp(chave, "FIM") != 0)
    {
        strcpy (digito, calcular_digito(chave, digito));

        if (strcmp (digito, &chave[12])== 0)
        {
            
        }
        printf ("VALIDO\n");
    }

}