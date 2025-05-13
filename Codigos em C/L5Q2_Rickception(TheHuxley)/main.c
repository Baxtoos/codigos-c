#include <stdio.h>

int serie (int N, int T);

int main ()
{
    int n, t;

    scanf ("%d%d", &n, &t);
    printf ("%d\n", serie(n, t));

    return 0;
}

int serie (int N, int T)
{
    if (T == 0)
    {
        return N;
    }
    else 
    {
    }
    if (T % 2 == 0)
    {
        return serie (N, T - 1) + serie (N, T - 1) % 5;
    }
    else
    {
        return serie (N, T - 1) + 3;
    }
    
}