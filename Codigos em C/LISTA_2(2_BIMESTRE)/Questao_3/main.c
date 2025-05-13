#include <stdio.h>

int main()
{
  int matriz[3][3];
  double media;
  int menor_valor, soma_positivos = 0, cont_positivos = 0;
  int delta, soma_nao_diagonal = 0;
  int x, y;

  for (x = 0; x < 3; x++)
  {
    for (y = 0; y < 3; y++)
    {
      scanf("%d", &matriz[x][y]);

      if ((x == 0 && y == 0) || matriz[x][y] < menor_valor)
      {
        menor_valor = matriz[x][y];
      }

      if (matriz[x][y] > 0)
      {
        soma_positivos += matriz[x][y];
        cont_positivos++;
      }

      if (x != y)
      {
        soma_nao_diagonal += matriz[x][y];
      }
    }
  }

  media = (cont_positivos > 0) ? (double)soma_positivos / cont_positivos : 0.0;

  delta = (menor_valor % 2 == 0) ? 1 : 0;

  printf("%.2lf ", media);
  printf("%d ", menor_valor);
  printf("%d ", delta);
  printf("%d\n", soma_nao_diagonal);

  return 0;
}
