#include<stdlib.h>

#ifndef _Colash
#define _Colash

typedef struct
{
   float *elementos;
   int tamano;
   int primerIndice;
   int ultimoIndice;
   int cantidad;

}Cola;

Cola* InicializarCola();
void enqueue(Cola*, float);
float dequeue(Cola*);
int TamanoCola(Cola*);
void VerificarEspacio(Cola*);
short isEmpty(Cola*);
float getFront(Cola*);





#endif // _Colash
