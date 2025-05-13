#include <stdio.h>
int main()
{
  int A, B, C;
  scanf("%d%d%d", &A, &B, &C);

  if (A == 1 && B == 0 && C == 0)
  {
    printf("A");
  }
  if (B == 1 && A == 0 && C == 0)
  {
    printf("B");
  }
  if (C == 1 && A == 0 && B == 0)
  {
    printf("C");
  }
  if (A == 0 && B == 1 && C == 1)
  {
    printf("A");
  }
  if (B == 0 && A == 1 && C == 1)
  {
    printf("B");
  }
  if (C == 0 && A == 1 && B == 1)
  {
    printf("C");
  }
  if (C == 0 && A == 0 && B == 0)
  {
    printf("*");
  }
  if (C == 1 && A == 1 && B == 1)
  {
    printf("*");
  }
  return 0;
}