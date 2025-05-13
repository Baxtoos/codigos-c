#include <stdio.h>
#define MAX 1000

int main () 
{
    int N, E, x, y, achou = 0;
    int v[MAX];
    scanf ("%d%d", &N, &E);

    for (x = 0; x < N; x++)
    {
        scanf ("%d", &v[x]);
    }

    for (x = 0; x < N; x++)
    {
        for (y = x + 1; y < N; y++)
        {
            if (v[x] + v[y] == E)
            {
                achou = 1;
            }
        }
    }

if (achou == 1)
{
    printf ("SIM\n");
}
else 
{
    printf ("NAO\n");
}

    return 0;
}