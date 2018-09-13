//FUNCIONES
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define BUFFER 4096

int inicializarArray(char* lista, int tam)
{
    int retorno = -1;

    if (lista != NULL)
    {
        for (int i = 0; i < tam; i++)
        {
            //(*(lista + i)).estado = 1;
        }
        retorno = 0;
    }
    return retorno;
}
int obtenerEspacioLibre(char* lista, int tam)
{
   int indice = -1;

   for (int i = 0; i < tam; i++)
   {
        /*if ((*(lista + i)).estado == 1)
        {
            indice = i;
            break;
        }*/
   }
   return indice;
}
int validarNumero (char* numero)
{
    int esNumero = 0;
    int len;

    len = strlen(numero);

    for (int i = 0; i < len; i++)
    {
        if (isdigit(*(numero + i)) == 0)
        {
            esNumero = 1;
        }
    }
    return esNumero;
}

int validarString (char* cadena)
{
    int esNumero = 0;

    for (int i = 0; i < strlen(cadena); i++)
    {
        if (isalpha(*(cadena + i)) == 0)
        {
            esNumero = 1;
        }
    }
    return esNumero;
}
int buscarPorInt(char* lista, int tam, int entero)
{
    int indice = -1;

    for (int i = 0; i < tam; i++)
    {
/*        if ((*(lista + i)).estado == 0 && (*(lista + i)).entero == entero)
        {
            indice = i;
            break;
        }*/
    }
    return indice;
}
void ordenarPorDatoTipoChar (char* lista, int tam)
{
//    char datoAux;

    for (int i = 0; i < tam - 1; i++)
    {
        for (int j = i+1; j < tam; j++)
        {
/*            if (strcmp((*(lista + i)).dato, (*(lista + j)).dato) <> 0)
            {
                datoAux = (*(lista + i));
                (*(lista + i)) = (*(lista + j));
                (*(lista + j)) = datoAux;
            }
*/        }
    }
}
void ordenarPorDatoTipoInt(char* lista, int tam)
{
//    char datoAux;

    for (int i = 0; i < tam - 1; i++)
    {
        for (int j = i+1; j < tam; j++)
        {
/*            if ((*(lista + i)).dato <> (*(lista + j)).dato)
            {
                datoAux = (*(lista + i));
                (*(lista + i)) = (*(lista + j));
                (*(lista + j)) = datoAux;
            }
 */       }
    }
}
int ordenarEnteros (int* pArray, int limite)
{
    int retorno = -1;
    int flagSwap;

    if (pArray != NULL && limite > 0)
    {
        do
        {
            flagSwap = 0;
            for (int i=0; i<limite-1; i++)
            {
                if (pArray[i] < pArray[i+1])
                {
                    flagSwap = 1;
                    //swapeo(pArray+i, pArray+i+1);
                }
            }

            }while (flagSwap);
    }
    return retorno;
}
int pedirNumero (void)//Pide un numero y lo devuelve.
{
    int numero;

    printf("\nIngrese un numero: ");
    scanf("%d", &numero);

    return numero;
}

int sumar (int numeroUno, int numeroDos) //Devuelve la suma de los dos numeros ingresados.
{
    int suma;

    suma = numeroUno + numeroDos;

    return suma;
}

int restar (int numeroUno, int numeroDos) //Devuelve la resta del primer numero menos el segundo..
{
    int resta;

    resta = numeroUno - numeroDos;

    return resta;
}

int multiplicar (int numeroUno, int numeroDos)//Devuelve la multiplicacion de los dos numeros ingresados.
{
    int multiplicacion;

    multiplicacion = numeroUno * numeroDos;

    return multiplicacion;
}

float dividir (int numeroUno, int numeroDos)//Devuelve la division del primero numero por el segundo, solo si el segundo numero es distinto a 0.
{
        float division;

        if (numeroDos)
        {
            division = (float) numeroUno / numeroDos;
        }
        return division;
}

unsigned long factorizar (int numero)//Devuelve la factorizacion del numero.
{
    int factorial = 1;

    if (numero <= 0 && numero < 33)
    {
        for (int i = numero; i > 0; i--)
        {
            factorial = factorial * i;
        }
    }
    return factorial;
}
/*void swap (char* elementoA, char* elementoB)
{
    char* auxiliar;

    auxiliar = *elementoA;
    *elementoA = *elementoB;
    *elementoB = auxiliar;
}*/
int getString (char* pBuffer, int limite)
{
    int retorno = -1;
    int len;
    char bufferStr[BUFFER];

    if (pBuffer != NULL && limite > 0)
    {
//        __fpurge(stdin);
        fgets(bufferStr, limite, stdin);
        len = strlen(bufferStr);
        if (len != limite-1 || bufferStr[limite-2] == '\n')
        {
            bufferStr[len-1] = '\0';
        }
        strncpy(pBuffer, bufferStr, limite);
        retorno = 0;
    }
    return retorno;
}
int isValidNombre(char* pBuffer, int limite)
{
    int retorno = 0;
    if(pBuffer != NULL && limite > 0)
    {
        for (int i=0; i<limite && pBuffer[i] != '\0'; i++)
        {
            if (tolower(pBuffer[i]) < 'a' || tolower(pBuffer[i]) > 'z')
            {
                break;
            }
            else if (i == strlen(pBuffer))
            {
                retorno = 1;
            }
        }
    }
    return retorno;
}
int getNombre (char* pNombre, char* msg, char* msgError, int limite, int reintentos)
{
    int retorno = -1;
    char bufferNombre[BUFFER];

    if (pNombre != NULL && msg != NULL && msgError != NULL && limite > 0 && reintentos >= 0)
    {
        do
        {
            reintentos--;
            printf("%s", msg);
            if (getString(bufferNombre, limite) == 0 && isValidNombre(bufferNombre, limite))
            {
                strncpy(pNombre, bufferNombre, limite);
                retorno = 0;
                break;
            }
            else
            {
                printf("%s", msgError);
            }
        }while (reintentos >= 0);
    }
    return retorno;
}
