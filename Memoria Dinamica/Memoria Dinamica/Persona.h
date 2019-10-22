typedef struct
{
    int legajo;
    char sexo;
    float altura;

}ePersona;

ePersona* new_Persona(); //CONSTRUCTOR POR DEFECTO(INICIALIZA UNA ESTRUCTURA EN 0 )
ePersona* new_PersonaParametros(int,char,float); //Constructor parametrizado

void setLegajo(ePersona*,int); //Setter
int getLegajo(ePersona*);      //Getter

void delete_Persona(ePersona*);
void mostrarPersona(ePersona*);
