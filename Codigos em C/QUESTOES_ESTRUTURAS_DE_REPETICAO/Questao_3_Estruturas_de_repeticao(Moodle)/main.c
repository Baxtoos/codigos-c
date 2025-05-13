#include <stdio.h>
#include <math.h>

int main()
{
  int n, a, b, soma;
  scanf("%d", &n);

  while (n >= 1000 && n <= 9999)
  {
    a = n / 100;
    b = n % 100;
    soma = a + b;

    if (soma * soma == n)
    {
      printf("propriedade do 3025!\n");
    }
    else
    {
      printf("numero comum\n");
    }
    scanf("%d", &n);
  }
  return 0;
}
