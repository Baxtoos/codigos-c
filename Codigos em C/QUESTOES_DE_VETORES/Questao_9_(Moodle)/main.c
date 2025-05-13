#include <stdio.h>

int main()
{
  int N, frequencia[51] = {0};
  scanf("%d", &N);

  int array[N];

  for (int i = 0; i < N; i++)
  {
    scanf("%d", &array[i]);
  }

  int maior_frequencia = 0, numero_mais_frequente = 51;

  for (int i = 0; i < N; i++)
  {
    frequencia[array[i]]++;

    if (frequencia[array[i]] > maior_frequencia || (frequencia[array[i]] == maior_frequencia && array[i] < numero_mais_frequente))
    {
      maior_frequencia = frequencia[array[i]];
      numero_mais_frequente = array[i];
    }
  }

  int maior_sequencia = 0, sequencia_atual = 0;
  for (int i = 0; i < N; i++)
  {
    if (array[i] == numero_mais_frequente)
    {
      sequencia_atual++;
      if (sequencia_atual > maior_sequencia)
      {
        maior_sequencia = sequencia_atual;
      }
    }
    else
    {
      sequencia_atual = 0;
    }
  }

  printf("%d\n", numero_mais_frequente);
  printf("%d\n", maior_frequencia);
  printf("%d\n", maior_sequencia);

  return 0;
}
