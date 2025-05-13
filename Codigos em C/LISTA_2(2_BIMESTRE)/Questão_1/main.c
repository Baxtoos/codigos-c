#include <stdio.h>

int main()
{
  double ingredientes[3][4], preco[4];
  double valor_pastel = 0, valor_empada = 0, valor_kibe = 0;
  int i, j;

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 4; j++)
    {
      scanf("%lf", &ingredientes[i][j]);
    }
  }

  for (i = 0; i < 4; i++)
  {
    scanf("%lf", &preco[i]);
  }

  for (j = 0; j < 4; j++)
  {
    valor_pastel += ingredientes[0][j] * preco[j];
    valor_empada += ingredientes[1][j] * preco[j];
    valor_kibe += ingredientes[2][j] * preco[j];
  }

  printf("%.2lf\n", valor_pastel);
  printf("%.2lf\n", valor_empada);
  printf("%.2lf\n", valor_kibe);

  return 0;
}
