#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED
#define DATO_INVALIDO -1
#define false 0
#define true 1


int mostrarArray(int* pArray, int limite);

int calcularMaximoArray(int* pArray, int limite, int* pMaximo);
int initArray(int* pArray, int limite, int valor);

int array_minimoDesde (int* pArray, int limite, int desde, int* pMinimo);
int array_reordenar (int* pArray, int limite, int orden);
void swap (int* elementoA, int* elementoB);
int array_reordenar2 (int* pArray, int limite, int orden);
#endif // ARRAY_H_INCLUDED
