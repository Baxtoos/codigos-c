#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf ("%d", &n);

    if ((n % 4 == 0) && (n % 7 == 0) && (n % 5 != 0)){
        printf ("sim\n");
    }
    else{
        printf ("nao\n");
        }
    return 0;
}
