typedef struct
{
    char nombre[50];
    int nota;
    int legajo;
    int estaVacio; // o = no esta vacio 1 = si esta vacio;

} eAlumno;

void inicializarAlumnos(eAlumno[],int,int);
void listarAlumnos(eAlumno[],int);
