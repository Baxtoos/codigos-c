#include <stdio.h>

int main ()
{
    FILE *arq;
    arq = fopen ("D:\\arquivo1.txt", "r");
    
    if (arq == NULL)
    {
        printf ("Ocorreu erro na abertura de arquivo1.txt!\n");
    }
    else 
    {
        printf ("arquivo1.txt foi aberto com sucesso!\n");
        fclose (arq);
    }
    return 0;
}