#include <stdio.h>
#define desconto 0.85

int main()
{
   int cod, qtd;
   double total;
   scanf ("%d%d", &cod, &qtd);

   switch (cod){
   case 1 : total = qtd * 5.30; break;
   case 2 : total = qtd * 6; break;
   case 3 : total = qtd * 3.2; break;
   case 4 : total = qtd * 2.5; break;
   }
   if (qtd >= 15 || total >= 40){
    total = 0.85 * total;
   }
   printf ("R$ %.2lf\n", total);
    return 0;
}
