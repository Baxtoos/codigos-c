#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);

    if ((x + y > z) && (y + z > x) && (z + x > y))
    {
        if (x == y && y == z && z == x)
        {
            printf("Equilatero\n");
        }
        else if (x == y || y == z || z == x)
        {
            printf("Isosceles\n");
        }
        else if (x != y && y != z && z != x)
        {
            printf("Escaleno\n");
        }
    }
    else
    {
        printf("Nao eh triangulo\n");
    }
    return 0;
}
