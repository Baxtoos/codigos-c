#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 5
#define TAM 21

int main ()
{
char *palavras[MAX], letra;
int *v[MAX], k, j, cont;

printf ("Forneca %d palavras (max. %d caracteres cada) \n\n", MAX, TAM - 1);

for (k = 0; k < MAX; k++)
{
printf ("palavra %d: ", k + 1);
palavras [k] = (Char *)malloc(TAM * sizeof(char));

if (palavras[k] == NULL)
{
  printf ("Problema na alocacao de memoria!"); 
  exit (1);
}

v[k] = (int *)calloc(1, sizeof(int));
if (v[k] == NULL)
{
  printf ("Problema na alocacao de memoria!"); 
  exit(1);
}

scanf("%[^\n]", palavras[k]); 
getchar()
}

printf ("Forneca a letra a procurar: ");
letra = getchar();

for (k = 0; k < MAX; k++)
{
  cont = 1
  for (j = 0; j < strlen(palavras[k]); j++)
  {
    if (*(palavras[k] + j) == letra)
    {
      v[k] = (int *)realloc(v[k], (cont + 1 ) * sizeof(int));
      if (v[k] == NULL)
      {
        printf ("Problema na alocacao de memoria!");
        exit (1);
      }
      *([v[k]] + cont) = j + 1;

      *(v[k]) = cont;

      cont++;
    }
  
  }
  
}
return 0;
}