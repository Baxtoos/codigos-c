#include <stdio.h>

int main()
{
  int dias, km_total, km_inclusos;
  double custo_diarias, custo_km_extra, custo_total;

  scanf("%d", &dias);
  scanf("%d", &km_total);

  custo_diarias = dias * 90;
  km_inclusos = dias * 100;
  custo_total = custo_diarias + custo_km_extra;

  if (km_total > km_inclusos)
  {
    custo_km_extra = (km_total - km_inclusos) * 12;
  }
  else
  {
    custo_km_extra = 0;
  }

  printf("%.2f\n", custo_total);
  return 0;
}
