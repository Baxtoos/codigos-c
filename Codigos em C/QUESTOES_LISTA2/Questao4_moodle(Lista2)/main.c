#include <stdio.h>

int main()
{
  int A, B, conversao;

  scanf("%d%d", &A, &B);

  if (A == 0)
  {
    conversao = 12;
    printf("%02d\n%02d\nam\n", conversao, B);
  }
  else if (A < 12)
  {
    conversao = A;
    printf("%02d\n%02d\nam\n", conversao, B);
  }
  else if (A == 12)
  {
    conversao = 12;
    printf("%02d\n%02d\npm\n", conversao, B);
  }
  else
  {
    conversao = A - 12;
    printf("%02d\n%02d\npm\n", conversao, B);
  }

  return 0;
}
