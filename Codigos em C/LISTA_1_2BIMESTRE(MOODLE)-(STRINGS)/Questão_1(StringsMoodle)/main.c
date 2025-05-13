#include <stdio.h>
#include <string.h>

int main()
{
  char frase[401];
  int i, tamanho, quebra = 0;

  fgets(frase, 401, stdin);

  tamanho = strlen(frase);

  if (frase[tamanho - 1] == '\n')
  {
    frase[tamanho - 1] = '\0';
    tamanho--;
  }

  for (i = tamanho - 1; i >= 0 && !quebra; i--)
  {
    if (frase[i] == ' ')
    {
      quebra = 1;
    }
  }

  i++;
  while (frase[i] == ' ')
  {
    i++;
  }

  printf("%s\n", &frase[i]);

  return 0;
}
