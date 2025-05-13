#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define QTD_MAX 50
const int NUM_MAX = 10;

int main()
{
  int x, a;
  double soma, media;

  srand(time(NULL));
  for (x = 0, soma = 0; x < QTD_MAX; x++)
  {
    a = 1 + (rand() % NUM_MAX);
    printf("Numero %d: %d\n", x, a);
    soma += a;
  }

  media = soma / QTD_MAX;
  printf("Media = %.2lf\n", media);
  return 0;
}
