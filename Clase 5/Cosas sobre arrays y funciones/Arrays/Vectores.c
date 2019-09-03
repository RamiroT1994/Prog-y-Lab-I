#include "Vectores.h"

void cargarVector(int arrayEnteros[],int tam)
{
    int i;

    printf("\tCARGA DE DATOS\n");

    for(i=0; i<tam; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &arrayEnteros[tam]);
    }

    system("cls");
}

void mostrarMaximo(int arrayEnteros[],int tam)
{
    int maximo;
    int i;

    maximo = calcularMaximo(arrayEnteros,tam);

    printf("EL MAXIMO ES: %d ", maximo);

    for(i=0; i<tam; i++)
    {
        if(arrayEnteros[i] == maximo)
        {
            printf("EN LA POSICION: %d \n\n", i);
        }
    }
}

int calcularMaximo(int arrayEnteros[],int tam)
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
