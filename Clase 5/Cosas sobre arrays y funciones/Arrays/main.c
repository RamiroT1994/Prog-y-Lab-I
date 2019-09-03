#include <stdio.h>
#include <stdlib.h>
#include "Vectores.h"

#define TAM 10

int main()
{
    int vectorDeNumeros[TAM] = {7,-5,5,-6,-1,-4,10,5,4,-6};
    int i;
    int contadorDePositivos = 0;
    int sumaDePositivos = 0;
    float promedioPositivos;
    int minimo;
    int flag = 0;
    int opcion;

    do
    {
        printf("1-Cargar\n");
        printf("2-Mostrar todo\n");
        printf("3-Mostrar negativos\n");
        printf("4-Mostrar prom. positivos\n");
        printf("5-Mostrar Maximo\n");
        printf("6-Mostrar Minimo\n");
        printf("7-SALIR\n");
        printf("ELIJA UNA OPCION: ");
        scanf("%d", &opcion);

        system("cls");

        switch(opcion)
        {
        case 1:
            cargarVector(vectorDeNumeros,TAM);
            break;

        case 2:

            system("cls");

            printf("\tMUESTRO EL VECTOR\n");
            for(i=0; i<TAM; i++)
            {
                printf("%d ", vectorDeNumeros[i]);
            }

            system("pause");

            break;




        case 3:

            printf("\n\n\tMUESTRO SOLO LOS NEGATIVOS\n");
            for(i=0; i<TAM; i++)
            {
                if(vectorDeNumeros[i]<0)
                {
                    printf("%d ", vectorDeNumeros[i]);
                }
            }

            break;

        case 4:

            for(i=0; i<TAM; i++)
            {
                if(vectorDeNumeros[i]>=0)
                {
                    sumaDePositivos += vectorDeNumeros[i];
                    contadorDePositivos++;
                }
            }
            promedioPositivos = (float)sumaDePositivos/contadorDePositivos;

            printf("\n\n\tSUMA DE POSITIVOS\n\n");
            printf("Suma: %d  Cantidad %d\n\n", sumaDePositivos, contadorDePositivos);


            printf("\n\nPROMEDIO DE POSITIVOS: %.2f\n\n", promedioPositivos);

            break;

        case 5:

            mostrarMaximo(vectorDeNumeros,TAM);

            break;

        case 6:

            flag = 0;

            for(i=0; i<TAM; i++)
            {
                if(flag == 0 || vectorDeNumeros[i] < minimo)
                {
                    minimo = vectorDeNumeros[i];
                }

                flag = 1;
            }

            printf("EL MINIMO ES: %d", minimo);

            for(i=0; i<10; i++)
            {
                if(vectorDeNumeros[i] == minimo)
                {
                    printf(" EN LAS POSICIONES: %d ", i);
                }
            }

            break;

        case 7:
            opcion = 7;
            break;
        }

    }
    while(opcion != 7);

    return 0;
}
