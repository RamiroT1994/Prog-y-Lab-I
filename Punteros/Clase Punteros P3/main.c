#include <stdio.h>
#include <stdlib.h>

void cargarVector(int*,int);
void mostrarVector(int*,int);


int main()
{

    int vector[5];// = {5,7,6,1,4};

    cargarVector(vector,5);

    if(mostrarVector(vector,5) == -1)
    {
        printf("Hubo un error");
    }



    return 0;
}

void cargarVector(int* vector,int tam)
{

    int i;

    for(i=0; i<5; i++)
    {
        printf("Ingrese un numero:");
        scanf("%d", vector+i);

    }
}

void mostrarVector(int* vector,int tam)
{
    int i;

    if(vector != NULL && tam > 0)
    {
        for(i=0; i<5; i++)
        {
            printf("%d\n", *(vector+i)); //(puntero+i) me despleza entre posiciones de memoria, el operador * me da el valor al que apunta. Es lo mismo que vector[i]
        }
    }
}
