#include <stdio.h>

int main()
{
    int N, M, i, j, aux, k;
    scanf("%d", &N);

    for (k = 0; k < N; k++)
    {
        int count = 0;
        scanf("%d", &M);

        int notas[M], notasOrdem[M];

        for (i = 0; i < M; i++)
        {
            scanf("%d", &notas[i]);
            notasOrdem[i] = notas[i];
        }

        for (i = 0; i < M - 1; i++)
        {
            for (j = i + 1; j < M; j++)
            {
                if (notasOrdem[j] > notasOrdem[i])
                {
                    aux = notasOrdem[i];
                    notasOrdem[i] = notasOrdem[j];
                    notasOrdem[j] = aux;
                }
            }
        }

        for (i = 0; i < M; i++)
        {
            if (notas[i] == notasOrdem[i])
            {
                count++;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}
