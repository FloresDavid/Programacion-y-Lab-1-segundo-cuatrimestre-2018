#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include "array.h"

#define CANTIDAD_EMPLEADOS 5

int main()
{
    int edades[CANTIDAD_EMPLEADOS] = {50,20,100,35,15};
    int orden;
  //  int i;
/*
    for(i=0;i < CANTIDAD_EMPLEADOS;i++)
    {
        if(utn_getEntero(&edades[i],2,"\nEdad?","\nEdad fuera de rango",0,200)==-1)
        {
            edades[i] = DATO_INVALIDO;
        }
    }
*/
    printf("Ingrese el orden deseado.");
    printf("\n1) De menor a mayor");
    printf("\n2) De mayor a menor");
    scanf("\n%d", &orden);

    array_reordenar2(edades, CANTIDAD_EMPLEADOS, orden);
    mostrarArray(edades,CANTIDAD_EMPLEADOS);

    return 0;
}
