#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 int i, j, aux;

void bubble_sort (int vetor[], int tam) {                  //Compara os números do Vetor, organizando-os do menor para o maior


    for (i = 1; i < tam; i++) {


    for (j = 0; j < tam - 1; j++) {


    if (vetor[j] > vetor[j + 1]) {
        aux          = vetor[j];
        vetor[j]     = vetor[j + 1];
        vetor[j + 1] = aux;
            }
        }
    }
}


int main(void){                                            //Gera o vetor e imprime as informações na tela

    int tam = 1000;
    int vet[tam];
    int endereco;

        srand(time(NULL));

            for(i = 0; i < tam; i++){
                vet[i] = rand();
                }

                printf("VET SEM ORDEM: \t");

            for (endereco=0; endereco<tam; endereco ++){

                printf("%d\t", vet[endereco]);
}
                printf("\n");

    bubble_sort(vet, tam);

                printf("\n\nVET BUBBLESORT:\t");

            for (endereco=0; endereco<tam; endereco ++){

                printf("%d\t", vet[endereco]);
}








return 0;













}
