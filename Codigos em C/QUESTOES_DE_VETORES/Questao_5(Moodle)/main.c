#include <stdio.h>

int main()
{
    int n, i;
    char op;

    scanf("%d", &n);

    double v1[n], v2[n], resultado[n];

    for (i = 0; i < n; i++)
    {
        scanf("%lf", &v1[i]);
    }

    for (i = 0; i < n; i++)
    {
        scanf("%lf", &v2[i]);
    }

    scanf(" %c", &op);

    if (op == '<')
    {
        for (i = 0; i < n; i++)
        {
            resultado[i] = (v1[i] - 10) + v2[i];
        }
    }
    else if (op == '>')
    {
        for (i = 0; i < n; i++)
        {
            resultado[i] = (v1[i] + 10) - v2[i];
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%.2lf ", resultado[i]);
    }
    printf("\n");

    return 0;
}
