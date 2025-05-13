#include <stdio.h>

typedef struct
{
  char item[50];
  double preco;
  int qtd_disponivel;
} tipo_mercado;

typedef struct
{
  char produtos_carrinho[50];
} tipo_compras;

int main()
{
  tipo_mercado vetorM[50];
  tipo_compras vetorC[50];

  double valor_total;
  int total_mercado, x;

  scanf("%d", &total_mercado);

  for (x = 0; x < total_mercado; x++)
  {
    scanf("%s", &vetorM.item)
  }

  return 0;
}
