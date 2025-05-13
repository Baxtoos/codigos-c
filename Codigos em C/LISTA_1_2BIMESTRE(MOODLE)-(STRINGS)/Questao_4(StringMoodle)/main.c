#include <stdio.h>
#include <string.h>

#define MAX 100

int main()
{
  char frase[MAX];
  char maiorPalavra[MAX] = "";
  int tamanho_maiorPalavra = 0;

  fgets(frase, sizeof(frase), stdin);
  frase[strcspn(frase, "\n")] = '\0';

  while (strcmp(frase, "0") != 0)
  {
    int i = 0;
    int comprimento = 0;
    int primeiraPalavra = 1;

    for (i = 0; frase[i] != '\0'; i++)
    {
      if (frase[i] == ' ')
      {
        if (!primeiraPalavra)
        {
          printf("-");
        }
        printf("%d", comprimento);
        comprimento = 0;
        primeiraPalavra = 0;
      }
      else
      {
        comprimento++;
      }
    }

    if (!primeiraPalavra)
    {
      printf("-");
    }
    printf("%d\n", comprimento);

    char palavraAtual[MAX];
    int comprimentoAtual = 0;
    i = 0;

    for (i = 0; frase[i] != '\0'; i++)
    {
      if (frase[i] == ' ')
      {
        palavraAtual[comprimentoAtual] = '\0';
        if (comprimentoAtual >= tamanho_maiorPalavra)
        {
          strcpy(maiorPalavra, palavraAtual);
          tamanho_maiorPalavra = comprimentoAtual;
        }
        comprimentoAtual = 0;
      }
      else
      {
        palavraAtual[comprimentoAtual++] = frase[i];
      }
    }

    palavraAtual[comprimentoAtual] = '\0';

    if (comprimentoAtual >= tamanho_maiorPalavra)
    {
      strcpy(maiorPalavra, palavraAtual);
      tamanho_maiorPalavra = comprimentoAtual;
    }

    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0';
  }

  if (tamanho_maiorPalavra > 0)
  {
    printf("Maior palavra: %s\n", maiorPalavra);
  }

  return 0;
}
