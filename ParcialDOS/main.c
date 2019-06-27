#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "controller.h"
#include "menu.h"



int main()
{
    int opcion;
    LinkedList* listaEmpleados = ll_newLinkedList();
    do
    {
        opcion = pedirOpcionMenu();
        switch(opcion)
        {
        case 1:
            controller_loadFromText("datos.csv",listaEmpleados);
            system("pause");
            system("cls");
            break;
        case 2:
            controller_ListEmployee(listaEmpleados);
            break;
        case 3:
            break;
        case 4:
            break;
        default:
            printf("opcion invalida");
            break;

        }

    }
    while(opcion != 4);

}
