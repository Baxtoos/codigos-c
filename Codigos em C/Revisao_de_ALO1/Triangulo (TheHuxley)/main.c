#include <stdio.h>

int main ()
{
    int A, B, C;
    scanf ("%d%d%d", &A, &B, &C);

    if (A + B > C && B + C > A && C + A > B)
    {
        if (A == B && B == C)
        {
            printf ("Equilatero\n");
        }
        else if (A == B || B == C || C == A)
        {
            printf ("Isosceles\n");
        }
        else
        {
            printf ("Escaleno\n");
        }
    }
    else
    {
        printf ("Nao eh triangulo");
    }
    return 0;
}