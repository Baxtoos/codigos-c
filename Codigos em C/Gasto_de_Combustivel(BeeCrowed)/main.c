#include <stdio.h>
#include <stdlib.h>
#define consumo 12.0

int main()
{
    int horas_gastas, velocidade_media;
    double litros_necessarios;
    scanf ("%d%d", &horas_gastas, &velocidade_media);

    litros_necessarios =  horas_gastas * velocidade_media / consumo;

    printf ("%.3lf\n", litros_necessarios);
    return 0;
}
