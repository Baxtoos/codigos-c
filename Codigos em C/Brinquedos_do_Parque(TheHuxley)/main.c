#include <stdio.h>
int main()
{
  int f, i;           // f = altura e i = idade
  int brinquedos = 0; // variavel de adição
  scanf("%d%d", &f, &i);

  if (f >= 150 && i >= 12)
  {
    brinquedos++;
  }
  if (f >= 140 && i >= 14)
  {
    brinquedos++;
  }
  if (f >= 170 && i >= 16)
  {
    brinquedos++;
  }
  printf("%d\n", brinquedos);
}