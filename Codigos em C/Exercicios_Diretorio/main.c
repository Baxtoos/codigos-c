#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <direct.h>
#include <io.h>

#define MAX 1000

struct info 
{
    char nome[256];
    unsigned long tamanho;
};

int comparacao(const void *a, const void *b) 
{
    struct info *fileA = (struct info *)a;
    struct info *fileB = (struct info *)b;
    return (fileA->tamanho - fileB->tamanho);
}

void diretorio(const char *caminho) 
{
    struct _finddata_t info;
    intptr_t X;
    struct info arq[MAX];
    int cont = 0;

    if (_chdir(caminho) != 0) 
    {
        perror("Erro ao mudar de diretório");
        return;
    }

    X = _findfirst("*.*", &info);
    if (X == -1) 
    {
        perror("Erro ao encontrar arquivos");
        return;
    }
    do 
    {
        if (info.attrib & _A_SUBDIR) 
        {
            strcpy(arq[cont].nome, info.nome);
            arq[cont].tamanho = 0;
            cont++;
        } 
        else 
        {
          
            strcpy(arq[cont].nome, info.nome);
            arq[cont].tamanho = info.tamanho;
            cont++;
        }
    } 
    while (_findnext(X, &info) == 0 && cont < MAX);

    _findclose(X);

    qsort(arq, cont, tamanhoof(struct info), comparacao);

    printf("Conteúdo do diretório '%s':\n", caminho);
    for (int i = 0; i < cont; i++) 
    {
        printf("%-20s %10lu bytes\n", arq[i].nome, arq[i].tamanho);
    }
}

int main() 
{
    char caminho[256];

    printf("Digite o caminho do diretório: ");
    fgets(caminho, tamanhoof(caminho), stdin);
    caminho[strcspn(caminho, "\n")] = 0; 

    diretorio(caminho);

    return 0;
}