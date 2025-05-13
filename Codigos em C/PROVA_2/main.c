#include <stdio.h>

int main()
{
  int T, N, respostas_certas = 0;
  scanf("%d%d", &T, &N);
  int pessoas[N];

  for (int i = 0; i < N; i++)
  {
    scanf("%d", &pessoas[i]);
  }

  for (int i = 0; i < N; i++)
  {
    if (pessoas[i] == T)
    {
      respostas_certas++;
    }
  }

  printf("%d\n", respostas_certas);
  return 0;
}