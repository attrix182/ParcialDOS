#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "empleado.h"
#include "controller.h"
#include "parser.h"


int controller_loadFromText(char* path, LinkedList* pArrayListEmployee)
{
    FILE *pArchivo;

    if((pArchivo = fopen(path, "r"))==NULL)
    {
        printf("No se puedo leer\n");
        exit(1);
    }
    else
    {
        parser_EmployeeFromText(pArchivo, pArrayListEmployee);

        return 1;
    }


}


int controller_ListEmployee(LinkedList* pArrayListEmployee)
{
    eEmpleado* pEmpleadoAux;
    int ret = 0;
    int idAux;
    char nombreAux[50];
    char empleoAux[50];
    int edadAux;
    int horasTrabajasAux;
    int lenList = ll_len(pArrayListEmployee);
    int i;
    if(pArrayListEmployee!=NULL)
    {
        if(lenList>0)
        {
            printf("Id--Nombre--------Empleo--------Edad------Horas trabajadas \n");

            for(i = 0; i < lenList; i++)
            {
                pEmpleadoAux = (eEmpleado*)ll_get(pArrayListEmployee, i);

                eEmpleado_get_id(pEmpleadoAux, &idAux);
                eEmpleado_get_nombre(pEmpleadoAux,nombreAux);
                eEmpleado_get_empleo(pEmpleadoAux, empleoAux);
                eEmpleado_get_edad(pEmpleadoAux,&edadAux);
                eEmpleado_get_horasTrabajadas(pEmpleadoAux,&horasTrabajasAux);


                printf("%2d  %s\t %s\t %d\t  %d\t \n",idAux, nombreAux, empleoAux, edadAux, horasTrabajasAux);
            }

            ret = 1;

        }
        else
        {
            printf("No se cargaron los datos.\n");
        }
    }
    return ret;
}

int controller_sortEmployee(LinkedList* pArrayListEmployee)
{
    if(pArrayListEmployee != NULL)
    {
        ll_sort(pArrayListEmployee, employee_sortPorNombre, 1);
    }

    return 1;
}

int controller_mapEmployee(LinkedList* pArrayListEmployee)
{
    if(pArrayListEmployee != NULL)
    {
        ll_map(pArrayListEmployee, employee_mapeoPorDedicacion);
    }

    return 1;
}

int controller_ListEmployeeDedic(LinkedList* pArrayListEmployee)
{
    eEmpleado* pEmpleadoAux;
    int ret = 0;
    int idAux;
    char nombreAux[50];
    char empleoAux[50];
     char dedicacionAux[50];
    int edadAux;
    int horasTrabajasAux;
    int lenList = ll_len(pArrayListEmployee);
    int i;
    if(pArrayListEmployee!=NULL)
    {
        if(lenList>0)
        {
            printf("Id--Nombre--------Empleo--------Edad------Horas trabajadas---Dedicacion \n");

            for(i = 0; i < lenList; i++)
            {
                pEmpleadoAux = (eEmpleado*)ll_get(pArrayListEmployee, i);

                eEmpleado_get_id(pEmpleadoAux, &idAux);
                eEmpleado_get_nombre(pEmpleadoAux,nombreAux);
                eEmpleado_get_empleo(pEmpleadoAux, empleoAux);
                eEmpleado_get_edad(pEmpleadoAux,&edadAux);
                eEmpleado_get_horasTrabajadas(pEmpleadoAux,&horasTrabajasAux);
                eEmpleado_get_dedicacion(pEmpleadoAux,dedicacionAux);


                printf("%2d  %s\t %s\t %d\t  %d\t %s\t \n",idAux, nombreAux, empleoAux, edadAux, horasTrabajasAux, dedicacionAux);
            }

            ret = 1;

        }
        else
        {
            printf("No se cargaron los datos.\n");
        }
    }
    return ret;
}
