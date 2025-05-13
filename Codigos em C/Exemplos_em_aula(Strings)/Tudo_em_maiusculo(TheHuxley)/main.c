#include <stdio.h>

int main()
{
  char nome[101], c;
  int i;

  fgets(nome, 101, stdin);
  i = 0;
  while (nome[i] != '\0')
    i++;
  if (nome[i - 1] == '\n')
    nome[i - 1] = '\0';

  i = 0;
  while (nome[i] != '\0')
  {
    c = nome[i];
    if (c >= 97 && c <= 122)
    {
      nome[i] = c - 32;
    }
    i++;
  }

  printf("%s\n", nome);
  return 0;
}