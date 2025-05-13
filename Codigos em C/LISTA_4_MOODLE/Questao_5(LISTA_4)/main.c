#include <stdio.h>

int main()
{
    int C, aux;
    scanf("%d", &C);

    for (int i = 1; i <= C; i++)
    {
        int N;
        scanf("%d", &N);

        int sequencia[N], minimo, maximo;
        double soma_elementos = 0;

        for (int j = 0; j < N; j++)
        {
            scanf("%d", &sequencia[j]);

            soma_elementos += sequencia[j];

            if (j == 0)
            {
                minimo = maximo = sequencia[j];
            }
            else
            {
                if (sequencia[j] < minimo)
                    minimo = sequencia[j];
                if (sequencia[j] > maximo)
                    maximo = sequencia[j];
            }
        }

        for (int j = 0; j < N; j++)
        {
            for (int k = j + 1; k < N; k++)
            {
                if (sequencia[j] > sequencia[k])
                {
                    aux = sequencia[j];
                    sequencia[j] = sequencia[k];
                    sequencia[k] = aux;
                }
            }
        }

        double media = soma_elementos / N;

        int moda[N], count[N];
        int moda_idx = 0, max_count = 1;
        moda[0] = sequencia[0];
        count[0] = 1;

        for (int j = 1; j < N; j++)
        {
            if (sequencia[j] == sequencia[j - 1])
            {
                count[moda_idx]++;
            }
            else
            {
                moda_idx++;
                moda[moda_idx] = sequencia[j];
                count[moda_idx] = 1;
            }
            if (count[moda_idx] > max_count)
            {
                max_count = count[moda_idx];
            }
        }

        double mediana;

        if (N % 2 == 0)
        {
            mediana = (sequencia[N / 2 - 1] + sequencia[N / 2]) / 2.0;
        }
        else
        {
            mediana = sequencia[N / 2];
        }

        printf("sequencia %d:\n", i);

        for (int j = 0; j < N; j++)
        {
            printf("%d ", sequencia[j]);
        }
        printf("\n");
        printf("%d %d\n", minimo, maximo);
        printf("%g\n", media);

        if (max_count > 1)
        {
            for (int j = 0; j <= moda_idx; j++)
            {
                if (count[j] == max_count)
                {
                    printf("%d ", moda[j]);
                }
            }
            printf("\n");
        }
        else
        {
            printf("\n");
        }
        printf("%g\n", mediana);
    }
    return 0;
}
