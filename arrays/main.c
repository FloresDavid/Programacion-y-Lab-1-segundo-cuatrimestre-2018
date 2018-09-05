#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD 5

int retornarTotal(int[], int);
float retornarPromedio(int[],int);
void cargarListado (int[], int);
void mostrarListado(int[], int);
int retornarMayor(int[], int);
int retornarMenor(int[], int);
int retornarCantidadDePares(int[], int);
void mostrarInformacionDelArray(int[], int);
int RetornarCantidadEntreNotas(int[], int, int, int);

int main()
{
    int listadoDeNotas[CANTIDAD];
    cargarListado(listadoDeNotas, CANTIDAD);
    mostrarListado(listadoDeNotas, CANTIDAD);
    mostrarInformacionDelArray(listadoDeNotas, CANTIDAD);
}
/**
a- el mayor
b- el menor
c- cantidad de pares
d- suma total
e- promedio

*/
void mostrarInformacionDelArray(int lista[], int tam)
{
    int mayor;
    int menor;
    int cantidadDePares;
    float promedio;
    int sumaTotal;
    int minimo;
    int maximo;
    int cantidadAprobados;
    int cantidadDesaprobados;
    int cantidadAFinal;
    printf("\nIngrese el valor minimo para los aprobados.");
    scanf("%d", &minimo);
    printf("\nIngrese el valor maximo para los aprobados.");
    scanf("%d", &maximo);
    cantidadAprobados= RetornarCantidadEntreNotas(lista, tam, minimo, maximo);
    printf("\nIngrese el valor minimo para los desaprobados.");
    scanf("%d", &minimo);
    printf("\nIngrese el valor maximo para los desaprobados.");
    scanf("%d", &maximo);
    cantidadDesaprobados = RetornarCantidadEntreNotas(lista, tam, minimo, maximo);
    printf("\nIngrese el valor minimo para los que van a final.");
    scanf("%d", &minimo);
    printf("\nIngrese el valor maximo para los que van a final.");
    scanf("%d", &maximo);
    cantidadAFinal = RetornarCantidadEntreNotas(lista, tam, minimo, maximo);
    mayor = retornarMayor(lista, tam);
    menor = retornarMenor(lista, tam);
    cantidadDePares = retornarCantidadDePares(lista, tam);
    promedio = retornarPromedio(lista, tam);
    sumaTotal = retornarTotal(lista, tam);

    printf("\nLa nota mayor es: %d", mayor);
    printf("\nLa nota menor es: %d", menor);
    printf("\nLa cantidad de notas pares es: %d", cantidadDePares);
    printf("\nEl promedio es: %.2f", promedio);
    printf("\nLa suma total es: %d", sumaTotal);
    printf("\nLa cantidad de aprobados es: %d", cantidadAprobados);
    printf("\nLa cantidad de desaprobados es: %d", cantidadDesaprobados);
    printf("\nLa cantidad de los que van a final es: %d", cantidadAFinal);


}

void mostrarListado(int lista[], int tam)
{
    for(int i = 0; i< tam; i++)
    {
        printf("\nLa nota es: %d", lista[i]);
    }
}
int retornarMayor(int lista[], int tam)
{
    int mayor;
    for (int i = 0; i< tam; i++)
    {
        if(i == 0 || lista[i] > mayor)
        {
            mayor = lista[i];
        }
    }
    return mayor;
}
int retornarMenor(int lista[], int tam)
{
    int menor;
    for (int i = 0; i< tam; i++)
    {
        if(i == 0 || lista[i] < menor)
        {
            menor = lista[i];
        }
    }
    return menor;
}
int retornarTotal(int lista[], int tam)
{
    int sumaTotal = 0;
    for (int i = 0; i<tam; i++)
    {
        sumaTotal += lista[i];
    }
    return sumaTotal;
}
int retornarCantidadDePares(int lista[], int tam)
{
    int cantidadDePares = 0;

    for (int i = 0; i < tam; i++)
    {
        if (lista[i]%2 == 0)
        {
            cantidadDePares++;
        }
    }
    return cantidadDePares;
}
float retornarPromedio(int lista[],int tam)
{
    float promedio;
    int sumaTotal;

    sumaTotal= retornarTotal(lista, tam);
    promedio = sumaTotal/tam;

    return promedio;
}

void cargarListado (int lista[], int tam)
{
    int numeroIngresado;
    for (int i = 0; i< CANTIDAD; i++)
    {
        printf("ingrese nota. \n");
        scanf("%d", &numeroIngresado);
        lista[i]=numeroIngresado;
    }
}
int RetornarCantidadEntreNotas(int lista[], int tam, int limiteInferior, int limiteSuperior)
{
    int cantidad = 0;

    for (int i = 0; i < tam; i++)
    {
        if (lista[i] <= limiteSuperior && lista[i] >= limiteInferior)
        {
            cantidad++;
        }
    }
    return cantidad;
}

















/*



#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD 5

int retornarTotal(int*, int);
float retornarPromedio(int*,int);
void cargarListado (int*, int);
int main()
{
    int* listadoDeNotas;
    int mayor;
    int menor;
    int sumaTotal;
    float promedio;

    cargarListado(listadoDeNotas, CANTIDAD);

    for (int i = 0; i< CANTIDAD; i++)
    {
        printf("\nLa nota es: %d", *(listadoDeNotas+i));
    }
    for (int i = 0; i< CANTIDAD; i++)
    {
        if(i == 0 || *(listadoDeNotas+i) > mayor)
        {
            mayor = *(listadoDeNotas+i);
        }
    }
    for (int i = 0; i< CANTIDAD; i++)
    {
        if(i == 0 || listadoDeNotas[i] < menor)
        {
            menor = listadoDeNotas[i];
        }
    }
    sumaTotal = retornarTotal(listadoDeNotas, CANTIDAD);
    promedio = retornarPromedio(listadoDeNotas, CANTIDAD);

    printf("\nEl mayor es: %d", mayor);
    printf("\nEl menor es: %d", menor);
    printf("\nLA suma total es: %d", sumaTotal);
    printf("\nEl promedio es: %.2f", promedio);
    return 0;
}
int retornarTotal(int lista[], int tam)
{
    int sumaTotal = 0;
    for (int i = 0; i<tam; i++)
    {
        sumaTotal += lista[i];
    }
    return sumaTotal;
}


float retornarPromedio(int lista[],int tam)
{
    float promedio;
    int sumaTotal;

    sumaTotal= retornarTotal(lista, tam);
    promedio = sumaTotal/tam;

    return promedio;
}

void cargarListado (int lista[], int tam)
{
    int numeroIngresado;
    for (int i = 0; i< CANTIDAD; i++)
    {
        printf("ingrese nota. \n");
        scanf("%d", &numeroIngresado);
        lista[i]=numeroIngresado;
    }
}
*/
