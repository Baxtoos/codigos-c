#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, posicao, i;
    char caractere;
    char *mensagem;

    scanf("%d", &N);

    mensagem = malloc((N + 1) * sizeof(char));

    for (i = 0; i < N; i++)
    {
        scanf("%d %c", &posicao, &caractere);
        mensagem[posicao - 1] = caractere;
    }

    mensagem[N] = '\0';
    printf("%s\n", mensagem);

    free(mensagem);
    return 0;
}
