#include <stdio.h>

int main ()
{
    int N;
    scanf ("%d", &N);
    while (N != -1)
    {
        printf("%d\n", fatorial(N));
        scanf ("%d", &N);
    }

    return 0;
}


int fatorial(int N) 
{
    int resultado = 1;
    for (int i = 2; i <= z; i++) 
    {
        resultado *= i;
    }

    return resultado;
}