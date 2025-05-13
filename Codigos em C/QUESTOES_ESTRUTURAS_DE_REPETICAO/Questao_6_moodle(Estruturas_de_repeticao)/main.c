#include <stdio.h>

int main()
{
  int i;
  long long int n, fatorial;
  scanf("%lld", &fatorial);

  while (fatorial >= 0 && fatorial <= 12)
  {
    for (i = 1, n = fatorial; i < fatorial; i++)
    {
      n *= i;
    }
    if (fatorial == 0)
    {
      n = 1;
    }
    printf("%lld\n", n);
    scanf("%lld\n", &fatorial);
  }
  return 0;
}
