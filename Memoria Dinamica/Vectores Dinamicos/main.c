#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* pVec;
    int* aux;
    int i;

    pVec =(int*) malloc(sizeof(int)*5);

    for(i=0;i<5;i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", pVec+i);

    }

    for(i=0;i<5;i++)
    {
        printf("%d\n", *(pVec + i));
    }

    aux = (int*) realloc(pVec,sizeof(int)*10);

    if(aux != NULL)
    {
        pVec = aux;

        for(i=5;i<10;i++)
        {
            printf("Ingrese un numero: ");
            scanf("%d", pVec+i);
        }

        for(i=0;i<10;i++)
        {
            printf("%d\n", *(pVec + i));
        }
    }

    pVec = (int*)realloc(pVec, sizeof(int)*4);

    for(i=0;i<4;i++)
    {
        printf("%d\n", *(pVec + i));
    }

    return 0;
}
