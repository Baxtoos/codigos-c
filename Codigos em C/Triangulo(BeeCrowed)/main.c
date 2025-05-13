#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b, c, perimetro, area;
    scanf ("%lf%lf%lf", &a, &b, &c);

    if (a + b > c && b + c > a && c + a > b)
    {
        perimetro = a + b + c;
        printf ("Perimetro = %.1lf\n", perimetro);
    }
    else
    {
        area = ((a + b) * c) / 2;
        printf ("Area = %.1lf\n", area);
    }
    return 0;
}
