#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, notas;
    int nota100, nota50, nota20, nota10, nota5, nota2, nota1;
    scanf ("%d", &n);

    notas = n;

    nota100 = notas / 100;
    notas %= 100;

    nota50 = notas / 50;
    notas %= 50;

    nota20 = notas / 20;
    notas %= 20;

    nota10 = notas / 10;
    notas %= 10;

    nota5 = notas / 5;
    notas %= 5;

    nota2 = notas / 2;
    notas %= 2;

    nota1 = notas / 1;
    notas %= 1;

    printf("%d\n", n);
    printf("%d nota(s) de R$ 100,00\n", nota100);
    printf("%d nota(s) de R$ 50,00\n", nota50);
    printf("%d nota(s) de R$ 20,00\n", nota20);
    printf("%d nota(s) de R$ 10,00\n", nota10);
    printf("%d nota(s) de R$ 5,00\n", nota5);
    printf("%d nota(s) de R$ 2,00\n", nota2);
    printf("%d nota(s) de R$ 1,00\n", nota1);
    return 0;
}
