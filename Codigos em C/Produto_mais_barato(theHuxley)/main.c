#include <stdio.h>
#include <stdlib.h>

int main()
{
    double valor1, valor2, valor3;
    scanf ("%lf%lf%lf", &valor1, &valor2, &valor3);

    if (valor1 <= valor2 && valor1 <= valor3){
        printf ("Primeiro produto\n");
    }
    else if (valor2 <= valor1 && valor2 <= valor3){
        printf ("Segundo produto\n");
    }
    else{
        printf ("Terceiro produto\n");
    }
    return 0;
}
