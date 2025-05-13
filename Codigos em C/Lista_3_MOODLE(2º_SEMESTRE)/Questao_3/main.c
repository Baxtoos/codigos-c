#include <stdio.h>

int eh_primo(int x);
int proximo_primo(int y);
long long fatorial(int z);

int main() 
{
    int n;
    double soma = 0.0;

    scanf("%d", &n);

    int divisor = 1;

    if (n != 0) 
    {
        for (int i = 1; i <= n; i++) 
        {
            long long termo_fatorial = fatorial(i);
            
            if (i > 1) 
            {
                divisor = proximo_primo(i);
            }

            soma += (double)termo_fatorial / divisor;

            printf("%d!/%d", i, divisor);
            if (i < n) 
            {
                printf(" + ");
            }
        }
        printf("\n%.2f\n", soma);
    } 
    else 
    {
        printf("0.00\n");
    }

    return 0;
}

int eh_primo(int x)
{
    if (x < 2)
    {
        return 0;
    }

    for (int i = 2; i * i <= x; i++) 
    {
        if (x % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int proximo_primo(int y) 
{
    while (!eh_primo(y)) 
    {
        y++;
    }
    return y;
}

long long fatorial(int z) 
{
    long long resultado = 1;
    for (int i = 2; i <= z; i++) 
    {
        resultado *= i;
    }

    return resultado;
}
