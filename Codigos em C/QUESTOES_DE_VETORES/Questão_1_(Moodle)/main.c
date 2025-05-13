#include <stdio.h>

int main()
{
  int N, i;

  scanf("%d", &N);

  int array[N];

  for (i = 0; i < N; i++)
  {
    scanf("%d", &array[i]);
  }

  for (int i = N - 1; i >= 0; i--)
  {
    printf("%d", array[i]);
    if (i != 0)
    {
      printf(" ");
    }
  }
  printf("\n");
  return 0;
}
