#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define CANTIDAD_EMPLEADOS 6

int main()
{
    char nombres[CANTIDAD_EMPLEADOS][50];

    for (int i = 0; i < CANTIDAD_EMPLEADOS; i++)
    {
        getNombre(nombres[i], "\nNombre: ", "\nERROR.", 50, 2);
    }
    for (int i = 0; i< CANTIDAD_EMPLEADOS;i++)
    {
        printf("\n%s", nombres[i]);
    }
    return 0;
}
