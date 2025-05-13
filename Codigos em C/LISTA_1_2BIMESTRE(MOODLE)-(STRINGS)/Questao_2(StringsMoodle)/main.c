#include <stdio.h>
#include <string.h>

int main()
{
  int nTestes, dia;
  float valor_gasto, total_quilos = 0, total_gastos = 0;

  scanf("%d", &nTestes);

  for (dia = 1; dia <= nTestes; dia++)
  {
    scanf("%f", &valor_gasto);
    total_gastos += valor_gasto;

    char frutas[100];
    int quilos_dia = 0;

    scanf(" %[^\n]", frutas);

    for (int j = 0; frutas[j] != '\0'; j++)
    {
      if (frutas[j] == ' ')
      {
        quilos_dia++;
      }
    }

    quilos_dia++;
    total_quilos += quilos_dia;

    printf("dia %d: %d kg\n", dia, quilos_dia);
  }

  printf("%.2f kg por dia\n", total_quilos / nTestes);
  printf("R$ %.2f por dia\n", total_gastos / nTestes);

  return 0;
}
