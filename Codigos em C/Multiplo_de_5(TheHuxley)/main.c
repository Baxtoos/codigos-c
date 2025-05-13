#include <stdio.h>
int main()
{
  int x;
  scanf("%d", &x);

  if (x % 5 == 0)
  {
    printf("Eh multiplo de 5\n");
  }
  else
  {
    printf("Nao eh multiplo de 5\n");
  }
  return 0;
}