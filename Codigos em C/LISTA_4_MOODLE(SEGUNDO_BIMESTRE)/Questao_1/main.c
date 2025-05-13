#include <stdio.h>

int valor_absoluto(int n);
int mod(int x, int y);

int main()
{
    int x, y, resultado;

    scanf("%d%d", &x, &y);

    resultado = mod(x, y);
    printf("%d\n", resultado);

    return 0;
}


int valor_absoluto(int n) 
{
    if (n < 0) 
    {
        return -n;
    }
    return n;
}


int mod(int x, int y) 
{
    if (y == 0) 
    {
        return -1;
    }

    int x_abs = valor_absoluto(x);
    int y_abs = valor_absoluto(y);

    if (x_abs >= y_abs) 
    {
        return mod(x_abs - y_abs, y_abs);
    }
    else 
    {
        return x_abs;
    }
}