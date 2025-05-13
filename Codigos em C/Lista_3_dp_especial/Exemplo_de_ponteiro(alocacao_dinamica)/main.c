#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct 
{
    char *prontuario;
    char *aluno;
} tipo_dados;

int main() 
{
    tipo_dados *alunos;
    tipo_dados aux;
    int N;
    int i, j;
    
    scanf("%d", &N);
    getchar();

    alunos = (tipo_dados*) malloc(N * sizeof(tipo_dados));

    for (i = 0; i < N; i++) 
    {
        alunos[i].aluno = (char*) malloc(51 * sizeof(char));
        alunos[i].prontuario = (char*) malloc(10 * sizeof(char));
        
        scanf("%s", alunos[i].prontuario);
        getchar();
        fgets(alunos[i].aluno, 51, stdin);
        alunos[i].aluno[strcspn(alunos[i].aluno, "\n")] = '\0';
    }

    for (i = 0; i < N - 1; i++) 
    {
        for (j = i + 1; j < N; j++) 
        {
            if (strcmp(alunos[i].aluno, alunos[j].aluno) > 0) 
            {
                aux = alunos[i];
                alunos[i] = alunos[j];
                alunos[j] = aux;
            }
        }
    }

    printf("Ordem Alfabetica:\n");
    for (i = 0; i < N; i++) 
    {
        printf("%s - %s\n", alunos[i].prontuario, alunos[i].aluno);
        
        free(alunos[i].aluno);
        free(alunos[i].prontuario);
    }

    free(alunos);

    return 0;
}
