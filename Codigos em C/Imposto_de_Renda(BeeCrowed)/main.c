#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salario, imposto;
    scanf ("%lf", &salario);

    if (salario >= 2000.01 && salario <= 3000.00 )
    {
        imposto = (salario - 2000.00) * 0.08;
        printf ("R$ %.2lf\n", imposto);
    }
    else if (salario >= 3000.01 && salario <= 4500.00 )
     {
         imposto = 1000.00 * 0.08 + (salario - 3000.00) * 0.18;
         printf ("R$ %.2lf\n", imposto);
     }
    else if (salario >= 4500.00)
     {
        imposto = 1000.00 * 0.08 + 1500.00 * 0.18 + (salario - 4500.00) * 0.28;
        printf ("R$ %.2lf\n", imposto);
     }
    else
     {
        printf ("Isento\n");
     }
    return 0;
}
