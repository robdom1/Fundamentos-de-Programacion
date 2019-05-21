#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int TamP();
void ValP(int*,int);
void ordenarinserccion(int,int*);
void mostrarvals(int*, int);

int main()
{
    int *p, n=0,i;

    n = TamP();

    p = calloc(n,sizeof(int));

    ValP(p,n);

    system("cls");

    mostrarvals(p,n);

    ordenarinserccion(n,p);

    mostrarvals(p,n);

    return 0;
}


int TamP(){

    int n;

    do{
        printf("Ingrese el tama%co del arreglo: ",164);
        scanf("%d",&n);

        if(n<0)
            printf("Por favor ingrese un n%cmero v%lido",163,160);

    }while(n<0);

    printf("\n");

    return n;
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

void ordenarinserccion(int n,int *p){

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
