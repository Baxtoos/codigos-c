#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <direct.h>
#define MAX 100

int main ()
{
    char diretorio[MAX] = "D:\\teste";
    
    if (_chdir (diretorio) == 0)
    {
        system ("dir * .txt");
    }
    else 
    {
        printf ("Erro na alteracao do diretorio do trabalho: ");
        if (errno == ENOENT)
        {
            printf ("Caminho nao encontrado!\n\n");
        }
        else
        {
            printf ("Erro nao identificado!\n\n");
        }
    }
    return 0;
}