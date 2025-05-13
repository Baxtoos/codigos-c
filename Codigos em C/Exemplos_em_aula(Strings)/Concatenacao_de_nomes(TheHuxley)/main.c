#include <stdio.h>
#include <string.h>

int main()
{
  char nome[51], sobrenome[51], completo[102];
  scanf("%50s%*c", nome);
  scanf("%50s", sobrenome);

  strcpy(completo, nome);
  strcat(completo, " ");
  strcat(completo, sobrenome);

  printf("%s\n", completo);
  return 0;
}
