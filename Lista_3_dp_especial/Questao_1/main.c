#include <stdio.h>

typedef struct
{
    int codigo;
    char descricao[51];
    double preco;
} Produto;

int main()
{
    int n, i, j;
    Produto p[100];

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &p[i].codigo);
        scanf(" %s", p[i].descricao);
        scanf("%lf", &p[i].preco);
    }

    // Ordena por preço (crescente)
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (p[j].preco > p[j + 1].preco)
            {
                Produto temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("R$ %.2lf - %d - %s\n", p[i].preco, p[i].codigo, p[i].descricao);
    }

    return 0;
}
