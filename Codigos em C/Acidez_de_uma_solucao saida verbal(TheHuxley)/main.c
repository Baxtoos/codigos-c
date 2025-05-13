#include <stdio.h>
int main()
{
  double ph;
  scanf("%lf", &ph);

  if (ph == 7)
  {
    printf("Digite o pH da solucao:\nSolucao neutra");
  }
  if (ph < 7 && ph > 0)
  {
    printf("Digite o pH da solucao:\nSolucao acida");
  }
  if (ph > 7 && ph < 14)
  {
    printf("Digite o pH da solucao:\nSolucao basica");
  }
  if (ph < 0 || ph > 14)
  {
    printf("Digite o pH da solucao:\nValor do pH deve estar entre 0 e 14");
  }
  return 0;
}
