#include <stdio_ext.h>
#include <stdlib.h>
#define LIMITE_ARRAY 3

//FUNCION PARA LIMPIAR SE REMPLAZA POR #define limpiar() __fpurge(stdin)

int main()
{
    int numeros[LIMITE_ARRAY];
    int maximo;
    int minimo;

    for (int i = 0; i < LIMITE_ARRAY; i++)
    {
        printf("Ingrese el numero %d: ", i + 1);
        while (scanf("%d", &numeros[i]) != 1)
        {
            printf("Error, numero incorrecto, ingrese nuevamente: ");
            __fpurge(stdin);
        }
        if (i == 0)
        {
            maximo = numeros[i];
            minimo = numeros[i];
        }
        else if (numeros[i] < minimo)
        {
            minimo = numeros[i];
        }
        else if (numeros[i] > maximo)
        {
            maximo = numeros[i];
        }
    }
    printf("\nNumero maximo: %d", maximo);
    printf("\nNumero minimo: %d", minimo);
    for (int i = 0; i < LIMITE_ARRAY; i++)
    {
        if (numeros[i] > minimo && numeros[i] < maximo)
        {
            printf("\n\nEl numero del medio es: %d.\n\n", numeros[i]);
            break;
        }
    }
}
