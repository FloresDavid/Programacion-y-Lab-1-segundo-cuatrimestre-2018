#include <ctype.h>
#include <stdio_ext.h>
#include <string.h>

void getNombre (char* nombre)
{
    printf("Ingrese un nombre.\n");
    __fpurge(stdin);
    fgets(nombre, 25, stdin);
}
int isValid (char cadena[], int tam)
{
    int retorno = 1;
    char aux[] = "\0";
    char auxLetra[1] = "";

    for (int i = 0; i < tam-1; i++)
    {
        auxLetra[0] = cadena[i];
        cadena[i] = tolower(cadena[i]);
        if ((strcmp (auxLetra,aux) < 97) || strcmp(auxLetra, aux) > 122)
        {
            retorno = 0;
            break;
        }
        else
        {
        }
        printf("resultado comparacion = %d\n", strcmp(auxLetra, aux) );
    }
    return retorno;
}
