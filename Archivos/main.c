#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* pArchivo;

/*    pArchivo = fopen("miArchivo.txt", "w");
    char miNombre[] = "Ramiro";

    if(pArchivo != NULL)
    {
        fprintf(pArchivo, "Mi nombre es %s\nEl dia esta nublado",miNombre);
        fclose(pArchivo);
    }
*/
//EJEMPLO PARA LECTURA

    pArchivo = fopen("miArchivo.txt","r");
    char miNombre[50];

    if(pArchivo != NULL)
    {
        while(!feof(pArchivo))
        {
            fgets(miNombre, 49, pArchivo);
            printf("%s",miNombre);
        }

        fclose(pArchivo);
    }
    return 0;
}
