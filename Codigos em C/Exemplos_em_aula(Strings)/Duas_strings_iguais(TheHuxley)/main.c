#include <stdio.h>
#include <string.h>

int main()
{
  char a[51], b[51];

  fgets(a, 51, stdin);
  fgets(b, 51, stdin);

  if (a[strlen(a) - 1] == '\n')
    a[strlen(a) - 1] = '\0';

  if (b[strlen(b) - 1] == '\n')
    b[strlen(b) - 1] = '\0';

  if (strcmp(a, b) == 0)
    printf("IGUAIS\n");

  else
    printf("DIFERENTES\n");

  return 0;
}
