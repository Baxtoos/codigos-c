#include <stdio.h>
#include <stdlib.h>
#define dia 24

int main()
{
    int inicio_jogo, final_jogo, duracao;
    scanf ("%d%d",&inicio_jogo, &final_jogo);

    if (inicio_jogo < final_jogo)
    {
       duracao = final_jogo - inicio_jogo;
    }
    else
    {
        duracao = dia - inicio_jogo + final_jogo;
    }
    printf ("O JOGO DUROU %d HORA(S)\n", duracao);
    return 0;
}
