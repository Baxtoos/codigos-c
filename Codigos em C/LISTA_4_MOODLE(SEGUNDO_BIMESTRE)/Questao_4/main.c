#include <stdio.h>

void ConversorDeBinario(int n);

int main() 
{
    int N;

    scanf("%d", &N);

    ConversorDeBinario(N);

    return 0;
}

void ConversorDeBinario(int n) 
{
    if (n > 1) 
    {
        ConversorDeBinario(n / 2);
    }
    
    printf("%d\n", n % 2);
}
