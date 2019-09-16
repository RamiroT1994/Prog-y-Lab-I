#include <stdio.h>
#include <string.h>
#include "Funciones.h"

void hardcodeAlumnos(eAlumno lista[],int tam)
{
    int i;

    int auxLeg[4] = {101,102,103,104};
    char auxName[4][20] = {"Maria","Ailin","Pedro","Jorge"};
    int auxNota[4] = {7,10,5,9};

    for(i=0;i<tam;i++)
    {
        lista[i].legajo = auxLeg[i];
        strcpy(lista[i].nombre,auxName[i]);
        lista[i].nota = auxNota[i];
        lista[i].estaVacio = 0;
    }

}



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

void buscarXlegajo(eAlumno lista[],int tam, int legajo)
{
    int i;

    for(i=0;i<tam;i++)
    {
        if(lista[i].estaVacio != 1)
        {
            if(lista[i].legajo == legajo)
            {
                mostrarUnAlumno(lista[i]);
            }
        }
    }

}
