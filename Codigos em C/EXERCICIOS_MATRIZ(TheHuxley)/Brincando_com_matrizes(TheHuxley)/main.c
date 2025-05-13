#include <stdio.h>

int main ()
{
  int m[3][3];
  int maior_valor, delta, soma_diagonal = 0;
  int x, y;
  double media;

    for (x = 0; x < 3; x++)
    {
      for (y = 0; y < 3; y++)
      {
        scanf("%d", m[x][y]); 
      
        if ((x == 0 && y == 0 ) || m [x][y] > maior_valor)
        {
          maior_valor = m[x][y];
        }

        soma_diagonal += m[x][y]
      }
    }
  media = soma_diagonal / 9.0;

  if (maior_valor > 0 )
  {
    delta = 1;
  } 
  else if ( maior == 0)
  {
    delta = 0;
  }
  else 
  {
    delta = -1;
  }
    
  soma_diagonal = 0;

  for (x = 0; x < 3; x++)
  {
    soma_diagonal += m[x][y];
  }

  printf ("%2.lf\n", media); 
  printf ("%d\n", maior_valor);
  printf ("%d\n", soma_diagonal);
  
  return 0;
}