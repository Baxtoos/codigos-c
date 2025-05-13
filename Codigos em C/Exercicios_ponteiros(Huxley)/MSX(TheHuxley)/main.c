#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 76

int main()
{
  char *linha;
  int tamanho = MAX, i;
  const char *FIM = "the end!";

  linha = (char *)malloc(tamanho * sizeof(char));

  scanf("%76[^\n]%*c", linha);

  while (strcmp(linha, FIM) != 0)
  {

    for (i = 0; linha[i] != '\0'; i++)
    {
      linha[i] = toupper(linha[i]);
    }

    printf("%s\n", linha);

    scanf("%76[^\n]%*c", linha);
  }

  free(linha);

  return 0;
}
