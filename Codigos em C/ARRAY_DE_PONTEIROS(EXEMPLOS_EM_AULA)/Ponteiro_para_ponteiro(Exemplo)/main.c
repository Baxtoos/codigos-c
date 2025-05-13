#include <stdio.h>

int main()
{
  int a = 7;
  int *p;
  int **pp;

  p = &a;
  pp = &p;

  printf("a = %d, &a = %u\n", a, &a);
  printf("*p = %d, p = %u, &p = %u\n", *p, p, &p);
  printf("**pp = %d, *pp = %u, pp = %u\n", **pp, *pp, pp);

  return 0;
}