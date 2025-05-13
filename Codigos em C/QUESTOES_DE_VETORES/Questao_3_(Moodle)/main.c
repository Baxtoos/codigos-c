#include <stdio.h>

int main()
{
  int n, amigos;
  int minCompleto = amigos;
  scanf("%d %d", &n, &amigos);
  int niveisCompletos[n + 1];

  for (int i = 1; i <= n; i++)
  {
    niveisCompletos[i] = 0;
  }

  for (int i = 0; i < f; i++)
  {
    int a_i;
    scanf("%d", &a_i);

    for (int j = 0; j < a_i; j++)
    {
      int nivel;
      scanf("%d", &nivel);

      niveisCompletos[nivel]++;
    }
  }

  for (int i = 1; i <= n; i++)
  {
    if (niveisCompletos[i] < minCompleto)
    {
      minCompleto = niveisCompletos[i];
    }
  }

  if (minCompleto == 0)
  {
    minCompleto = 0;
  }

  printf("The %d friends could finish the game %d times\n", amigos, minCompleto);
  return 0;
}
