#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

void swapeo (char* elementoA, char* elementoB);
int inicializarArray(char* lista, int tam);
int obtenerEspacioLibre(char* lista, int tam);
int validarNumero (char* numero);
int validarString (char* cadena);
int buscarPorInt(char* lista, int tam, int entero);
void ordenarPorDatoTipoChar (char* lista, int tam);
void ordenarPorDatoTipoInt(char* lista, int tam);
int ordenarEnteros (int* pArray, int limite);
int pedirNumero (void);
int sumar (int numeroUno, int numeroDos);
int restar (int numeroUno, int numeroDos);
int multiplicar (int numeroUno, int numeroDos);
float dividir (int numeroUno, int numeroDos);
unsigned long factorizar (int numero);
int getString (char* pBuffer, int limite);
int getNombre (char* pNombre, char* msg, char* msgError, int limite, int reintentos);






#endif // FUNCIONES_H_INCLUDED
