#include <stdio.h>

void Reduz (double *x, double *y);
int main ()
{
    double a, b;
    scanf ("%lf%lf", &a, &b);

    Reduz (&a, &b);

    printf ("%.2lf %.2lf\n", a, b);
    return 0;
}
void Reduz (double *x, double *y)
{
    *x = *x - (*y);
}