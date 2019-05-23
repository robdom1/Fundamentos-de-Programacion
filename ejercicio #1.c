#include <stdio.h>
#include <stdlib.h>

void tomarmatriz(int[filas][columnas],int filas,int columnas);
void mostrarmatriz(int[filas][columnas],int filas,int columnas);
void invmatriz(int[filas][columnas],int[filas][columnas],int filas,int columnas);


int main(){

   int filas,columnas;
   int matriz[i][j],matrizinv[j][i];

   printf("Introduzca las dimensiones de la matriz: ");
   scanf("%d %d",&i,&j);

   tomarmatriz(matriz,i,j);

   system("cls");

   printf("Matriz: \n\n");

   mostrarmatriz(matriz,i,j);

   invmatriz(matriz,matrizinv,i,j);

   printf("Matriz inversa: \n\n");

   mostrarmatriz(matrizinv,j,i);




   return 0;
}

void tomarmatriz(int matriz[][],int filas,int columnas){

   int i,j;

   for(i=0; i<filas; i++){
      for(j=0; j<columnas; j++){
         printf("Inserte el valor de la posici%cn (%d,%d): ",162,i,j);
         scanf("%d",&matriz[i][j]);
         printf("\n");
      }
   }

   return;
}
