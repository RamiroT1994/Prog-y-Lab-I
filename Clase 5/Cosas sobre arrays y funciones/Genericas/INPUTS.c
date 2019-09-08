#include "INPUTS.h"
#include <stdio.h>

int validarNumero(int numero,int min, int max)
{
    int retorno;

    if(numero > max || numero < min)
    {
        retorno = -1;
    }
    else
    {
        retorno = numero;
    }

    return retorno;
}


int myGetInt(char msj[],char validoMsj[],char errorMsj[],int min,int max)
{
    int numero;
    int auxValidation;

    printf(msj);
    scanf("%d",&numero);

    auxValidation = validarNumero(numero,min,max);

    if(auxValidation == -1)
    {
        printf(errorMsj);
        numero = (min - 1);
    }
    else
    {
        printf(validoMsj);
    }

    return numero;
}














/*int getInt(int* valor, char mensaje[], int min, int max)
{
    int retorno = 0;

    printf("%s", mensaje);
    scanf("%d", valor);

    while(*valor<min || *valor>max)
    {
        printf("Error, %s\a\a", mensaje);
        scanf("%d", valor);
    }

    return retorno;
}
*/
