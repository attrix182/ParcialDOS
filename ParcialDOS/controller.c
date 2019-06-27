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
