#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 1000

int main()
{

    char frase1[MAX], frase2[MAX], string[MAX];
    int x, y, saoAnagramas, tamanho, cont, aux;
    int quebra = 1;
    int V[MAX];

    scanf("%1000[^\n]%*c", frase1);
    scanf("%1000[^\n]%*c", frase2);

    strcpy(string, frase1);
    strcat(string, frase2);

    x = 0;

    while (string[x] != '\0')
    {
        string[x] = tolower(string[x]);
        x++;
    }
    tamanho = strlen(string);

    for (x = 0; x < tamanho; x++)
    {
        if (string[x] != ' ' && string[x] != '.' && string[x] != ',' && string[x] != '?' && string[x] != '!' && string[i] != '\0' && string[i] != '\n')
        {
            aux = string[x];
            cont = 0;

            for (y = 0; y < tamanho; y++)
            {
                if (aux == string[y])
                {
                    cont++;
                }
            }
            V[x] = cont;
        }
        else
        {
            V[x] = 2;
        }
    }
    for (x = 0; x < tamanho; x++)
    {
        if (quebra == 1)
        {
            if (V[x] >= 2)
            {
                saoAnagramas = 1;
            }
            else
            {
                saoAnagramas = 0;
                quebra = 0;
            }
        }
    }
    if (saoAnagramas)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
    return 0;
}