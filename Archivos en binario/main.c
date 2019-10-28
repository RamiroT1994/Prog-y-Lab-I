#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int legajo;
    char nombre[30];
    float peso;

}eDato;


int main()
{
    FILE* pArchivo;

    eDato miDato = {100,"Pepe",75};

    pArchivo = fopen("miArchivo", "wb");

    if(pArchivo != NULL)
    {
        fwrite(&miDato,sizeof(eDato),1,pArchivo);
        fclose(pArchivo);
    }


    eDato midato2;

    pArchivo = fopen("miArchivo","rb");

    if(pArchivo != NULL)
    {
        fread(&midato2,sizeof(eDato),1,pArchivo);
        printf("%s - %d - %f", midato2.nombre,midato2.legajo,midato2.peso);

        fclose(pArchivo);
    }

    return 0;
}
