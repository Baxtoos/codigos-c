#include <stdio.h> 
#include <string.h>

#define MAX_CELULARES 10
#define MAX_MODELO 41

typedef struct 
{
    char modelo[MAX_MODELO];
    int memoria;
    double processador;
    double camera;
    double bateria;
} Celular;

int main() 
{
    Celular Celulares[MAX_CELULARES];
    int n = 0;
    char opcao = 's';

    while (n < MAX_CELULARES && opcao == 's')
   {
        scanf(" %c", &opcao);

        if (opcao == 's') 
        {
            scanf(" %[^\n]", Celulares[n].modelo);
            scanf("%d %lf %lf %lf", &Celulares[n].memoria, &Celulares[n].processador, &Celulares[n].camera, &Celulares[n].bateria);
            n++;
        }
    }

    int memoria_minima;
    double freq_minima, resolucao_minima, amperagem_minima;
    scanf("%d %lf %lf %lf", &memoria_minima, &freq_minima, &resolucao_minima, &amperagem_minima);

    int encontrados = 0;
    for (int i = 0; i < n; i++) 
    {
        if (Celulares[i].memoria >= memoria_minima &&
            Celulares[i].processador >= freq_minima &&
            Celulares[i].camera >= resolucao_minima &&
            Celulares[i].bateria >= amperagem_minima) 
            {
            
            if (encontrados > 0)
            {
                printf("\n");
            }
            
            printf("Modelo: %s\n", Celulares[i].modelo);
            printf("Memoria: %dGB\n", Celulares[i].memoria);
            printf("Processador: %.2fGhz\n", Celulares[i].processador);
            printf("Camera: %.2fMPixels\n", Celulares[i].camera);
            printf("Bateria: %.2fmA\n", Celulares[i].bateria);
            encontrados++;
        }
    }

    printf("\n%d smartphones encontrados.", encontrados);
    return 0;
}
