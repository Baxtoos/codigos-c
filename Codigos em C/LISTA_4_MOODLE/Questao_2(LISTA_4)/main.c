#include <stdio.h>

int main()
{
    int n, aux, somaDistancias = 0, posicao;
    scanf("%d", &n);

    int pessoas[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &pessoas[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (pessoas[i] > pessoas[j])
            {
                aux = pessoas[i];
                pessoas[i] = pessoas[j];
                pessoas[j] = aux;
            }
        }
    }

    if (n % 2 == 0)
    {
        posicao = pessoas[n / 2 - 1];
    }

    else
    {
        posicao = pessoas[n / 2];
    }

    for (int i = 0; i < n; i++)
    {
        if (pessoas[i] > posicao)
        {
            somaDistancias += pessoas[i] - posicao;
        }

        else
        {
            somaDistancias += posicao - pessoas[i];
        }
    }

    printf("%d %d\n", somaDistancias, posicao);
    return 0;
}
