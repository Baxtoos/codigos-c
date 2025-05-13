#include <stdio.h>
#define TAM 6

int main()
{
  int vetor[TAM], x;

  for (x = 0; x < TAM; x++)
  {
    vetor[x] = (x + 1) * 10;
    printf("%d\n", vetor[x]);
  }
  return 0;
}
