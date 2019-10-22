#include <stdio.h>
#include <stdlib.h>
#include "Persona.h"

ePersona* new_Persona()
{
    ePersona* puntero;

    puntero = (ePersona*)malloc(sizeof(ePersona));

    if(puntero != NULL)
    {
        puntero->legajo = 1000;
        puntero->sexo = 'M';
        puntero->altura = 1.79;
    }

    return puntero;
}

void mostrarPersona(ePersona* unaPersona)
{
    printf("%d---%c---%.2f\n",unaPersona->legajo,unaPersona->sexo,unaPersona->altura);
}

void delete_Persona(ePersona* unaPersona)
{
    free(unaPersona);
}

ePersona* new_PersonaParametros(int legajo,char sexo,float altura)
{
    ePersona* p = new_Persona();

    if(p != NULL)
    {
        p->legajo = legajo;
        p->sexo = sexo;
        p->altura = altura;
    }

    return p;
}


void setLegajo(ePersona* this, int leg)
{
    if(this != NULL)
    {
       this->legajo = leg;
    }
}

int getLegajo(ePersona* unaPersona)
{
    if(unaPersona != NULL)
    {
        return unaPersona->legajo;
    }
}
