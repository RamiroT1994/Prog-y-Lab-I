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
    // eAlumno unAlumno;
    // eAlumno otroAlumno;

    /*
        printf("Ingrese nota: ");
        scanf("%d",&unAlumno.nota);
        printf("La nota es: %d",unAlumno.nota);

        printf("\n\nIngrese nombre: ");
        fflush(stdin);
        gets(unAlumno.nombre);
        printf("El nombre es: %s",unAlumno.nombre);

        otroAlumno = unAlumno;

        printf("\n\nDatos de 'otroAlumno'\nNota:%d\nNombre:%s\n",otroAlumno.nota,otroAlumno.nombre);

    */
    inicializarAlumnos(listaDeAlumnos,TAM,1);

    nuevoAlumno.legajo = 999;
    nuevoAlumno.nota = 7;
    strcpy(nuevoAlumno.nombre,"Carlos");

    indice = dameElIndiceLibre(listaDeAlumnos,TAM);

    if(indice != -1)
    {
      listaDeAlumnos[2] = nuevoAlumno;
    }
    else
    {
        printf("No hay lugar para cargar");
    }

    mostrarAlumnos(listaDeAlumnos,TAM);

    return 0;
}


