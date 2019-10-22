#include <stdio.h>
#include <stdlib.h>
#include "Persona.h"

int main()
{
    ePersona* unaPersona = new_PersonaParametros(102,'F',1.83);
    setLegajo(unaPersona,555);

    if(unaPersona != NULL)
    {
        printf("La persona es:\n");
        if(getLegajo(unaPersona) > 500)
        {
            mostrarPersona(unaPersona);
        }

    }

    delete_Persona(unaPersona);//NO LO PONE EN NULL, LIBERA EL ESPACIO EN MEMORIA.

    return 0;
}


