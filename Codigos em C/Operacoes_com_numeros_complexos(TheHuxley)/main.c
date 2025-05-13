#include <stdio.h>

typedef struct
{
    double a, b;
}tipo_complexo;

tipo_complexo SomaComplexos (tipo_complexo z1, tipo_complexo z2);
tipo_complexo MultiplicacaoComplexos (tipo_complexo z1, tipo_complexo z2);
void Imprimir(tipo_complexo z);


int main ()
{
    tipo_complexo z1, z2, z3, z4; 
    
    scanf ("%lf%lf",  &z1.a, &z1.b);
    scanf ("%lf%lf", &z2.a, &z2.b);

    z3 = SomaComplexos(z1, z2);
    printf ("Soma: ");
    Imprimir (z3);

    printf ("\n");

    z3 = MultiplicacaoComplexos(z1, z2);
    printf ("Multi: ");
    Imprimir (z3);

    return 0;
}

tipo_complexo SomaComplexos (tipo_complexo z1, tipo_complexo z2)
{
    tipo_complexo z;

    z.a = (z1.a + z2.a);
    z.b = (z1.b + z2.b);

    return z;
}

tipo_complexo MultiplicacaoComplexos (tipo_complexo z1, tipo_complexo z2)
{
tipo_complexo z;

z.a = (z1.a * z2.a) - (z1.b * z2.b);
z.b = (z1.a * z2.b) + (z2.a * z1.b);

return z;
}

void Imprimir (tipo_complexo z)
{
    printf ("%.0lf+%0.lfi", z.a, z.b);
}
