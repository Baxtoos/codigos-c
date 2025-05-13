#include <stdio.h>

int main ()
{
    int N, M, vencedor, x, y, tempo, aux, menor_tempo; // N = competidores e M = voltas
    scanf ("%d%d", &N, &M);

    menor_tempo = 100000000;

    for (x = 1; x <= N; x++)
    {
        aux = 0;

        for (y = 0; y <= M; y++)
        {
            scanf("%d", &tempo);
            aux += tempo;
        }

        if (aux < menor_tempo)
        {
            menor_tempo = aux;
            vencedor = x;
        }
    }

    printf ("%d", vencedor);
    return 0;
}