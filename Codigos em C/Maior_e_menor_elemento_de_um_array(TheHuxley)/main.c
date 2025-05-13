#include <stdio.h>

int Menor(int vetor[6]);
int Maior(int *vetor, int qtd);

int main ()
{
    int v[6]; //v é um ponteiro constante
    int x; 

    for (x = 0; x < 6; x++)
    {
        scanf ("%d", &v[x]);
    }
    printf ("%d\n", Menor(v));
    printf ("%d\n", Maior(v,6));

    return 0;
}

int Menor (int vetor[6])
{
    int x, aux;
    aux = vetor[0];

    for (x = 1; x < 6; x++)
    {
        if (vetor[x] < aux)
        {
            aux = vetor[x];
        }
    }
    return aux;
}

int Maior (int *vetor, int qtd)
{
    int x, aux;
    aux = *vetor;

    for (x = 1; x < qtd; x++)
    {
        if (*(vetor + x) > aux)
        {
            aux = *(vetor + x);
        }
    }
    return aux;
}