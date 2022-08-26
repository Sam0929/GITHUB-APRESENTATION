#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int i;
    int tam;
    int copy;
    int vet[10];
    tam = 10;

    srand(time(NULL));

    for(i = 0; i < tam; i++)
        vet[i] = rand();
        printf("\n\n");

    for(i = 0; i < tam; i++)

        printf("%d ", vet[i]);
        printf("\n\n");

    for(i=0; i < tam; i++){

        if(vet[i]> vet [i+1]){

            copy = vet[i];
            vet[i]= vet[i+1];
            vet[i+1] = copy;


        }
    }


    for(i = 0; i < tam; i++){

        printf("%d ", vet[i]);

    }





    return 0;
}
