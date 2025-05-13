#include <stdio.h>

int main ()
{
    int n = 0, idades, soma = 0;
    double media;

    do
    {
        scanf("%d", &idades);
        
        if (idades >= 0) 
        {
            soma += idades;
            n++;
        }
        
    } while (idades >= 0);

    if (n > 0)
    {
        media = (double) soma / n;
        printf("%.2lf\n", media);
    }
    else
    {
    }
    
    return 0; 
}
