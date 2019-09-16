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

    for(i=0; i<tam;i++)
    {
        mostrarAlumnos(lista,tam);
    }

    if(flag == 0)
    {
        printf("No hay alumnos para mostrar");
    }

}

void mostrarUnAlumno(eAlumno alumno)
{
    if(alumno.estaVacio != 1)
    {
        printf("Legajo:%d Nombre:%s Nota:%d \n",alumno.legajo,alumno.nombre,alumno.nota);
    }


}

void mostrarAlumnos(eAlumno lista[],int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        mostrarUnAlumno(lista[i]);
    }
}


int dameElIndiceLibre(eAlumno lista[],int tam)
{
    int i;
    int retorno = -1;

    for(i=0;i<tam;i++)
    {
        if(lista[i].estaVacio == 1)
        {
            retorno = i;
            break;
        }
    }

    return retorno;

}
