#include <stdio.h>

int main ()
{
    int N, i, encontrou = 0;
    double T;
    scanf("%d%lf", &N, &T);

    int casas[N];
    double tamanhos[N];

    for (i = 0; i < N; i++)
    {
        scanf("%d", &casas[i]);
    }
    for (i = 0; i < N; i++)
    {
        scanf("%lf", &tamanhos[i]);
    }
    for (i = 0; i < N; i++)
    {
        if (tamanhos[i] == T)
        {
            printf("Cinderela mora na casa %d!\n", casas[i]);
            encontrou = 1; 
        }
    }
    
    if (encontrou == 0)
    {
        printf("Nenhuma das jovens e a moca do baile\n");
    }
    
    return 0;
}
