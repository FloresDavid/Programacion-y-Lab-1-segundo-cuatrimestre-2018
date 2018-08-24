#include <stdio_ext.h>
#include <stdlib.h>

int main()
{
    int numeroUno;
    int numeroDos;
    int numeroTres;
    int maximo;
    int minimo;
    int numeroDelMedio;
    int hayNumero = 0;

    printf("Ingrese el primer numero: ");
    while (scanf("%d", &numeroUno) != 1)
    {
        printf("Error, numero incorrecto, ingrese nuevamente: ");
        __fpurge(stdin);
    }
    maximo = numeroUno;
    minimo = numeroUno;

    printf("Ingrese el segundo numero: ");
    while (scanf("%d", &numeroDos) != 1)
    {
        printf("Error, numero incorrecto, ingrese nuevamente: ");
        __fpurge(stdin);
    }

    if (numeroDos < minimo)
    {
        minimo = numeroDos;
    }
    else if (numeroDos > maximo)
    {
        maximo = numeroDos;
    }
    printf("Ingrese el tercer numero: ");
    while (scanf("%d", &numeroTres) != 1)
    {
        printf("Error, numero incorrecto, ingrese nuevamente: ");
        __fpurge(stdin);
    }

    if (numeroTres < minimo)
    {
        minimo = numeroTres;
    }
    else if (numeroTres > maximo)
    {
        maximo = numeroTres;
    }

    if (numeroUno > minimo && numeroUno < maximo)
    {
        numeroDelMedio = numeroUno;
        hayNumero = 1;
    }
    else if (numeroDos > minimo && numeroDos < maximo)
    {
        numeroDelMedio = numeroDos;
        hayNumero = 1;
    }
    else if (numeroTres > minimo && numeroTres < maximo)
    {
        numeroDelMedio = numeroTres;
        hayNumero = 1;
    }
    printf("\nNumero maximo: %d", maximo);
    printf("\nNumero minimo: %d", minimo);

    if (hayNumero == 0)
    {
        printf("\n\nNo hay numero del medio.\n\n");
    }
    else
    {
        printf("\n\nEl numero del medio es: %d.\n\n", numeroDelMedio);
    }
    return 0;
}
