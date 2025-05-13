#include <stdio.h>

int main()
{
  int programas, tempo_almoco, tempo_restante;
  int melhor_entretenimento = -1, melhor_indice = -1;
  scanf("%d%d", &programas, &tempo_almoco);
  int duracao_programa[programas], pontos_entretenimento[programas];

  for (int i = 0; i < programas; i++)
  {
    scanf("%d", &duracao_programa[i]);
  }

  for (int i = 0; i < programas; i++)
  {
    scanf("%d", &pontos_entretenimento[i]);
  }

  for (int i = 0; i < programas; i++)
  {
    tempo_restante = tempo_almoco - i;

    if (duracao_programa[i] <= tempo_restante)
    {
      if (pontos_entretenimento[i] > melhor_entretenimento)
      {
        melhor_entretenimento = pontos_entretenimento[i];
        melhor_indice = i + 1;
      }
    }
  }
  printf("%d\n", melhor_indice);
  return 0;
}
