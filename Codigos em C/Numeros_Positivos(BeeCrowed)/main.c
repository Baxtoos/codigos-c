#include <stdio.h>

int main()
{
    double x;
    int i, cont;
    for (i = 0, cont = 0; i < 6; i++)
    {
        scanf("%lf", &x);
        if (x > 0)
            cont++;
    }
    printf(" %d valores positivos\n", cont);
    return 0;
}