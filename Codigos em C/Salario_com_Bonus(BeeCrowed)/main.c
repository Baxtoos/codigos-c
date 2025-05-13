#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[50];
    double salario_fixo, total_de_vendas, comissao, salario_total;
    scanf ("%s", nome);
    scanf ("%lf%lf", &salario_fixo, &total_de_vendas);

    comissao = 0.15 * total_de_vendas;
    salario_total = salario_fixo + comissao;

    printf ("TOTAL = R$ %.2lf\n", salario_total);
    return 0;
}
