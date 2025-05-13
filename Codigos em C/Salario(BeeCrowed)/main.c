#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nmr_funcionarios, qnt_horas_trabalhadas;
    double valor_hora, salario;
    scanf("%d%d", &nmr_funcionarios, &qnt_horas_trabalhadas);
    scanf ("%lf", &valor_hora);

    salario = valor_hora * qnt_horas_trabalhadas;

    printf("NUMBER = %d\n", nmr_funcionarios);
    printf("SALARY = U$ %.2lf\n", salario);
    return 0;
}
