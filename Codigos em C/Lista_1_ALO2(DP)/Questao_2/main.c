#include <stdio.h>

int main()
{
    int IG = 0, IA = 0, encap = 0, indent = 0, struc = 0;
    scanf ("%d%d%d%d%d", &IG, &IA, &encap, &indent, &struc);
    
    if ((IG == 0 && IA == 1) || (IA == 0 && IG == 1) || (IA == 1 && IG == 1))
    {
        if ((encap == 1 && indent == 1)) 
        {
            if (struc == 1)
            {
                printf ("AVALIADO");
            }
        }
    }   
    else 
    {
        printf ("0");
    }

    return 0;
}