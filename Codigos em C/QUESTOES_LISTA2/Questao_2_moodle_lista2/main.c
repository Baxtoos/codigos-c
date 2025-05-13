#include <stdio.h>
int main()
{
  int A1, A2, A3, tempo_andar1, tempo_andar2, tempo_andar3, minutos_gastos;
  scanf("%d%d%d", &A1, &A2, &A3);

  tempo_andar1 = (A1 * 0) + (A2 * 2) + (A3 * 4);
  tempo_andar2 = (A1 * 2) + (A2 * 0) + (A3 * 2);
  tempo_andar3 = (A1 * 4) + (A2 * 2) + (A3 * 0);

  if (tempo_andar1 <= tempo_andar2 && tempo_andar1 <= tempo_andar3)
  {
    minutos_gastos = tempo_andar1;
  }
  if (tempo_andar2 <= tempo_andar1 && tempo_andar2 <= tempo_andar3)
  {
    minutos_gastos = tempo_andar2;
  }
  if (tempo_andar3 <= tempo_andar1 && tempo_andar3 <= tempo_andar2)
  {
    minutos_gastos = tempo_andar3;
  }
  printf("%d\n", minutos_gastos);
  return 0;
}
