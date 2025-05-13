#include <stdio.h>
#define pesoA 2.0
#define pesoB 3.0
#define pesoC 5.0
#define soma_pesos 10.0

int main()
{
    double notaA, notaB, notaC, media;
    scanf ("%lf%lf%lf", &notaA, &notaB, &notaC);

    media = ((notaA * pesoA) + (notaB * pesoB) + (notaC * pesoC)) / soma_pesos;

    printf ("MEDIA = %.1lf\n", media);
    return 0;
}
