#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int n;
    scanf ("%lld", &n);

    if ( n > 0){
    printf ("POSITIVO");
    }
    else if ( n < 0){
        printf ("NEGATIVO");
    }
    else{
        printf("NULO\n");
    }
    if ((n % 2 == 0) && (n != 0)){
        printf (" PAR\n");
    }
    else if ((n % 2 != 0) && (n != 0)){
        printf (" IMPAR\n");
    }
    else{
    }
    return 0;
}
