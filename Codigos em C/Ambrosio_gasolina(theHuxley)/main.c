#include <stdio.h>
#include <stdlib.h>

int main()
{
    int D, R, L, P, G, distancia_tanque, distancia_total, custo, combustivel_necessario, custo_combustivel, resto;
    scanf("%d%d%d%d%d", &D, &R, &L, &P, &G);

    distancia_tanque = L * 10;
    distancia_total = D;
    custo = P * G;

    if (distancia_total <= distancia_tanque)
    {
        printf("Pode viajar.\n");
        resto = R;
        printf("R$: %d\n", resto);
    }
    else
    {
        combustivel_necessario = (distancia_total - distancia_tanque + 9) / 10;
        custo_combustivel = combustivel_necessario * G;
        resto = R - custo_combustivel;

        if (resto >= 0)
        {
            printf("Pode viajar.\n");
            printf("R$: %d\n", resto);
        }
        else
        {
            printf("Nao pode viajar.\n");
        }
    }
    return 0;
}
