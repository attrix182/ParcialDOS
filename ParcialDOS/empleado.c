#include "empleado.h"
#include "stdio.h"
#include <stdlib.h>
#include <string.h>

eEmpleado* eEmpleado_new()
{
    eEmpleado* pEmpleado;
    pEmpleado = (eEmpleado*)calloc(sizeof(eEmpleado), 1);
    return pEmpleado;
}

eEmpleado* empleado_nuevosParametros(char idAux[50],char nombreAux[50],char empleoAux[50],char edadAux[50],char horasTrabajadasAux[50])
{

    eEmpleado* auxEmpleado = eEmpleado_new();

    if( auxEmpleado != NULL )
    {

        int id = atoi(idAux);
        eEmpleado_set_id(auxEmpleado, id);

        int horasTrabajadas = atoi(horasTrabajadasAux);
        eEmpleado_set_horasTrabajadas(auxEmpleado, horasTrabajadas);

        int edad = atoi(edadAux);
        eEmpleado_set_empleo(auxEmpleado, empleoAux);

        eEmpleado_set_edad(auxEmpleado, edad);

        eEmpleado_set_nombre(auxEmpleado, nombreAux);

    }

    return auxEmpleado;

}



int eEmpleado_get_id (eEmpleado* ptrEmp,int* this)
{
    int ret = -1;
    if (ptrEmp!=NULL)
    {
        if (this!=NULL)
        {
            *this = ptrEmp->id;
            ret = 0;
        }
    }
    return ret;
}
int eEmpleado_get_nombre (eEmpleado* ptrEmp,char* this)
{
    int ret = -1;
    if (ptrEmp!=NULL)
    {
        if (this!=NULL)
        {
            strcpy(this,ptrEmp->nombre);
            ret = 0;
        }
    }
    return ret;
}
int eEmpleado_get_empleo (eEmpleado* ptrEmp,char* this)
{
    int ret = -1;
    if (ptrEmp!=NULL)
    {
        if (this!=NULL)
        {
            strcpy(this,ptrEmp->empleo);
            ret = 0;
        }
    }
    return ret;
}
int eEmpleado_get_edad(eEmpleado* ptrEmp,int* this)
{
    int ret = -1;
    if (ptrEmp!=NULL)
    {
        if (this!=NULL)
        {
            *this = ptrEmp->edad;
            ret = 0;
        }
    }
    return ret;
}
int eEmpleado_get_horasTrabajadas(eEmpleado* ptrEmp,int* this)
{
    int ret = -1;
    if (ptrEmp!=NULL)
    {
        if (this!=NULL)
        {
            *this = ptrEmp->horasTrabajadas;
            ret = 0;
        }
    }
    return ret;
}


int eEmpleado_set_id (eEmpleado* ptrEmp,int this)
{
    int ret = -1;
    if (ptrEmp!=NULL)
    {
        if (this>0)
        {
            ptrEmp->id = this;
            ret = 0;
        }
    }
    return ret;
}
int eEmpleado_set_nombre(eEmpleado* ptrEmp,char* this)
{
    int ret = -1;
    if (ptrEmp!=NULL)
    {
        if (this!=NULL)
        {
            strcpy(ptrEmp->nombre,this);
            ret = 0;
        }
    }
    return ret;
}
int eEmpleado_set_empleo (eEmpleado* ptrEmp,char* this)
{
    int ret = -1;
    if (ptrEmp!=NULL)
    {
        if (this!=NULL)
        {
            strcpy(ptrEmp->empleo,this);
            ret = 0;
        }
    }
    return ret;
}
int eEmpleado_set_edad (eEmpleado* ptrEmp,int this)
{
    int ret = -1;
    if (ptrEmp!=NULL)
    {
        if (this>0)
        {
            ptrEmp->edad = this;
            ret = 0;
        }
    }
    return ret;
}
int eEmpleado_set_horasTrabajadas(eEmpleado* ptrEmp,int this)
{
    int ret = -1;
    if (ptrEmp!=NULL)
    {
        if (this>-1)
        {
            ptrEmp->horasTrabajadas = this;
            ret = 0;
        }
    }
    return ret;
}

int employee_sortPorNombre(void* employeeA,void* employeeB)
{
    char auxNameA [50], auxNameB [50];
    int ret;

    if((employeeA != NULL)&&(employeeB !=NULL))
    {
        eEmpleado_get_nombre(employeeA, auxNameA);
        eEmpleado_get_nombre(employeeB, auxNameB);

        ret = stricmp(auxNameA, auxNameB);

    }

    return ret;

}

int eEmpleado_set_dedicacion(eEmpleado* ptrEmp,char* this)
{
    int ret = -1;
    if (ptrEmp!=NULL)
    {
        if (this!=NULL)
        {
            strcpy(ptrEmp->dedicacion,this);
            ret = 0;
        }
    }
    return ret;
}



int employee_mapeoPorDedicacion(eEmpleado* employee)
{

    int auxHoras = eEmpleado_get_horasTrabajadas(employee, &auxHoras);
    if(auxHoras > 0 && auxHoras <=200)
    {
        eEmpleado_set_dedicacion(employee, "estandar");
    }
    else if(auxHoras > 200 && auxHoras <300)
    {
        eEmpleado_set_dedicacion(employee, "sobre la medida");
    }
    else if(auxHoras > 200 && auxHoras <300)
    {
        eEmpleado_set_dedicacion(employee, "excesivo");
    }
    return 0;

}

int eEmpleado_get_dedicacion(eEmpleado* ptrEmp,char* this)
{
    int ret = -1;
    if (ptrEmp!=NULL)
    {
        if (this!=NULL)
        {
            strcpy(this,ptrEmp->dedicacion);
            ret = 0;
        }
    }
    return ret;
}
