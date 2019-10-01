#include <stdio.h>
#include <string.h>
#include "Localidades.h"
#include "Alumno.h"


int mostrarAlumnosConLocalidad(eAlumno listaAlumnos[],int tamA,eLocalidad listaLocalidad[],int tamL)
{
    int i,j;

    for(i=0;i<tamA;i++)
    {
        mostrarUnAlumnoConLocalidad(listaAlumnos[i],listaLocalidad[j]);
    }
}

int mostrarUnAlumnoConLocalidad(eAlumno miAlumno,eLocalidad miLocalidad)
{
    if( miAlumno.estado == OCUPADO )
    {
        printf("%5d %10s %5.2f", miAlumno.legajo,miAlumno.nombre,miAlumno.promedio );

        if(miAlumno.idLocalidad == miLocalidad.idLocalidad)
        {
            printf("%10s\n",miLocalidad.localidad);
        }
    }
}
