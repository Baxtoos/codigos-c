#include <stdio.h>

int main()
{
  int x, n, multiplos, i;
  scanf("%d%d", &x, &n);

  for (i = 1; i * x < n; i++)
  {
    multiplos = i;
  }
  printf("O numero %d tem %d multiplos menores que %d.\n", x, multiplos, n);
  return 0;
}
