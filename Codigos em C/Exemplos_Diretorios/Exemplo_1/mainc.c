#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <direct.h>
#define MAX 100

void trata_erro(int erro, char *diretorio);

int main ()
{
    char diretorio[MAX] = "D:\\teste";
    char aux[MAX] = "dir ";

    if (_mkdir(diretorio) == 0)
    {
        printf ("Diretorio %s criado com sucesso!\n", diretorio);
        strcat (aux, diretorio);
        system(aux);

        if (_rmdir (diretorio) == 0)
        {
            printf ("Diretorio %s removido com sucesso!\n", diretorio);
        }
        else 
        {
            printf("Erro na exclusão do diretorio: ");
            trata_erro(errno, diretorio);
        }
    }
}