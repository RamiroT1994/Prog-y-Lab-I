#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Funciones.h"
#define TAM 5

int main()
{
    eAlumno listaDeAlumnos[5];
    eAlumno nuevoAlumno;
    int indice;

    inicializarAlumnos(listaDeAlumnos,TAM,1);
    hardcodeAlumnos(listaDeAlumnos,4);

    nuevoAlumno.legajo = 999;
    nuevoAlumno.nota = 7;
    strcpy(nuevoAlumno.nombre,"Carlos");

    indice = dameElIndiceLibre(listaDeAlumnos,TAM);

    if(indice != -1)
    {
      listaDeAlumnos[indice] = nuevoAlumno;
    }
    else
    {
        printf("No hay lugar para cargar");
    }

    printf("\n\n");
    mostrarAlumnos(listaDeAlumnos,TAM);

    printf("Buscar alumno 103");
    buscarXlegajo(listaDeAlumnos,TAM,103);

    return 0;
}


