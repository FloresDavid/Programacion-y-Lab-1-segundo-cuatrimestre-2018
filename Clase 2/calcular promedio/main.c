#include <stdio_ext.h>
#include <stdlib.h>
#define LIMITE_ARRAY 5
#define clear() __fpurge(stdin)

int main()
{
    int numeros[LIMITE_ARRAY];
    int acumulador = 0;
    float resultado;

    for (int i = 0; i < LIMITE_ARRAY; i++)
    {
        printf("Ingrese el %d numero: ", i + 1);
        while (scanf("%d", &numeros[i]) != 1)
        {
            printf("Error, numero incorrecto, ingrese el numero %d nuevamente: ", i + 1);
            clear();
        }
    }
    for (int i = 0; i < LIMITE_ARRAY; i++)
    {
        acumulador += numeros[i];
    }
    resultado = (float) acumulador/LIMITE_ARRAY;
    printf("El promedio es: %.2f", resultado);
}
