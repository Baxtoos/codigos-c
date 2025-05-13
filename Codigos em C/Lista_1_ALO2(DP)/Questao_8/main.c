#include <stdio.h>

int main()
{
    int N, M, x, y, maior_sequencia = 0;
    scanf("%d%d", &N, &M);
    int matriz[N][M];
    
    for (x = 0; x < N; x++)
    {
        for (y = 0; y < M; y++)
        {
            scanf("%d", &matriz[x][y]);
        }
    }

    for (x = 0; x < N; x++)
    {
        int aux = 1; 
        int maiorN = 1;
        
        for (y = 1; y < M; y++)
        {
            if (matriz[x][y] == matriz[x][y - 1] + 1 || matriz[x][y] == matriz[x][y - 1] - 1)
            {
                aux++;
            }
            else
            {
                if (aux > maiorN)
                {
                    maiorN = aux;
                }
                aux = 1;
            }
        }
        if (aux > maiorN)
        {
            maiorN = aux;
        }

        printf("Linha %d: %d\n", x, maiorN); 
        
        if (maiorN > maior_sequencia)
        {
            maior_sequencia = maiorN;
        }
    }
    
    printf("Maior Sequencia: %d\n", maior_sequencia);
    return 0;
}
