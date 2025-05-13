#include <stdio.h>

int main()
{
  int n, a, b;

  for (;;)
  {
    int pontosA = 0, pontosB = 0;

    scanf("%d", &n);

    if (n == 0)
    {
      break;
    }

    for (int i = 0; i < n; i++)
    {
      scanf("%d %d", &a, &b);

      if (a > b)
      {
        pontosA++;
      }
      else if (b > a)
      {
        pontosB++;
      }
    }

    printf("%d %d\n", pontosA, pontosB);
  }

  return 0;
}