#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main ()
{
    char str1[51], str2[51], str3[101];// tenho que intercalar letras maiusculas e minusculas, preciso usar a tabela ASC 
    int N, nmrLetras, i, j, k; //qtd = numero de pares e N = lê os pares e nmrLetras conta o numero de letras
                              // concatenar palavras do MESMO tamanho = retirar os espaços. Vou precisar de 2 strings
    scanf("%d", &N); 

    for(i = 0; i < N; i++)
    {
        //leitura das strings
        scanf(" %s", str1);
        scanf(" %s", str2);
        //saber quantos caracteres a string tem, pra fazer a alternância
        nmrLetras = strlen(str1);

        //alternância de caracteres 
        for(j = 0, k = 0; j < nmrLetras; j++, k += 2)
        {

            str3[k] = toupper(str1[j]);
            str3[k + 1] = tolower(str2[j]);

        }
        //caracter nulo
        str3[k] = '\0';
        //printzinho
        printf("%s\n", str3);
    }

    return 0;
}