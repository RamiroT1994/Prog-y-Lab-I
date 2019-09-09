#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

void hardcodearArray(int array[], int arrayDos[],int tam)
{
    int i;
    int auxArray[5]={55,11,22,33,44};
    int auxArrayEdades[5]={98,19,81,91,98};

    for(i=0;i<tam;i++)
    {
        array[i] = auxArray[i];
        arrayDos[i] = auxArrayEdades[i];

        //printf("Ingrese legajo para el alumno ubicado en la silla %d: ", i+1);
        //scanf("%d",&legajo[i]);
    }
}

int dameElMaximo(int arrayEnteros[],int tam)
{
    int i;
    int maximo;
    int flag = 0;

    for(i=0; i<tam ; i++)
    {
        if(flag == 0 || arrayEnteros[i] > maximo)
        {
            maximo = arrayEnteros[i];
        }

        flag = 1;
    }

    return maximo;
}

int dameElMinimo(int arrayEnteros[],int tam)
{
    int i;
    int minimo;
    int flag = 0;

    for(i=0; i<tam ; i++)
    {
        if(flag == 0 || arrayEnteros[i] < minimo)
        {
            minimo = arrayEnteros[i];
        }

        flag = 1;
    }

    return minimo;
}


void inicializarSillas(int array[],int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        array[i] = 0;
    }
}

void mostrarSillas(int array[],int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        printf("%d ",array[i]);
    }
}

int EstaLibre(int array[],int tam, int silla,int valorInicial)
{
    int retorno = 0;

    if(array[silla] == valorInicial)
    {
        retorno = 1;
    }

    return retorno;
}


int OcuparSilla(int array[],int arrayDos[],int tam, int silla,int legajo,int edad)
{
    int retorno = -1;
    int estalibrelasilla;

    if(silla < tam)
    {
        estalibrelasilla = EstaLibre(array,tam,silla,0);

        if(estalibrelasilla == 1)
        {
            array[silla] = legajo;
            arrayDos[silla] = edad;
            retorno = 1;
        }
    }

    return retorno;
}

void contadorDeSillas(int array[],int tam,int valor)
{
    int i;
    int contLibre = 0;
    int contOcupado = 0;

    for(i=0;i<tam;i++)
    {
        if(array[i] == valor)
        {
            contLibre++;
        }
        else
        {
            contOcupado++;
        }
    }

    printf("\n\nDe un total de %d sillas.\nCantidad de libres:%d\nCantidad de ocupadas:%d",tam,contLibre,contOcupado);

}

int buscarLibre(int array[],int tam, int valorLibre)
{
    int retorno = -1;
    int i;

    for(i=0;i<tam;i++)
    {
        if(array[i] == valorLibre)
        {
            retorno = i;
            break;
        }
    }

    return retorno;
}


void mostrarLegajoyEdad(int arraySillas[],int arrayEdades[],int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        if(arraySillas[i] != 0)
        {
            printf("En la silla %d Legajo:%d Edad:%d\n",i+1,arraySillas[i],arrayEdades[i]);
        }
    }
}

void mostrarEdadMaxima(int arraySilla[],int arrayEdades[],int tam)
{
    int i;
    int auxEdad;

    auxEdad = dameElMaximo(arrayEdades,tam);

    for(i=0;i<tam;i++)
    {
        if((arraySilla[i] != 0) && (auxEdad == arrayEdades[i]))
        {
            printf("Edad: %d Legajo:%d\n",arrayEdades[i],arraySilla[i]);
        }
    }
}
