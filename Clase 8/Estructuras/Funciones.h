typedef struct
{
    char nombre[50];
    int nota;
    int legajo;
    int estaVacio; // 0 = no esta vacio 1 = si esta vacio;

} eAlumno;

void hardcodeAlumnos(eAlumno[],int);
void inicializarAlumnos(eAlumno[],int,int);

void mostrarUnAlumno(eAlumno);
void mostrarAlumnos(eAlumno[],int);

int dameElIndiceLibre(eAlumno[],int);

void buscarXlegajo(eAlumno[],int,int);
