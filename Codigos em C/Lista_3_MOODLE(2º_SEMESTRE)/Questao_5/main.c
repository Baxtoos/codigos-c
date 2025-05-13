#include <stdio.h>

double calcularMedia(int sequencia[], int n);

int main() 
{
    int n;
    double media;

    scanf("%d", &n);

    int sequencia[n];
    
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &sequencia[i]);
    }

    media = calcularMedia(sequencia, n);
    printf("%.2f\n", media);

    return 0;
}


double calcularMedia(int sequencia[], int n) 
{
    int soma = 0;

    for (int i = 0; i < n; i++) 
    {
        soma += sequencia[i];
    }

    return (double)soma / n;
}
