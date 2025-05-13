#include <stdio.h>
#include <math.h>
#define pi 3.14159

int main()
{
    double raio, area;
    scanf ("%lf", &raio);

    area = pow (raio,2) * pi;

    printf ("A=%.4lf\n", area);
    return 0;
}
