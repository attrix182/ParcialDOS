#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "controller.h"
#include "menu.h"



int main()
{
    int opcion;
    int flag1 = 0;
    LinkedList* listaEmpleados = ll_newLinkedList();
    do
    {
        opcion = pedirOpcionMenu();
        switch(opcion)
        {
        case 1:
            if(flag1 == 0)
            {
            controller_loadFromText("datos.csv",listaEmpleados);
            system("pause");
            system("cls");
            flag1 = 1;
            break;
            }
            else{
                printf("Ya ha cargado los datos\n");
                system("pause");
                system("cls");
            }
        case 2:
            controller_sortEmployee(listaEmpleados);
            controller_ListEmployee(listaEmpleados);
            printf("\n");
            break;
        case 3:
            controller_mapEmployee(listaEmpleados);
            controller_ListEmployeeDedic(listaEmpleados);
             printf("opcion 3\n");
            break;
        case 4:

            break;
        default:
            printf("opcion invalida\n");
            break;

        }

    }
    while(opcion != 4);

}
