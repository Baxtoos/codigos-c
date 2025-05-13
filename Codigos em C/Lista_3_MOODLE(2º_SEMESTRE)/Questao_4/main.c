#include <stdio.h>

const char* AnalisarSituacao(double notaA, double notaB, double notaC, double notaD);

int main() 
{
    double notaA, notaB, notaC, notaD;
    scanf("%lf%lf%lf%lf", &notaA, &notaB, &notaC, &notaD);

    printf("%s\n", AnalisarSituacao(notaA, notaB, notaC, notaD));

    return 0;
}


const char* AnalisarSituacao(double notaA, double notaB, double notaC, double notaD) 
{
    double media_ponderada = (notaA * 1 + notaB * 2 + notaC * 3 + notaD * 4) / 10;

    if (media_ponderada >= 9)
    { 
        return "aprovado com louvor";
    }
    else if (media_ponderada >= 7)
    {
        return "aprovado";
    }    
    else if (media_ponderada < 3)
    {
        return "reprovado";
    }
    else
    { 
        return "prova final";  
    }
}
