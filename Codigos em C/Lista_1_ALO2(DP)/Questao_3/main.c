#include <stdio.h>

int main ()
{
    int cod, qtd;
    double preco, total;
    scanf ("%d%d", &cod, &qtd);

    switch (cod)
    {
    case 1 : preco = 14.00; break;
    case 2 : preco = 24.50; break;
    case 3 : preco = 29.90; break;
    case 4 : preco = 5.50; break;
    case 5 : preco = 7.20; break;
    }

    total = qtd * preco;

    printf ("Total: R$ %.2f\n", total);
    return 0;
}