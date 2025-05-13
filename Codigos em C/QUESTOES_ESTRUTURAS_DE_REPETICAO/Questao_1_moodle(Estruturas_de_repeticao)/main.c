#include <stdio.h>

int main()
{
  int n, m, cont; // define quando a repetição acontece e a quantidade de vezes que repete.
  scanf("%d%d", &n, &m);

  for (cont = n; cont <= m; cont++) // cada ; define uma função (sintaxe no moodle) //cont++ soma 1 unidade.
  {
    if (cont % 2 != 0) // verifica se o número é impar para a repetição acontecer
    {
      printf("%d\n", cont);
    }
  }

  return 0;
}
