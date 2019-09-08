#include "INPUTS.h"
#include <stdio.h>
#include <ctype.h>

int validarInt(int numero,int min, int max)
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

    auxValidation = validarInt(numero,min,max);

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


float getFloat(char msj[],char msjValido[],char msjError[],int min,int max)
{
    float numero;
    int auxValidation;

    printf(msj);
    scanf("%f", &numero);

    auxValidation = validarInt(numero,min,max);

    if(auxValidation == -1)
    {
        printf(msjError);
        numero = (min - 1);
    }
    else
    {
        printf(msjValido);
    }

    return numero;

}

char getChar(char msj[],char msjValido[],char msjError[],int min, int max)
{
    char caracter;
    int auxValidation;

    printf(msj);
    scanf("%c",&caracter);
    fflush(stdin);

    caracter = toupper(caracter);

    auxValidation = charValidation(caracter,min,max);

    if(auxValidation == -1)
    {
        printf(msjError);
        caracter = -1;
    }
    else
    {
        printf(msjValido);
    }

    return caracter;

}

int charValidation(char caracter,int min, int max)
{
    int retorno = 0;

    if(caracter < min || caracter > max)
    {
        retorno = -1;
    }

    return retorno;

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
