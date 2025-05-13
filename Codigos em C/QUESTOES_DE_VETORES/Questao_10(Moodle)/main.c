#include <stdio.h>
#define MAX_N 50

int main()
{
  int n, i, j, aux;
  int array[MAX_N], unico[MAX_N];
  int k = 0;

  scanf("%d", &n);

  for (i = 0; i < n; i++)
  {
    scanf("%d", &array[i]);
  }

  for (i = 0; i < n; i++)
  {
    int existe = 0;
    for (j = 0; j < k; j++)
    {
      if (array[i] == unico[j])
      {
        existe = 1;
        break;
      }
    }

    if (existe == 0)
    {
      unico[k++] = array[i];
    }
  }

  for (i = 0; i < k; i++)
  {
    for (j = i + 1; j < k; j++)
    {
      if (unico[i] > unico[j])
      {
        aux = unico[i];
        unico[i] = unico[j];
        unico[j] = aux;
      }
    }
  }

  for (i = 0; i < k; i++)
  {
    if (i > 0)
    {
      printf(" ");
    }
    printf("%d", unico[i]);
  }

  printf("\n");
  return 0;
}
