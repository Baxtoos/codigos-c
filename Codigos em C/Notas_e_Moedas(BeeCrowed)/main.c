#include <stdio.h>

#define nota100 10000
#define nota50 5000
#define nota20 2000
#define nota10 1000
#define nota5 500
#define nota2 200
#define moeda1 100
#define moeda050 50
#define moeda025 25
#define moeda010 10
#define moeda005 5
#define moeda001 1

int main()
{
    double n;
    int n_centavos;
    scanf("%lf", &n);

    n_centavos = (int)(n * 100);

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100,00\n", n_centavos / nota100);
    n_centavos %= nota100;
    printf("%d nota(s) de R$ 50,00\n", n_centavos / nota50);
    n_centavos %= nota50;
    printf("%d nota(s) de R$ 20,00\n", n_centavos / nota20);
    n_centavos %= nota20;
    printf("%d nota(s) de R$ 10,00\n", n_centavos / nota10);
    n_centavos %= nota10;
    printf("%d nota(s) de R$ 5,00\n", n_centavos / nota5);
    n_centavos %= nota5;
    printf("%d nota(s) de R$ 2,00\n", n_centavos / nota2);
    n_centavos %= nota2;

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1,00\n", n_centavos / moeda1);
    n_centavos %= moeda1;
    printf("%d moeda(s) de R$ 0,50\n", n_centavos / moeda050);
    n_centavos %= moeda050;
    printf("%d moeda(s) de R$ 0,25\n", n_centavos / moeda025);
    n_centavos %= moeda025;
    printf("%d moeda(s) de R$ 0,10\n", n_centavos / moeda010);
    n_centavos %= moeda010;
    printf("%d moeda(s) de R$ 0,05\n", n_centavos / moeda005);
    n_centavos %= moeda005;
    printf("%d moeda(s) de R$ 0,01\n", n_centavos / moeda001);
    n_centavos %= moeda001;

    return 0;
}
