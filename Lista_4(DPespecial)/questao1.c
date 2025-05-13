#include <stdio.h>

int separa(int n);

int main()
{
    int soma, n;

    scanf("%d", &n); 
    soma = separa(n);
    printf("%d\n", soma);

    return 0;
}

int separa(int n)
{
    int uni, dezena, centena, milhar, soma;

    uni = n % 10;
    n = n / 10;

    dezena = n % 10;
    n = n / 10;

    centena = n % 10;
    n = n / 10;

    milhar = n % 10;

    soma = uni + dezena + centena + milhar;
    return soma;
}
