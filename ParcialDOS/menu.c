#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
int pedirOpcionMenu()
{
    int opcion;
    printf("                          A B M                  \n\n");
    printf(" 1. Cargar archivo  \n 2. Listar ordenados ascendente por nombre  \n 3. Listar empleados ordenados por dedicacion de forma ascendente\n 4. Salir\n");
    scanf("%d", &opcion);

    return opcion;

}
int getOptionModify()
{
    int optionModify;
    printf("%s","             MODIFICACION            \n");
    printf("%10s - %10s - %10s - %10s \n", "1.NAME", "2.LAST NAME","3.SALARY","4.SECTOR");
    scanf("%d", &optionModify);

    return optionModify;
}

int getOptionShow()
{
    int optionShow;
    printf("%s","                   INFORMES                 \n");
    printf("%s %s \n", " 1. Empleados ordenados alfabeticamente por Apellido y Sector\n", "2. Total y promedio de los salarios, y cuántos empleados superan el salario promedio");
    scanf("%d", &optionShow);

    return optionShow;
}
