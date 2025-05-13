#include <stdio.h>

int main()
{
  double peso_livros, peso_total = 0.0;
  int qtd_livros = 0;
  const double capacidade_mochila = 18.0;

  for (;;) // For infinito para só para a repetição com a condição do IF
  {
    scanf("%lf", &peso_livros);

    if (peso_total + peso_livros > capacidade_mochila)
    {
      break;
    }

    peso_total += peso_livros;
    qtd_livros++;
  }

  printf("%d\n", qtd_livros);

  return 0;
}
