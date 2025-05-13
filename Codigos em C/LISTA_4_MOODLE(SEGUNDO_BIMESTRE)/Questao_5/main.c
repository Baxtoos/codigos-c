#include <stdio.h>
#include <math.h>

int contar_digitos(int N);
int calcular_armstrong(int N, int digitos);

int main() 
{
    int N, digitos, soma;
    
    scanf("%d", &N);
    
    digitos = contar_digitos(N);
    soma = calcular_armstrong(N, digitos);
    
    if (soma == N) 
    {
        printf("Armstrong\n");
    } 
    else 
    {
        printf("soma: %d\n", soma);
    }
    
    return 0;
}

int contar_digitos(int N) 
{
    int digitos = 0;
    
    while (N != 0) 
    {
        N /= 10;
        digitos++;
    }
    
    return digitos;
}

int calcular_armstrong(int N, int digitos) 
{
    int aux = N, soma = 0;
    int memoria;
    
    while (aux != 0) 
    {
        memoria = aux % 10;
        soma += pow(memoria, digitos);
        aux /= 10;
    }
    
    return soma;
}

