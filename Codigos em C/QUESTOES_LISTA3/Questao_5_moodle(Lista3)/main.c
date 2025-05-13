#include <stdio.h>

int main()
{
  int n, m, vencedor = 0, menor_temp = 0, i, temp_total, j, temp;

  scanf("%d %d", &n, &m);

  for (i = 0; i < n; i++)
  {
    temp_total = 0;

    for (j = 0; j < m; j++)
    {
      scanf("%d", &temp);
      temp_total += temp;
    }

    if (i == 0 || temp_total < menor_temp)
    {
      menor_temp = temp_total;
      vencedor = i;
    }
  }

  printf("%d\n", vencedor + 1);
  return 0;
}
