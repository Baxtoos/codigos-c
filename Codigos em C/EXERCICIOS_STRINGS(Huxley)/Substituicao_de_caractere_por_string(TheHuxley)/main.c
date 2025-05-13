#include <stdio.h>
#include <string.h>

int main()
{
  char texto[101];
  char c1, c2;
  int x;

  scanf("%50[^\n]%*c", texto);
  scanf("%c %c", &c1, &c2);

  for (x = 0; x < strlen(texto); x++)
  {
    if (texto[x] == c1)
    {
      texto[x] = c2;
    }
  }
  printf("%s\n", texto);
}
