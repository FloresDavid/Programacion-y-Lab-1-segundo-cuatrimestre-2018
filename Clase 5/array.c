#include <stdio.h>
#include "array.h"

int mostrarArray(int* pArray, int limite)
{
    int i;
    for(i=0;i<limite;i++)
    {
        printf("\nIndex:%d - Value:%d - Add: %p",i,pArray[i],&pArray[i]);

    }
    return 0;
}
int calcularMaximoArray(int* pArray, int limite, int* pMaximo)
{
    int retorno=-1;
    int i;

    int maximo;
    int flagPrimerMaximo = false;

    if(pArray != NULL && limite > 0)
    {

        for(i=0;i<limite;i++)
        {
            if(pArray[i] != DATO_INVALIDO)
            {
                if(flagPrimerMaximo == false)
                {
                    maximo = pArray[i];
                    flagPrimerMaximo = true;
                }
                else if(pArray[i] > maximo)
                {
                    maximo = pArray[i];
                }
            }
        }

        if(flagPrimerMaximo == 0)
        {
            retorno = -2;
        }
        else
        {
            retorno = 0;
        }
    }
    return retorno;
}

int initArray(int* pArray, int limite, int valor)
{
    int retorno=-1;
    int i;
    if(pArray != NULL && limite > 0)
    {
        for(i=0;i<limite;i++)
        {
            pArray[i] = valor;
        }
        retorno = 0;
    }
    return retorno;
}
int array_minimoDesde (int* pArray, int limite, int desde, int* pMinimo)
{
    int retorno = -1;
    int auxValorMinimo;
    int auxIndiceMinimo;

    if (pArray != NULL && limite > 0 && limite >= desde && desde >= 0 && pMinimo != NULL)
    {
        for(int i=desde; i<limite;i++)
        {
            if (i == desde || pArray[i] < auxValorMinimo)
            {
                auxIndiceMinimo = i;
                auxValorMinimo = pArray[i];
            }
        }
        *pMinimo = auxIndiceMinimo;
        retorno = 0;
    }
    return retorno;
}
int array_maximoDesde (int* pArray, int limite, int desde, int* pMaximo)
{
    int retorno = -1;
    int auxValorMaximo;
    int auxIndiceMaximo;

    if (pArray != NULL && limite > 0 && limite >= desde && desde >= 0 && pMaximo != NULL)
        {
            for(int i=desde; i<limite; i++)
            {
                if (i == desde || pArray[i] > auxValorMaximo)
                {
                    auxIndiceMaximo = i;
                    auxValorMaximo = pArray[i];
                }
            }
            *pMaximo = auxIndiceMaximo;
            retorno = 0;
        }
    return retorno;
}
void swap (int* elementoA, int* elementoB)
{
    int auxiliar;

    auxiliar = *elementoA;
    *elementoA = *elementoB;
    *elementoB = auxiliar;
}
int array_reordenar (int* pArray, int limite, int orden)
{
    int retorno = -1;
    int auxIndiceMinimo;
    int auxIndiceMaximo;

    if (orden == 1)
    {
        if (pArray != NULL && limite > 0)
        {
            for(int j=0; j<limite; j++)
            {
                //BUSCAR MINIMO DESDE UNA POSICION
                array_minimoDesde(pArray, limite, j, &auxIndiceMinimo);
                //SWAP
                swap(pArray+j, pArray+auxIndiceMinimo);
            }
            retorno = 0;
        }
    }
    else
    {
        if (pArray != NULL && limite > 0)
        {
            for(int j=0; j<limite; j++)
            {
                array_maximoDesde(pArray, limite, j, &auxIndiceMaximo);
                //SWAP
                swap(pArray+j, pArray+auxIndiceMaximo);
            }
            retorno = 0;
        }

    }
    return retorno;
}
int array_reordenar2 (int* pArray, int limite, int orden)
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
                if ((orden == 1 && pArray[i] < pArray[i+1]) || (orden == 2 && pArray[i] > pArray[i+1]))
                {
                    flagSwap = 1;
                    swap(pArray+i, pArray+i+1);
                }
            }

            }while (flagSwap);
    }
    return retorno;
}
