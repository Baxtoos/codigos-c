#include <stdio.h>

typedef struct
{
    int real;
    int imaginario;
} tipo_z;

int main()
{
    tipo_z z1, z2, resultado;

    scanf("%d %d", &z1.real, &z1.imaginario);
    scanf("%d %d", &z2.real, &z2.imaginario);

    resultado.real = z1.real + z2.real;
    resultado.imaginario = z1.imaginario + z2.imaginario;

    printf("soma = %d + %di\n", resultado.real, resultado.imaginario);

    return 0;
}
