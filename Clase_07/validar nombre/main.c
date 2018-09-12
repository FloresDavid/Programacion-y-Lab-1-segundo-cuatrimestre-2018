#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "funciones.h"

int main()
{

    char nombre[25];
    int tam;
    int validacion;

    getNombre(nombre);
    tam = strlen(nombre);
    validacion = isValid(nombre, tam);

    if (validacion == 1)
    {
        printf("\nValidacion correcta.");
    }
    else
    {
        printf("\nValidacion Incorrecta.");
    }

    printf("\n\nHello world!\n");
    return 0;
}
