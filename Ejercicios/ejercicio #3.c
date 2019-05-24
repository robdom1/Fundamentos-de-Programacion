#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


void TamP(int*);
void ValP(int*,int);
void mostrarvals(int*, int);
void ordenarinsercion(int,int*);


int main()
{
   int *p, *n,tam;

   n = &tam;

   TamP(n);

   p = calloc(tam,sizeof(int));

   ValP(p,tam);

   system("cls");

   mostrarvals(p,tam);

   ordenarinsercion(tam,p);

   mostrarvals(p,tam);

   return 0;
}


void TamP(int *n){

   do{
      printf("Ingrese el tama%co del arreglo: ",164);
      scanf("%d",n);

      if(*n<0)
         printf("Por favor ingrese un n%cmero v%lido",163,160);

   }while(*n<0);

   printf("\n");

}

void ValP(int *p, int n){

   int i;

   for(i = 0; i < n; i++){

      printf("Valor #%d: ",i+1);

      do{
         scanf("%d",(p+i));

         if(*(p+i)< 0)
            printf("Por favor ingrese un n%cmero positivo.",163);

      }while(*(p+i)< 0);
    }

    return;

}

void mostrarvals(int *p, int n){

   int i;

   for(i = 0; i < n ; i++)
      printf(" %d ",*(p+i));

   printf("\n\n");

   return;
}

void ordenarinsercion(int n,int *p){

   int i,j,valoractual;

   for(i=1; i<n; i++){

      valoractual = *(p+i);
      j=i-1;

      while(j>=0 && *(p+j) > valoractual){

         *(p+j+1) = *(p+j);
         j--;
      }

      *(p+j+1) = valoractual;
   }
   return;
}
