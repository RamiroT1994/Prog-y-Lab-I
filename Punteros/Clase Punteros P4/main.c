#include <stdio.h>
#include <stdlib.h>

/* PUNTEROS A ESTRUCTURAS */

typedef struct
{
    int legajo;
    float nota;
    char sexo;

}eAlumno;



int main()
{/*
    eAlumno unAlumno; //= {1000,7,'m'};
    eAlumno* pAlumno;

    pAlumno = &unAlumno;

    printf("Ingrese legajo: ");
    scanf("%d",&(*pAlumno).legajo);

    printf("Ingrese nota: ");
    scanf("%f",&(*pAlumno).nota);

    printf("Ingrese sexo: ");
    fflush(stdin);
    (*pAlumno).sexo = getche();

    printf("%d---%f---%c\n",(*pAlumno).legajo,(*pAlumno).nota,(*pAlumno).sexo);
    printf("%d---%f---%c\n",pAlumno->legajo,pAlumno->nota,pAlumno->sexo);
*/

   eAlumno lista[3] = {{1000,7,'M'},{1002,10,'F'},{1003,10,'M'}};
    eAlumno* pLista;
    int i;

    pLista = lista;

    for(i=0;i<3;i++)
    {
        //printf("%d---%f---%c\n", (*(pLista+i)).legajo, (*(pLista+i)).nota,(*(pLista+i)).sexo);
        printf("%d---%f---%c\n", (pLista+i)->legajo, (pLista+i)->nota,(pLista+i)->sexo);
    }

    return 0;
}

