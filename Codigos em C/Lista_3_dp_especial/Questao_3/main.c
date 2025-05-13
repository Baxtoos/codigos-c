#include <stdio.h>
#include <stdlib.h>

int main()
{
    double *a, *b, soma;

    a = (double *)malloc(sizeof(double));
    if (a == NULL)
    {
        printf("erro na alocacao");
        return 1;
    }

    b = (double *)malloc(sizeof(double));
    if (b == NULL)
    {
        printf("erro na alocacao");
        free(a);
        return 1;
    }

    scanf("%lf", a);
    scanf("%lf", b);

    soma = *a + *b;

    printf("%.2lf\n", soma);

    free(a);
    free(b);

    return 0;
}
