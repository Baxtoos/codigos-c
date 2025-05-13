#include <stdio.h>

int main() 
{
    int alunos, escovas_necessarias, escovas_a_pagar;
    double gastos, gasto_total, valor_escovas = 3.50;
    scanf("%d", &alunos);

    escovas_necessarias = alunos;
    escovas_a_pagar = (escovas_necessarias / 3) * 2 + (escovas_necessarias % 3);

    gasto_total = escovas_a_pagar * valor_escovas;

    printf("%.2lf\n", gasto_total);

    return 0;
}
