#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    char id[2];
    unsigned char sizeBMP[4];
    char other[8];
    unsigned char sizeHeader[4];
    char width[4];
    char height[4];
} tipo_header;

int littleEndianToInt(unsigned char *byteNumber);

int main()
{
    FILE *arq;
    char *nomeArq = "D:\\estrela.bmp";
    tipo_header header;

    arq = fopen(nomeArq, "rb");
    if (arq == NULL){
        printf("Erro na abertura do arquivo %s!\n", nomeArq);
        exit(1);
    }

    if (fread(&header, sizeof(tipo_header), 1, arq) == 1){
        printf("id: %c%c\n", header.id[0], header.id[1]);
        printf("BMP size: %X %X %X %X\n", header.sizeBMP[0],
               header.sizeBMP[1], header.sizeBMP[2],
               header.sizeBMP[3]);
        printf("BMP size: %d bytes\n", littleEndianToInt(header.sizeBMP));
        printf("Width: %d pixels\n", littleEndianToInt(header.width));
        printf("Height: %d pixels\n", littleEndianToInt(header.height));
    }
    fclose(arq);

    return 0;
}

int littleEndianToInt(unsigned char *byteNumber){
    int aux, x, n;
    aux = 0;
    for (x = 0, n = 0; x < 4; x++, n += 8){
        aux = aux | byteNumber[x] << n;
    }
    return aux;
}
