#include <stdio.h>
#define MAX 100

int main()
{
  int mA[MAX][MAX], mB[MAX][MAX], mResultado[MAX][MAX];
  int n, m, o, i, j, k, multiplicacao, soma;

  scanf("%d%d%d", &n, &m, &o);

  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    {
      scanf("%d", &mA[i][j]);
    }
  }
  
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < o; j++)
    {
      scanf("%d", &mB[i][j]);
    }
  }
  
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < o; j++)
    {
      soma = 0;
      for (k = 0; k < m; k++)
      {
        multiplicacao = mA[i][k] * mB[k][j];
        soma += multiplicacao;
      }
      mResultado[i][j] = soma;
    }
  }
  
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < o; j++)
    {
      printf("%d", mResultado[i][j]);
      
      if (j != (o-1))
      {
          printf(" ");
      }
    }
    printf("\n");
  }
  
  return 0;
}