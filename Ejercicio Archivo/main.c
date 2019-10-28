#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    -SETERS Y GETERS.

*/

typedef struct
{
    int legajo;
    char nombre[20];
    char apellido[20];
    float sueldo;

}eEmpleado;

eEmpleado* new_empleado();

int main()
{
    eEmpleado* lista[50];
    eEmpleado* unEmpleado;
    FILE* pArchivo;
    int i = 0;

    char legajo[20];
    char nombre[20];
    char apellido[20];
    char sueldo[10];

    pArchivo = fopen("Datos.csv","r");

    if(pArchivo != NULL)
    {
        fscanf(pArchivo,"%[^,],%[^,],%[^,],%[^\n]\n",legajo,nombre,apellido,sueldo);

        while(!feof(pArchivo))
        {
            fscanf(pArchivo,"%[^,],%[^,],%[^,],%[^\n]\n",legajo,nombre,apellido,sueldo);

            unEmpleado = new_empleado();

            unEmpleado->legajo = atoi(legajo);
            strcpy(unEmpleado->nombre,nombre);
            strcpy(unEmpleado->apellido,apellido);
            unEmpleado->sueldo = atof(sueldo);

            lista[i] = unEmpleado;
            i++;

        }
        fclose(pArchivo);
        for(i=0;i<50;i++)
        {
            printf("%d -- %s -- %s -- %f\n",lista[i]->legajo,lista[i]->nombre,lista[i]->apellido,lista[i]->sueldo);
        }

    }

    return 0;
}

eEmpleado* new_empleado()
{
    eEmpleado* puntero;

    puntero = (eEmpleado*)malloc(sizeof(eEmpleado));

    return puntero;
}
