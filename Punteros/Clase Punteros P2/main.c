#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 100;
    int* pEntero;

    pEntero = &x;

    printf("%d\n",pEntero);
    printf("%d\n",pEntero+0);
    printf("%d\n",pEntero+1);
    printf("%d\n",pEntero+2);
    printf("%d\n",pEntero+3);

    pEntero = pEntero + 1;

    return 0;
}
