#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, delta, x1, x2;
    scanf ("%lf%lf%lf", &a, &b ,&c);

    if (a == 0){
        printf ("NEESG\n");
    }
    else {
         delta = b * b - 4 * a * c;

    if (delta < 0){
        printf ("NRR\n");
    }
    else{
        x1 = (-b + sqrt (delta)) / (2 * a);
        x2 = (-b - sqrt (delta)) / (2 * a);

        printf ("%.2lf\n%.2lf\n", x1, x2);
    }
    }
    return 0;
}
