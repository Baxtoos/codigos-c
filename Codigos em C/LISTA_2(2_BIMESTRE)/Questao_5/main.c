#include <stdio.h>
#include <string.h>
#define MAX 50

typedef struct
{
  char nome[50];
  double unidade;
  int qtd;
} Produto;

int main()
{
  Produto produtos[MAX];
  int N, i, j;
  int posicao = 0;
  double total = 0.0, troco = 0.0, dinheiroP = 0.0;
  char dinheiroString[MAX], descarte[MAX], string1[MAX], string2[MAX], data[MAX];

  scanf("%d", &N);

  for (i = 0; i < N; i++)
  {
    scanf("%s %lf %d", produtos[i].nome, &produtos[i].unidade, &produtos[i].qtd);
    total += produtos[i].unidade * produtos[i].qtd;
  }

  scanf("%s", descarte);
  getchar();
  fgets(string1, sizeof(string1), stdin);
  fgets(string2, sizeof(string2), stdin);

  for (i = 6, posicao = 0; string2[i] != '\0'; i++, posicao++)
  {
    dinheiroString[posicao] = string2[i];
  }
  dinheiroString[posicao] = '\0';
  sscanf(dinheiroString, "%lf", &dinheiroP);

  for (i = 0; i < N - 1; i++)
  {
    for (j = 0; j < N - i - 1; j++)
    {
      if (strcmp(produtos[j].nome, produtos[j + 1].nome) > 0)
      {
        Produto aux = produtos[j];
        produtos[j] = produtos[j + 1];
        produtos[j + 1] = aux;
      }
    }
  }

  printf("=============\n");
  printf("NF - 0123\n");

  sscanf(string1 + 22, "%10s", data);
  printf("Data - %s\n", data);

  printf("=============\n");

  for (i = 0; i < N; i++)
  {
    printf("%dx %s - R$%.2lf\n", produtos[i].qtd, produtos[i].nome, produtos[i].unidade * produtos[i].qtd);
  }

  troco = dinheiroP - total;
  printf("\nValor Total - R$%.2lf\n", total);
  printf("Pago - R$%g\n", dinheiroP);
  printf("Troco - R$%.2lf\n", troco);
  printf("=============\n");

  return 0;
}