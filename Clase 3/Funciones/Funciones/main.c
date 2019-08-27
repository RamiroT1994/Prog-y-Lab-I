#include <stdio.h>
#include <stdlib.h>

int sumarEnteros(int,int);

int main()
{
    int numero1, numero2, total;

    printf("Ingrese valor para primer variable: ");
    scanf("%d",&numero1);

    printf("Ingrese valor para segunda variable: ");
    scanf("%d",&numero2);

    total = sumarEnteros(numero1,numero2);

    printf("El resultado de la suma es: %d", total);

    return 0;
}

int sumarEnteros(int a, int b)
{
    int resultado;

    resultado = a + b;

    return resultado;
}
