#include <stdio.h>

int SomaDigitos (int numero);

int main ()
{
    int n, soma;
    scanf ("%d", &n);

    soma = SomaDigitos(n);
    printf ("%d\n", soma);
    
    return 0;
}

int SomaDigitos (int numero)
{
    int digito, total;
    total = 0;

    while (numero != 0)
    {
        digito = numero % 10;
        total = total + digito;
        numero = numero / 10;
    }

    return total;
}