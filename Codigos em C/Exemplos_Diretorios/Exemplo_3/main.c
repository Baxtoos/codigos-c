#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <direct.h>
#include <io.h>
#include <time.h>

int main ()
{
    struct _finddata_t auxArq;
    intptr_t p, x;
    char atributos[50];
    struct tm ts;
    char hora[80]; 

    _chdir ("C:\\");

    p = _findfirst ("*.*", &auxArq);
    x = p;

    while (x != -1)
    {
        ts = *localtime (&auxArq.time_create);
        strftime (hora, sizeof(hora), "%a %d/%m/%Y %H:%M", &ts);
        printf ("%s%3s", hora, " ");

        if (auxArq.attrib & _A_SUBDIR)
        {
            printf ("<DIR> %15s %s\n", " ", auxArq.name);
        }
        else
        {
            printf ("%5s %15lu %s ", " ", auxArq.size, auxArq.name);
            strcpy (atributos,"");

            if(auxArq.attrib & _A_NORMAL)
                strcat(atributos, " Normal ");
            if(auxArq.attrib & _A_RDONLY)
                strcat (atributos, " ReadOnly ");
            if(auxArq.attrib & _A_HIDDEN)
                strcat (atributos, " Oculto ");
            if(auxArq.attrib & _A_SYSTEM)
                strcat (atributos, " Sistema ");
            if(auxArq.attrib & _A_ARCH)
                strcat (atributos, " Arch ");

            printf("(%s) \n", atributos);
       }       
       x = _findnext (p, &auxArq);
    }
    _findclose(p)
    return 0;
}