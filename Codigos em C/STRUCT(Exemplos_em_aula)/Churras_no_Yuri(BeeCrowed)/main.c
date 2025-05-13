#include <stdio.h>
#define MAX_CHAR 21
#define MAX_PECAS 10

typedef struct
{
  char carne[MAX_CHAR];
  int dias;
} tipo_peca;

int main()
{
  int n, x, y;
  tipo_peca p[MAX_PECAS], aux;

  while (scanf("%d", &n) == 1)
  {
    for (x = 0; x < n; x++)
    {
      getchar();
      scanf("%20s", p[x].carne);
      scanf("%d", &p[x].dias);
    }
    for (x = 0; x < n - 1; x++)
      for (y = x + 1; y < n; y++)
        if (p[y].dias < p[x].dias)
        {
          aux = p[x];
          p[x] = p[y];
          p[y] = aux;
        }
    printf("%s", p[0].carne);
    for (x = 1; x < n; x++)
    {
      printf(" %s", p[x].carne);
    }
    printf("\n");
  }
  return 0;
}