#include <stdio.h>
#include <stdlib.h>
#include "ctype.h"

int main()
{
    int dinero;
    char moneda;
    int flag = 0;
    int flagPesos = 0;
    int i;
    int mayorEnD;

    int acumPesos = 0;
    int contPesos = 0;
    float promPesos;

    for(i=0;i<5;i++)
    {
        printf("Ingrese valor de ingreso: ");
        scanf("%d",&dinero);

        printf("Ingrese tipo de moneda <D - B - P - L>: ");
        fflush(stdin);
        scanf("%c",&moneda);

        while((moneda != 'D' && moneda != 'd') && (moneda != 'B' && moneda != 'b') && (moneda != 'P' && moneda != 'p')&& (moneda != 'L' && moneda != 'l'))
        {
            printf("ERROR. Reingrese un tipo de moneda valido <D - B - P - L>: ");
            fflush(stdin);
            scanf("%c",&moneda);
        }

        printf("\n");

        if(flag == 0 && (moneda == 'd' || moneda == 'D'))
        {
            mayorEnD = dinero;
            flag = 1;
        }

        else if( (moneda == 'd' || moneda == 'D') && dinero > mayorEnD)
        {
            mayorEnD = dinero;
        }

        if(moneda == 'P' || moneda == 'p')
        {
            flagPesos = 1;
            acumPesos = acumPesos + dinero;
            contPesos ++;
        }

    }



    promPesos = (float)acumPesos/contPesos;

    if(flag == 0)
    {
        printf("No se ha ingresado importe en dolares");
    }
    else
    {
        printf("Mayor importe en dolares: %d\n", mayorEnD);

    }

    if(flagPesos == 0)
    {
        printf("No se ha ingresado importe en pesos");
    }
    else
    {
        printf("Promedio de pesos ingresado: %.1f\n", promPesos);
    }

    return 0;
}
