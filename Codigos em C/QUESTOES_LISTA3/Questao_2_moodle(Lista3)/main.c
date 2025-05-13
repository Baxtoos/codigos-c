#include <stdio.h>

int main()
{
  int N, C, pessoas_no_elevador = 0, capacidade_excedida = 0;
  scanf("%d%d", &N, &C);

  for (int i = 0; i < N; i++)
  {
    int S, E;
    scanf("%d %d", &S, &E);

    pessoas_no_elevador -= S;
    pessoas_no_elevador += E;

    if (pessoas_no_elevador > C)
    {
      capacidade_excedida = 1;
      break;
    }
  }

  if (capacidade_excedida)
  {
    printf("S\n");
  }
  else
  {
    printf("N\n");
  }
  return 0;
}
