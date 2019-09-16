#include <stdio.h>
#include "Funciones.h"


void inicializarAlumnos(eAlumno lista[],int tam,int estado)
{
    int i;

    for(i=0; i<tam; i++)
    {
        lista[i].estaVacio = estado;
    }

}
void listarAlumnos(eAlumno lista[],int tam)
{
    int i;
    int flag = 0;

    for(i=0; i<5; i++)
    {

        if(lista[i].estaVacio == 0)
        {
            flag = 1;
            printf("Nombre: %s Nota: %d\n",lista[i].nombre, lista[i].nota);
        }

    }

    if(flag == 0)
    {
        printf("Esta vacio");
    }

}
