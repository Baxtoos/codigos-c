#include <stdio.h>

int main () 
{
    int qtd, codigo;
    double unitario, total = 0;
    scanf ("%d%d", &qtd, &codigo);

    switch (codigo)
    {
        case 1 : unitario = 5.30; break;
        case 2 : unitario = 6.00; break;
        case 3 : unitario = 3.20; break;
        case 4 : unitario = 2.50; break; // ou defalt: unitario = 2.50; 
    }
    
    total = qtd * unitario;
    
    if (qtd >= 15 || total >= 40)
    {
        total = total * 0.85;
    }

    printf ("R$ %.2lf\n", total);
    return 0;
}