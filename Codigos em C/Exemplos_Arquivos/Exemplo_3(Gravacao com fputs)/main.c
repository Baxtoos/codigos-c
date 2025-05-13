//grava até o caracter nulo
#include <stdio.h>

#define MAX 100

int main ()
{
    FILE *arq;
    char nome[MAX];
    
    arq = fopen ("D:\\Exemplo-fputs.txt", "a");

    if (arq == NULL)
    {
        printf ("Erro na abertura de caracter.txt!\n");
    }
    else 
    {
        fputs ("Exemplo de fputs-", arq);

        printf ("Fornece seu nome: ");
        fgets(nome, MAX, stdin);
        fprintf (arq, "Teste realizado por: %s", nome);
        
        fclose (arq);
    }
             
    return 0;
}