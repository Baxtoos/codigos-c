#include <stdio.h>
#include <string.h>

int main()
{
  char palavra[256], palavra_invertida[256];
  int x, y = 0;

  scanf("%255[^\n]%*c", palavra);

  for (x = strlen(palavra) - 1; x >= 0; x--, y++)
  {
    palavra_invertida[y] = palavra[x];
  }

  palavra_invertida[y] = '\0';

  printf("%s\n", palavra_invertida);
  return 0;
}