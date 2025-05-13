#include <stdio.h>

int primo(int n);
int fatorial (int n);

int main ()
{
    int opcao, n, aux;
    scanf("%d", &opcao);
    
    if (opcao == 3)
    {
        printf ("programa finalizado\n");
    }
    else 
    {
        if (opcao == 1)
        {
            scanf ("%d", &n);
            printf ("%d! = %d\n", n, fatorial(n));
        }
        else if (opcao == 2)
        {
            scanf("%d", &n);
            aux = primo(n);
            if (aux == 1) 
            {
                printf ("%d - primo\n", n);
            }
            else
            {
                printf ("%d - nao primo\n", n);
            }
        }
    }

    return 0;
}

int primo(int n) 
{
    int i;
    if (n <= 1) return 0;
    for (i = 2; i < n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int fatorial(int n)
{
    int x, fat = 1;
    for (x = n; x > 1; x--)
    {
        fat *= x;
    }
    return fat;
}