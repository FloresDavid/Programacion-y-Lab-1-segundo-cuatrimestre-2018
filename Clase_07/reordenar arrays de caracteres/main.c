#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

int main()
{
    char usuario[9];
    char clave[9];
    char auxUsuario[] = "admin\n";
    char auxClave[] = "1234\n";

    fgets(usuario, 9, stdin);
    __fpurge(stdin);
    fgets(clave, 9, stdin);
    __fpurge(stdin);

    printf("usuario: %s \n", usuario);

    if ((strncmp (usuario, auxUsuario, 9) == 0) && (strncmp (clave, auxClave, 9) == 0))
    {
        printf("ingreso!!");
    }
    else
    {
        printf("no ingreso");
    }












/*
    char nombre[10];
    char apellido[10];
    char localidad[10];

    fgets(nombre, 10, stdin);
    __fpurge(stdin);
    fgets(apellido, 10, stdin);
    __fpurge(stdin);
    fgets(localidad, 10, stdin);
    __fpurge(stdin);

    printf("\nEl nombre ingresado es: %s", nombre);
    printf("\nEl apellido ingresado es: %s", apellido);
    printf("\nLa localidad ingresada es: %s", localidad);
*/

    return 0;
}
