#include <stdio.h>

int func(int x);

int main() 
{
    int x;

    while (scanf("%d", &x) == 1) 
    {
        printf("%d\n", func(x));
    }

    return 0;
}

int func(int x) 
{
    if (x == 0) 
    {
        return 10;
    } 
    else if (x == 1) 
    {
        return 11;
    } 
    else if (x == 2) 
    {
        return 27;
    } 
    else 
    {
        return func(x - 2) - func(x - 3);
    }
}

