#include <stdio.h>
int main()
{

  int n;
  scanf("%d", &n);

  if (n > 90 || n <= 0)
  {
    printf("Invalido\n");
  }

  else if (n % 4 == 0)
  {
    printf("PIN\n", n);
  }

  else if (n == 90)
  {
    printf("4\n");
  }

  else if (n == 1)
  {
    printf("4\n");
  }

  else
  {
    printf("%d\n", n + 1);
  }
  return 0;
}
