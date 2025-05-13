#include <stdio.h>

int main()
{
  int n, aux;
  scanf("%d", &n);

  int numeros[n];

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &numeros[i]);
  }

  for (int i = 0; i < n - 1; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (numeros[i] > numeros[j])
      {
        aux = numeros[i];
        numeros[i] = numeros[j];
        numeros[j] = aux;
      }
    }
  }

  printf("%d %d %d\n", numeros[0], numeros[n / 2], numeros[n - 1]);
  return 0;
}
