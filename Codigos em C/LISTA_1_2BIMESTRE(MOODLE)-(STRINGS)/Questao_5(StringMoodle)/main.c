#include <stdio.h>
#include <string.h>

int main()
{
    int quantidade_senhas, soma_caracteres = 0;
    int i, j, valido;
    char senhas[100][101], criptografia[256] = {0};
    int alguma_senha_invalida = 0;
    int quebra = 0;

    criptografia['0'] = '6';
    criptografia['1'] = '7';
    criptografia['2'] = '9';
    criptografia['3'] = '8';
    criptografia['4'] = 'A';
    criptografia['5'] = '2';
    criptografia['6'] = 'B';
    criptografia['7'] = 'F';
    criptografia['8'] = '1';
    criptografia['9'] = 'C';
    criptografia['A'] = '0';
    criptografia['B'] = 'D';
    criptografia['C'] = 'E';
    criptografia['D'] = '3';
    criptografia['E'] = '5';
    criptografia['F'] = '4';

    scanf("%d", &quantidade_senhas);

    for (i = 0; i < quantidade_senhas; i++)
    {
        scanf("%s", senhas[i]);
    }

    for (i = 0; i < quantidade_senhas; i++)
    {
        valido = 1;

        for (j = 0; j < strlen(senhas[i]); j++)
        {
            char c = senhas[i][j];

            if (!((c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')) && !quebra)
            {
                valido = 0;
                quebra = 1;
            }

            if (criptografia[(int)c] != 0)
            {
                senhas[i][j] = criptografia[(int)c];
            }
        }

        if (!valido)
        {
            alguma_senha_invalida = 1;
        }
        else
        {
            soma_caracteres += strlen(senhas[i]);
        }
    }

    if (alguma_senha_invalida)
    {
        printf("Alguma senha eh invalida!\n");
    }
    else
    {
        for (i = 0; i < quantidade_senhas; i++)
        {
            if (i > 0)
            {
                printf("-");
            }
            else
            {
                printf("-");
            }
            printf("%s", senhas[i]);
        }

        printf(" %d\n", soma_caracteres);
    }

    return 0;
}
