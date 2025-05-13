#include <stdio.h>

int main()
{
    int n, l, i;
    int frustacao = 0, total_ouro = 0;

    scanf("%d %d", &n, &l);

    int horario_encontro[n], horario_chegada[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &horario_encontro[i]);
    }

    for (i = 0; i < n; i++)
    {
        scanf("%d", &horario_chegada[i]);
    }

    for (i = 0; i < n; i++)
    {
        int atraso = horario_chegada[i] - horario_encontro[i];

        if (atraso > 0)
        {
            frustacao += atraso;

            if (frustacao >= l)
            {
                total_ouro += (frustacao / l) * l;
                frustacao %= l;
            }
        }
    }

    total_ouro += frustacao;

    printf("%d\n", total_ouro);

    return 0;
}
