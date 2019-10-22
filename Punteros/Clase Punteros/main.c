#include <stdio.h>
#include <stdlib.h>

/*int main()
{
    int x = 10;
    int* pEntero = NULL; //Control de nulidad, inicializacion de puntero

    pEntero = &x;

    if(pEntero != NULL)
    {
        printf("%d\n", x);//10
        printf("%d\n", &x);//la direccion de memoria de x
        printf("%d\n", pEntero);//la dir de memoria que contiene pEntero
        printf("%d\n", *pEntero);//10
        printf("%d\n", &pEntero);//la direcion de memoria de pEntero

    }
    else
    {
        printf("Error");
    }



    return 0;
}*/

int main()
{
    int x = 100;
    int* pEntero;
    int* pOtroPuntero = NULL;

    pEntero = &x;

    /*if(pEntero != NULL)
    {
        printf("Ingrese un numero: ");
        scanf("%d",pEntero); // Es equivalente a hacer scanf("%d",&x);

        printf("%d\n",*pEntero);
    }*/

    if(pEntero != NULL)
    {
        pOtroPuntero = pEntero; //Le asigno a pOtroPuntero lo mismo que guarda pEntero

        printf("%d\n", *pEntero);
        *pEntero = 700;
        printf("%d\n", *pOtroPuntero);

    }

    return 0;
}


/*int main()
{


    return 0;
}*/
