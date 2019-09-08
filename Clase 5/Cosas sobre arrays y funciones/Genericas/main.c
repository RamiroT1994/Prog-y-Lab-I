#include <stdio.h>
#include <stdlib.h>
#include "INPUTS.h"
int main()
{
    int numero;
    float numFloat;
    char caracter;

    /*numero = myGetInt("Ingrese un valor:","Numero valido","Numero erroneo",0,100);
    printf("\n\nEl numero ingresado es: %d", numero);*/

    /*numFloat = getFloat("Ingrese un flotante:","Numero Valido!","Numero erroneo.",0,10000);
    printf("\n\nEl numero ingresado es: %.2f",numFloat);*/

    caracter = getChar("Elija una opcion [A][B][C]:","Caracter valido","Caracter Erroneo",65,67);
    printf("\n\nEl caracter ingresado es: %c",caracter);



















/*    int edad = 7;
    int nota;

    getInt(&edad, "Ingrese su edad: ", 10, 50);
    printf("Ud tiene: %d años", edad);

    getInt(&nota, "Ingrese una nota: ", 1, 10);
    printf("Ud se saco un: %d", nota);

    printf("Ingrese su edad: ");
    edad = myGetInt(edad)
*/
    return 0;
}

