#include <stdio.h>
#include <stdlib.h>

/*Funcion que se llama a ella misma*/
/** \brief Calcula el factorial de un numero
 *
 * \param El numero sobre el que se calculara el factorial
 * \return El factorial del numero
 *
 */

long long int factorial(int);

int main()
{
    int numero = 13;
    long long int resultado;

    resultado = factorial(numero);

    printf("El factorial es: %lld", resultado);

    return 0;
}

long long int factorial(int numero)
{
    long long int resultado;

    if(numero == 0)
    {
        return 1;
    }
    else
    {
        resultado = numero * factorial(numero - 1);
    }

    return resultado;
}
