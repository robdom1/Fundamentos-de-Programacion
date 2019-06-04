#include <stdio.h>
#include <stdlib.h>
#include "colas.h"
#include <conio.c>

typedef enum{

    Encolar = 1,
    Decolar = 2,
    MostrarTodo = 3;
    Salir = 0

}eOpcionesMenu;

typedef enum{
    Arriba,
    Abajo,
    Izquierda,
    Derecha

}eFlecha;

eOpcionesMenu MostraMenu();
eFlecha CapturarFlecha();

///COLAS
int main()
{
    eOpcionesMenu opcionSeleccionada;
    float
    Cola *nuevaCola = InicializarCola();

   do{
        fflush(stdin);


   }while(nuevoValor != 0)

    while(!isEmpty(nuevaCola))
        printf("%.2f\t", dequeue(nuevaCola));

    return 0;
}

eOpcionesMenu MostrarMenu(){

    eOpcionesMenu seleccion;
    _setcursortype(0);


    fflush(stdin);
    do{

        textbackground(seleccion == Encolar ? WHITE : BLACK);
        printf("\t1: Agregar valor.\n");
        textbackground(seleccion == Decolar ? WHITE : BLACK);
        printf("\t2: Mostrar valor.\n");
        textbackground(seleccion == MostrarTodo ? WHITE : BLACK);
        printf("\t3: Mostrar todos los valores.\n");
        textbackground(seleccion == Salir ? WHITE : BLACK);
        printf("\t0: Salir.\n");


        switch(CapturarFlecha())
        {
            case Arriba:
                seleccion = Encolar;
                break;
            case Abajo:
                seleccion = Decolar;
                break;
            default:
                continue;


    }while(1);


}


eFlecha CapturarFlecha(){

    fflush(stdin);
    getch();
    getch();
    switch(getch())
    {
        case 'A':
            return Arriba;
        case 'B':
            return Abajo;
        case 'C':
            return Derecha;
        case 'D':
            return Izquierda;
        default:
            return Ninguno;

    }

}
