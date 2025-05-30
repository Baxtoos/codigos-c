#include <stdio.h>
#include <math.h>
#define pi 3.14159

int main()
{
    double A, B, C, area_triangulo, area_circulo, area_trapezio, area_quadrado, area_retangulo;
    scanf ("%lf%lf%lf", &A, &B, &C);

    area_triangulo = (A * C) / 2;
    area_circulo = pow (C,2) * pi;
    area_trapezio = ((A + B) * C) / 2;
    area_quadrado = pow (B,2);
    area_retangulo = B * A;

    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", area_triangulo, area_circulo, area_trapezio, area_quadrado, area_retangulo);
    return 0;
}
