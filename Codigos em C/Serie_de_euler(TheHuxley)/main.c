#include <stdio.h>

int fatorial (int N);
double euler(int N);

int main ()
{
    int N;
    
    scanf ("%d", &N);
    printf("%.15lf\n", euler(N));
    
    return 0;
}


int fatorial(int N) 
{
    if (N == 1 || N == 0)
    {
        return 1;        
    }
    else
    {
        return N * fatorial (N - 1);
    }
}

double euler (int N)
{
    if (N == 1)
    {
        return 1;
    }
    else 
    {
        return 1.0/fatorial(N - 1) + euler (N - 1);
    }

}