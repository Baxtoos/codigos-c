#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade_dias, anos, meses, dias;
    scanf ("%d", &idade_dias);

    anos = idade_dias / 365;
    idade_dias %= 365;
    meses = idade_dias / 30;
    dias = idade_dias % 30;

    printf ("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos, meses, dias);
    return 0;
}
