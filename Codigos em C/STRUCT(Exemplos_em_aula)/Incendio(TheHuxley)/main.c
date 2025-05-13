#include <stdio.h>

typedef struct
{
  int ID;
  double temp;
  char fumaca;
} tipo_sprinkler;

int main()
{
  tipo_sprinkler V[101];
  int testes, nSprinkler, y, i;
  double media;
  int soma = 0;

  scanf("%d", &testes);

  for (i = 0; i < testes; i++)
  {
    scanf("%d", &nSprinkler);

    for (y = 0; y < nSprinkler; y++)
    {
      scanf("%d", &V[y].ID);
      scanf("%lf ", &V[y].temp);
      scanf("%c", &V[y].fumaca);

      soma += V[y].temp;
    }

    media = soma / nSprinkler;
    printf("TESTE %d\n", i + 1);

    for (y = 0; y < nSprinkler; y++)
    {
      if (V[y].fumaca == 'S' || V[y].temp > media + (media * 0.15) || V[y].temp > 40)
      {
        printf("%d\n", V[y].ID);
      }
    }
  }
  return 0;
}