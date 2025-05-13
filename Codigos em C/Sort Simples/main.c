#include <stdio.h>

int main() {
    int a, b, c, original[3];
    scanf("%d%d%d", &a, &b, &c);

    original[0] = a;
    original[1] = b;
    original[2] = c;

    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    if (a > c)
    {
        int temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        int temp = b;
        b = c;
        c = temp;
    }

    printf("%d\n%d\n%d\n\n", a, b, c);
    printf("%d\n%d\n%d\n", original[0], original[1], original[2]);

    return 0;
}
