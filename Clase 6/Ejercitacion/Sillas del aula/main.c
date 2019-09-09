#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define TAM 5

/*
-Asignar a cada silla del aula (array de enteros) el legajo del alumno que esta ahi (array de enteros)
-55,11,22,33,44
-inicializar sillas, 1 por persona, si se va la persona la silla quede libre
-cantidad de sillas ocupdas, cantidad de libres, primer silla libre
*/

int main()
{
    int ArrayEdades[TAM];
    int ArrayDeSillas[TAM];
    int maximo,minimo,auxInt;

    inicializarSillas(ArrayDeSillas,TAM);

    printf("Sillas inicializadas: ");
    mostrarSillas(ArrayDeSillas,TAM);
    printf("\n\n");

    hardcodearArray(ArrayDeSillas,ArrayEdades,TAM);
    printf("Sillas ocupadas: ");
    mostrarSillas(ArrayDeSillas,TAM);

    maximo = dameElMaximo(ArrayDeSillas,TAM);
    printf("\n\nEl maximo es: %d",maximo);

    minimo = dameElMinimo(ArrayDeSillas,TAM);
    printf("\nEl minimo es: %d",minimo);

    if(OcuparSilla(ArrayDeSillas,ArrayEdades,TAM,3,150,23)== -1)
    {
        printf("\nNo se puede cargar");
    }
    else
    {
        printf("\nListo");
    }

    contadorDeSillas(ArrayDeSillas,TAM,0);

    auxInt = buscarLibre(ArrayDeSillas,TAM,0);

    if(auxInt != -1)
    {
        printf("\n\nHay una silla disponible en la posicion %d",auxInt);
    }
    else
    {
        printf("\n\nTe quedaste sin sillas, brother. A tu casa.\n\n");
    }

    mostrarLegajoyEdad(ArrayDeSillas,ArrayEdades,TAM);

    printf("\n\n");

    mostrarEdadMaxima(ArrayDeSillas,ArrayEdades,TAM);


    return 0;
}



