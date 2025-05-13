#include <stdio.h>

int soma_digitos(int n);

int main() 
{
    int n;
    scanf("%d", &n);
    
    printf("%d\n", soma_digitos(n));
    
    return 0;
}

int soma_digitos(int n)
{
    int soma = 0;

    while (n > 0) 
    {
        soma += n % 10;
        n /= 10;
    }
    
    return soma;
}