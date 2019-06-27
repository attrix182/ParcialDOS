#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED


typedef struct
{
    int id;
    char nombre[50];
    char empleo[50];
    int edad;
    int horasTrabajadas;

} eEmpleado;

eEmpleado* eEmpleado_new();

eEmpleado* empleado_nuevosParametros(char idAux[50],char nombreAux[50],char empleoAux[50],char edadAux[50],char horasTrabajadasAux[50]);


int eEmpleado_get_id (eEmpleado* ptrEmp,int* this);
int eEmpleado_get_nombre (eEmpleado* ptrEmp,char* this);
int eEmpleado_get_empleo (eEmpleado* ptrEmp,char* this);
int eEmpleado_get_edad (eEmpleado* ptrEmp,int* this);
int eEmpleado_get_horasTrabajadas(eEmpleado* ptrEmp,int* this);
int eEmpleado_set_id (eEmpleado* ptrEmp,int this);
int eEmpleado_set_nombre(eEmpleado* ptrEmp,char* this);
int eEmpleado_set_empleo (eEmpleado* ptrEmp,char* this);
int eEmpleado_set_edad (eEmpleado* ptrEmp,int this);
int eEmpleado_set_horasTrabajadas(eEmpleado* ptrEmp,int this);





#endif // EMPLEADO_H_INCLUDED
