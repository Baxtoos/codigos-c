#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100

int main()
{
    char campo1[MAX], campo2[MAX], campo3[MAX], campo4[MAX];
    char valores1[MAX], valores2[MAX], valores3[MAX], valores4[MAX];
    double media = 0;

    scanf(" %s", campo1);
    scanf(" %s", valores1);
    scanf(" %s", campo2);
    scanf(" %s", valores2);
    scanf(" %s", campo3);
    scanf(" %s", valores3);
    scanf(" %s", campo4);
    scanf(" %s", valores4);

    strcat(campo1, " ");
    strcat(campo1, valores1);
    strcat(campo2, " ");
    strcat(campo2, valores2);
    strcat(campo3, " ");
    strcat(campo3, valores3);
    strcat(campo4, " ");
    strcat(campo4, valores4);

    if (campo1[0] == 'a')
        media += ((double)campo1[4] - 48) + ((double)campo1[6] - 48) / 10;
    if (campo2[0] == 'a')
        media += ((double)campo2[4] - 48) + ((double)campo2[6] - 48) / 10;
    if (campo3[0] == 'a')
        media += ((double)campo3[4] - 48) + ((double)campo3[6] - 48) / 10;
    if (campo4[0] == 'a')
        media += ((double)campo4[4] - 48) + ((double)campo4[6] - 48) / 10;
    media = media / 2;

    printf("%.2lf", media);

    return 0;
}