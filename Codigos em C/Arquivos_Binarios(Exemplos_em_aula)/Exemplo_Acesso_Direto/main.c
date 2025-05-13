#include <stdio.h>
#include <stdlib.h>

int main () 
{
    int vet [4] = {5, 10, 15, 20};
    int x, elem, qtd;
    FILE *arq;

    arq = fopen ("D:\\Exemplo_fseek1.dat", "w+b");
    if (arq == NULL) 
    {
        printf ("Erro na abertura do arquivo!\n");
        exit (1);

    } 

    fwrite (vet, sizeof (int), 4, arq);
    printf("Qual elemento quer incrementar? ");
    scanf("%d", &x);
    if (x >= 0 && x < 4) 
    {
        //posiciona o cursor no (x + 1)-esimo elemento
        fseek (arq, x * sizeof (int), SEEK_SET);
        fread (&elem, sizeof (int), 1, arq);
        elem = elem + 1;

        //Volta 1 posicao (reposiciona no (x + 1)-esimo)
        fseek (arq, -sizeof (int), SEEK_CUR);
        fwrite (&elem, sizeof (int), 1, arq);
    }

    fseek (arq, 0, SEEK_SET);
    qtd = fread (vet, sizeof(int), 4, arq);
    for (x = 0; x = qtd; x++)
    {
        printf ("%d ", vet[x]);
    }
    
    fclose (arq);
    return 0;
}