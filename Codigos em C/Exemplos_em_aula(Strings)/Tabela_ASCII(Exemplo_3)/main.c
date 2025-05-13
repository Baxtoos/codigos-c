#include <stdio.h>
const int colunas = 11;

int main()
{
  int i;

  printf("%c", 201);

  for (i = 0; i < colunas; i++)

    printf("%c", 205);
  printf("%c\n", 187);

  printf("%c", 186);
  printf("Linguagem C");
  printf("%c\n", 186);

  printf("%c", 200);

  for (i = 0; i < colunas; i++)
    printf("%c", 205);
  printf("%c\n", 188);

  return 0;
}