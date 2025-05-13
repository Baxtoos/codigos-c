#include <stdio.h>
#include <stdlib.h>

int main() {

    double n1, n2, n3, media;
    int cont;
    scanf("%lf%lf%lf", &n1, &n2, &n3);

    media = (n1 + n2 + n3) / 3;
    cont = 0;

    if (n1 > media) {
        cont++;
    }
    if (n2 > media) {
        cont++;
    }
    if (n3 > media) {
        cont++;
    }
    printf("%d\n", cont);

    return 0;
}
