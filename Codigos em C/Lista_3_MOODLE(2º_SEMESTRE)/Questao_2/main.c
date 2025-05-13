#include <stdio.h>
#include <math.h>

double distanciaHogsmeade(int X, int Z);
double distanciaKakariko(int X, int Z);
double distanciaSolitude(int X, int Z);

int main() 
{
    int X, Z;
    double calc_hogsmeade, calc_kakariko, calc_solitude;

    scanf("%d %d", &X, &Z);

    calc_hogsmeade = distanciaHogsmeade(X, Z);
    calc_kakariko = distanciaKakariko(X, Z);
    calc_solitude = distanciaSolitude(X, Z);

    printf("Distancia para Hogsmeade: %.2f\n", calc_hogsmeade);
    printf("Distancia para Kakariko: %.2f\n", calc_kakariko);
    printf("Distancia para Solitude: %.2f\n", calc_solitude);

    return 0;
}


double distanciaHogsmeade(int X, int Z) 
{
    double calc_hogsmeade;
    int xHogsmeade = 34, zHogsmeade = 220;
    calc_hogsmeade = sqrt(pow(X - xHogsmeade, 2) + pow(Z - zHogsmeade, 2));
    return calc_hogsmeade;
}


double distanciaKakariko(int X, int Z) 
{
    double calc_kakariko;
    int xKakariko = 0, zKakariko = 0;
    calc_kakariko = sqrt(pow(X - xKakariko, 2) + pow(Z - zKakariko, 2));
    return calc_kakariko;
}


double distanciaSolitude(int X, int Z) 
{
    double calc_solitude;
    int xSolitude = 140, zSolitude = 456;
    calc_solitude = sqrt(pow(X - xSolitude, 2) + pow(Z - zSolitude, 2));
    return calc_solitude;
}