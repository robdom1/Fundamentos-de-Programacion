#include <stdio.h>
#include <stdlib.h>
#include "colas.h"
#include <conio.c>

typedef enum{

    Encolar = 1,
    Decolar = 2,
    MostrarTodo = 3,
    Salir = 4

}eOpcionesMenu;

typedef enum{
    Arriba,
    Abajo,
    Izquierda,
    Derecha,
    Enter,
    Ninguno = -1

}eFlecha;

eOpcionesMenu MostraMenu();
eFlecha CapturarFlecha();

///COLAS
int main()
{
    eOpcionesMenu opcionSeleccionada;
    float NuevoValor;
    char opcion;
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
                seleccion = Encolar ? seleccion = Salir : seleccion--;
                break;
            case Abajo:
                seleccion = Salir ? seleccion = Encolar : seleccion++;
                break;
            case Enter:
                return seleccion;
            default:
                continue;
        }

    }while(1);


}


eFlecha CapturarFlecha(){

    fflush(stdin);
    if(getch() == 13)
        return Enter;
    switch(getch())
    {
        case 72:
            return Arriba;
        case 80:
            return Abajo;
        case 77:
            return Derecha;
        case 75:
            return Izquierda;
        default:
            return Ninguno;
    }
    getch();
}
