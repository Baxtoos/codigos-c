#include <stdio.h>

int DigitosPares (int N);

int main() 
{
    int N, resultado;
    scanf("%d", &N);
    if (N < 0) 
    {
        N = -N; 
    }
    resultado = DigitosPares (N);
    printf("%d\n", resultado);
    return 0;
}

int DigitosPares (int N)
{
    int ultimo_digito;

    if (N == 0) 
    {
        return 0;
    }

    ultimo_digito = N % 10;

    if (ultimo_digito % 2 == 0) 
    {
        return 1 + DigitosPares (N / 10);
    }
    else 
    {
        return DigitosPares (N / 10);
    }
}