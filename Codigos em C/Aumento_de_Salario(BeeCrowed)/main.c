#include <stdio.h>
#include <stdlib.h>

int main()
{
   double salario, reajuste, novo_salario;
   scanf ("%lf", &salario);

   if (salario >= 0 && salario <= 400.00 )
   {
       reajuste = salario * 0.15;
       novo_salario = salario + reajuste;
       printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15 %%\n", novo_salario, reajuste);
   }
   else if (salario >= 400.01 && salario <= 800.00)
   {
       reajuste = salario * 0.12;
       novo_salario = salario + reajuste;
       printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 12 %%\n", novo_salario, reajuste);
   }
   else if (salario >= 800.01 && salario <= 1200.00)
   {
       reajuste = salario * 0.10;
       novo_salario = salario + reajuste;
       printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 10 %%\n", novo_salario, reajuste);
   }
   else if (salario >= 1200.01 && salario <= 2000.00)
   {
       reajuste = salario * 0.07;
       novo_salario = salario + reajuste;
       printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 7 %%\n", novo_salario, reajuste);
   }
   else
   {
       reajuste = salario * 0.04;
       novo_salario = salario + reajuste;
       printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 4 %%\n", novo_salario, reajuste);
   }
    return 0;
}
