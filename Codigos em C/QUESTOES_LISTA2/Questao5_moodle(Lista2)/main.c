#include <stdio.h>

int main()
{
  int x, y, z;
  scanf("%d%d%d", &x, &y, &z);

  int maximo_XemY[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  if (y < 1 || y > 12 || x < 1 || x > maximo_XemY[y - 1])
  {
    printf("Data invalida\n");
  }
  else
  {
    x++;
    if (x > maximo_XemY[y - 1])
    {
      x = 1;
      y++;
      if (y > 12)
      {
        y = 1;
        z++;
      }
    }
    printf("%d.%d.%d\n", x, y, z);
  }

  return 0;
}
