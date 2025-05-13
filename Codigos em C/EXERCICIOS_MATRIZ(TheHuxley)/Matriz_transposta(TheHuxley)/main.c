#include <stdio.h>

int main()
{
  int m[100][100];
  int mt[100][100];
  int linhas, colunas;
  int R, C;

  scanf("%d%d", &R, &C);

  for (linhas = 0; linhas < R; linhas++)
  {
    for (colunas = 0; colunas < C; colunas++)
    {
      scanf("%d", &m[linhas][colunas]);
      mt[colunas][linhas] = m[linhas][colunas];
    }
  }
  for (linhas = 0; linhas < C; linhas++)
  {
    for (colunas = 0; colunas < R; colunas++)
    {
      printf("%d ", mt[linhas][colunas]);
    }
    printf("\n");
  }

  return 0;
}