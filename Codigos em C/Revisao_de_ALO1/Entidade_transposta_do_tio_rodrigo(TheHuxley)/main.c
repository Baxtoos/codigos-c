#include <stdio.h>
#define MAX 100

int main ()
{
    int m[MAX][MAX], m2[MAX][MAX];
    int n, x, y, aux;
    scanf ("%d", &n);

    for (x = 0; x < n; x++)
    {
        for (y = 0; x < n; y++)
        {
            scanf ("%d", &m[x][y]);
        }
    }

    for (x = 0; x < n/2; x++)
    {
        aux = m [x][x]; 
        m [x][x] = m [n-x-1][n-x-1];
        m [n-x-1][n-x-1] = aux;
    }
    
    for (x = 0; x < n; x++)
    {
        m[x][n-1-x] *= 2; 
    }

    for (x = 0; x < n; x++)
    {
        for (y = 0; y < n; y++)
        {
            m2[x][y] = m[y][x];   
        }
    }

    printf ("%d", m2 [x][y])

    return 0;
}