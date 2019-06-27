#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "empleado.h"


int parser_EmployeeFromText(FILE* pFile, LinkedList* pArrayListEmployee)
{
    eEmpleado* auxEmpleado = eEmpleado_new();
    int r;
    int i = 0;
    char idAux[50],nombreAux[50],empleoAux[50],edadAux[50],horasTrabajadasAux[50];

    r = fscanf(pFile,"%[^,],%[^,],%[^,],%[^,],%[^\n]\n",idAux,nombreAux,empleoAux, edadAux,horasTrabajadasAux);
    while(!feof(pFile))
    {
        r = fscanf(pFile,"%[^,],%[^,],%[^,],%[^,],%[^\n]\n",idAux,nombreAux,empleoAux, edadAux,horasTrabajadasAux);
        if(r==5)
        {
            auxEmpleado = empleado_nuevosParametros(idAux,nombreAux,empleoAux, edadAux,horasTrabajadasAux);
            ll_add(pArrayListEmployee, auxEmpleado );
            i++;
        }
    }
    printf("Se cargaron %d empleados a la lista (modo texto)\n", i);

    return i;

}
