#include <stdio.h>
#include <string.h>

int main()
{
  char texto[51];
  char c;
  int x, cont;

  scanf("%50[^\n]%*c", texto);
  scanf("%c", &c);

  for (x = 0, cont = 0; x < strlen(texto); x++)
  {
    if (texto[x] == c)
    {
      cont++;
    }
  }
  printf("%d\n", cont);
}