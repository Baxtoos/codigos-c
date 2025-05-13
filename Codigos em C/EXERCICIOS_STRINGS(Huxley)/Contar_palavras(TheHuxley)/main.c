#include <stdio.h>
#include <string.h>

int main()
{
  char texto[501];
  int x, cont;

  scanf("%500[^\n]%*c", texto);

  cont = 1;

  for (x = 0; x < strlen(texto) - 1; x++)
  {
    if (texto[x] == ' ' && texto[x + 1] != ' ')
    {
      cont++;
    }
  }
  printf("%d\n", cont);
}
