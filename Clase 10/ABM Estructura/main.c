#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define TAM 5
typedef struct
{
    int legajo;
    char nombre[30];
    float promedio;
    int estado;

} eAlumno;

void inicializarAlumnos(eAlumno[],int);
void hardcodeAlumnos(eAlumno[],int);
void mostrarUnAlumno(eAlumno);
void mostrarAlumnos(eAlumno[],int);
int buscarAlumnoXLegajo(eAlumno[],int,int);

int bajaAlumno(eAlumno[],int);

int main()
{
    eAlumno ListaAlumnos[TAM];
    int opcion;

    inicializarAlumnos(ListaAlumnos,TAM);
    hardcodeAlumnos(ListaAlumnos,3);

    do
    {
        printf("1. ALTA\n");
        printf("2. BAJA\n");
        printf("3. MODIFICAR\n");
        printf("4. MOSTRAR\n");
        printf("5. SALIR\n");
        printf("Elija una opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
            case 1:

                break;
            case 2:
                system("cls");
                bajaAlumno(ListaAlumnos,TAM);
                system("pause");
                break;
            case 3:

                break;
            case 4:
                system("cls");
                mostrarAlumnos(ListaAlumnos,TAM);
                system("pause");
                break;
            case 5:
                opcion = 5;
                break;
            default:
                break;
        }
    }while(opcion != 5);


    return 0;
}

void inicializarAlumnos(eAlumno lista[],int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        lista[i].estado = 0;
    }
}

void hardcodeAlumnos(eAlumno lista[],int tam)
{
    int i;
    char auxNombre[3][20] = {"Maria","Carlos","Esteban"};
    int auxLegajo[3] = {101,102,103};
    float auxPromedio[3] = {7.20,8.50,6.10};

    for(i = 0; i<tam ; i++)
    {
        lista[i].legajo = auxLegajo[i];
        strcpy(lista[i].nombre, auxNombre[i]);
        lista[i].promedio = auxPromedio[i];
        lista[i].estado = 1;
    }

}

void mostrarUnAlumno(eAlumno alumno)
{
    if(alumno.estado != 0)
    {
        printf("%d%10s%10.2f%5d \n",alumno.legajo,alumno.nombre,alumno.promedio,alumno.estado);
    }
}

void mostrarAlumnos(eAlumno lista[],int tam)
{
    int i;

    printf("LEGAJO\tNOMBRE\tPROMEDIO\n\n");

    for(i=0;i<tam;i++)
    {
        mostrarUnAlumno(lista[i]);
    }
}

int bajaAlumno(eAlumno lista[],int tam)
{
    int retorno = -1;
    int auxLegajo;
    //char auxChar;
    //int auxIndice;

    int i;

    mostrarAlumnos(lista,tam);

    printf("\n\nIngrese legajo de alumno que desea dar de baja:");
    scanf("%d",&auxLegajo);

    printf("AuxLegajo: %d",auxLegajo);

    for(i=0;i<tam;i++)
    {
        if(lista[i].legajo == auxLegajo && lista[i].estado == 1);
        {
            printf("%d",i);
            mostrarUnAlumno(lista[i]);
            break;
        }
    }

    //auxIndice = buscarAlumnoXLegajo(lista,tam,auxLegajo);

    /*if(auxIndice != -1)
    {
        mostrarUnAlumno(lista[auxIndice]);
    }
    else
    {
        printf("No existe ese legajo");
    }



    if(auxIndice == -1)
    {
        printf("No se ha podido encontrar el legajo ingresado");
    }
    else
    {
        printf("Desea dar de baja el siguiente alumno? S/N\n\n");
        mostrarUnAlumno(lista[auxLegajo]);
        fflush(stdin);
        auxChar = getche();

        if(auxChar == 'S' || auxChar == 's')
        {
            lista[auxIndice].estado = 0;
            printf("Usuario dado de baja!");
            retorno = 1;
        } else if(auxChar == 'N' || auxChar == 'n')
                {
                        printf("Baja cancelada");
                        retorno = 0;
                }
    }
*/
    return retorno;
}

int buscarAlumnoXLegajo(eAlumno lista[],int tam,int legajo)
{
    int retorno = -1;
    int i;

    for(i=0;i<tam;i++)
    {
        if(lista[i].estado == 1 && lista[i].legajo == legajo);
        {
            retorno = i;
            break;
        }
    }

    return retorno;

}
