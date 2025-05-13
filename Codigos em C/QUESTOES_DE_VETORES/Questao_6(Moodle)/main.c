#include <stdio.h>
#define PI2_MAXIMO 45
#define PI3_MAXIMO 30

int main()
{
  int pi2[PI2_MAXIMO], pi3[PI3_MAXIMO];
  int presenca[10001] = {0};

  for (int i = 0; i < PI2_MAXIMO; i++)
  {
    scanf("%d", &pi2[i]);
  }

  for (int i = 0; i < PI3_MAXIMO; i++)
  {
    scanf("%d", &pi3[i]);
    presenca[pi3[i]] = 1;
  }

  for (int i = 0; i < PI2_MAXIMO; i++)
  {
    if (presenca[pi2[i]])
    {
      printf("%d ", pi2[i]);
    }
  }

  printf("\n");
  return 0;
}
