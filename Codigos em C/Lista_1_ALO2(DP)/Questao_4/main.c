#include <stdio.h>

int main() 
{
    int peso, soma = 0, livros = 0, parada = 0;

    while (soma < 18 && parada == 0) 
    {
        scanf("%d", &peso); 
        
        if (soma + peso <= 18)
        {
            soma += peso;
            livros++;
        }
        else 
        {
            parada = 1;
        }
    }

    printf("%d\n", livros);
    return 0;
}
