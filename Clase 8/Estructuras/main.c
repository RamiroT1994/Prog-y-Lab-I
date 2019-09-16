#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"
#define TAM 5

int main()
{
    eAlumno listaDeAlumnos[5];
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
    listarAlumnos(listaDeAlumnos,TAM);

    return 0;
}


