#include <stdio.h>

int main ()
{
    int codigo, qtd, cod_maior, qtd_maior, tem = 0;
    double preco, custo, maior = 0;
    
    do
    {
    scanf ("%d%d%lf", &codigo, &qtd, &preco);

        if (codigo != 0)
        {
            tem = 1;
            custo = qtd * preco;

            if (custo > maior)
            {
            maior = custo;
            cod_maior = codigo;
            qtd_maior = qtd;
            }
        }

    } while (codigo != 0);

    if (tem == 1)
    { 
        printf ("Item mais caro\nCodigo: %d\nQuantidade: %d\nCusto: %.2lf\n", cod_maior, qtd_maior, maior);

    }
    else 
    {
        printf ("nao tem compras\n");
    }
    
    return 0;
}