#include <stdio.h>
#include <string.h>

#define MAX 100001
#define MAX_ATALHOS 26

int main()
{
  int t, i, j, k, n, tamanho_resultado;
  char s[MAX];
  char resultado[MAX * 10];
  char atalho_caractere[MAX_ATALHOS];
  char atalho_substituicao[MAX_ATALHOS][11];

  scanf("%d", &t);

  for (i = 0; i < t; i++)
  {
    scanf("%s", s);
    scanf("%d", &n);

    for (j = 0; j < MAX_ATALHOS; j++)
    {
      atalho_caractere[j] = 0;
    }

    for (j = 0; j < n; j++)
    {
      char c;
      char substituicao[11];

      scanf(" %c %s", &c, substituicao);

      atalho_caractere[c - 'A'] = c;
      strcpy(atalho_substituicao[c - 'A'], substituicao);
    }

    tamanho_resultado = 0;

    for (j = 0; s[j] != '\0'; j++)
    {
      if (s[j] == '*')
      {
        int encontrou_atalho = 0;

        for (k = 0; k < MAX_ATALHOS && !encontrou_atalho; k++)
        {
          if (atalho_caractere[k] && s[j + 1] == atalho_caractere[k])
          {
            int l = 0;
            while (atalho_substituicao[k][l] != '\0')
            {
              resultado[tamanho_resultado++] = atalho_substituicao[k][l++];
            }
            j++;
            encontrou_atalho = 1;
          }
        }

        if (!encontrou_atalho)
        {
          resultado[tamanho_resultado++] = s[j];
        }
      }
      else
      {
        resultado[tamanho_resultado++] = s[j];
      }
    }

    resultado[tamanho_resultado] = '\0';
    printf("%s\n", resultado);
  }

  return 0;
}
