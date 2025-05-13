#include <stdio.h>

int main()
{
  int codigo, quantidade, codigo_maximo = 0, quantidade_maxima = 0;
  double preco_unitario, custo, custo_maximo = 0.0;

  scanf("%d", &codigo);

  while (codigo != 0)
  {
    scanf("%d %lf", &quantidade, &preco_unitario);

    custo = quantidade * preco_unitario;

    if (custo > custo_maximo)
    {
      custo_maximo = custo;
      codigo_maximo = codigo;
      quantidade_maxima = quantidade;
    }

    scanf("%d", &codigo);
  }

  if (codigo_maximo == 0)
  {
    printf("nao tem compras\n");
  }
  else
  {
    printf("Item mais caro\n");
    printf("Codigo: %d\n", codigo_maximo);
    printf("Quantidade: %d\n", quantidade_maxima);
    printf("Custo: %.2f\n", custo_maximo);
  }

  return 0;
}
