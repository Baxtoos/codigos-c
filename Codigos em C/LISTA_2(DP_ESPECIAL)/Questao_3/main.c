#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char numero[15], numeroCovertido[15];
    int qtd, i;

    scanf(" %s", numero);

    qtd = strlen(numero);
    numero[qtd] = '\0';
    i = 0;

    while (numero[i] != '\0')
    {
        if (numero[i] == 'A' || numero[i] == 'B' || numero[i] == 'C')
        {
            numeroCovertido[i] = '2';
        }
        else if (numero[i] == 'D' || numero[i] == 'E' || numero[i] == 'F')
        {
            numeroCovertido[i] = '3';
        }
        else if (numero[i] == 'G' || numero[i] == 'H' || numero[i] == 'I')
        {
            numeroCovertido[i] = '4';
        }
        else if (numero[i] == 'J' || numero[i] == 'K' || numero[i] == 'L')
        {
            numeroCovertido[i] = '5';
        }
        else if (numero[i] == 'M' || numero[i] == 'N' || numero[i] == 'O')
        {
            numeroCovertido[i] = '6';
        }
        else if (numero[i] == 'P' || numero[i] == 'Q' || numero[i] == 'R' || numero[i] == 'S')
        {
            numeroCovertido[i] = '7';
        }
        else if (numero[i] == 'T' || numero[i] == 'U' || numero[i] == 'V')
        {
            numeroCovertido[i] = '8';
        }
        else if (numero[i] == 'W' || numero[i] == 'X' || numero[i] == 'Y' || numero[i] == 'Z')
        {
            numeroCovertido[i] = '9';
        }
        else
        {
            numeroCovertido[i] = numero[i];
        }

        i++;
    }

    numeroCovertido[qtd] = '\0';

    printf("%s", numeroCovertido);

    return 0;
}