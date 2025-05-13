#include <stdio.h>
#include <string.h>

typedef struct 
{
    char prontuario[10];
    char aluno[51];
} tipo_dados;

int main() 
{
    tipo_dados alunos[101];
    tipo_dados aux;
    int N;
    int i, j;
    
    scanf("%d", &N);
    getchar();  // Limpa o buffer de entrada

    for (i = 0; i < N; i++) 
    {
        // Lê o prontuário
        scanf("%s", alunos[i].prontuario);
        getchar();  // Limpa o '\n' deixado pelo scanf

        // Lê o nome do aluno
        fgets(alunos[i].aluno, 51, stdin);
        alunos[i].aluno[strcspn(alunos[i].aluno, "\n")] = '\0';  // Remove o '\n' extra
    }

    // Ordena os alunos pelo nome
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

    // Exibe os alunos ordenados
    printf("Ordem Alfabetica:\n");
    for (i = 0; i < N; i++) 
    {
        printf("%s - %s\n", alunos[i].prontuario, alunos[i].aluno);
    }

    return 0;
}
