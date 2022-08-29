#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 int i, j, aux;
 int tam = 1000;

void BubbleSort (int vet[], int tam) {                  //COMPARA OS NÚMEROS DO VETOR, ORGANIZANDO-OS DO MENOR PARA O MAIOR, UTILIZANDO A FUNÇÃO BUBBLESORT


    for (i = 1; i < tam; i++) {


    for (j = 0; j < tam - 1; j++) {


    if (vet[j] > vet[j + 1]) {
        aux          = vet[j];
        vet[j]     = vet[j + 1];
        vet[j + 1] = aux;
            }
        }
    }

}

int dividir(int vetq[],int esq, int dir){             //COMPARA OS NÚMEROS DO VETOR, ORGANIZANDO-OS DO MENOR PARA O MAIOR, UTILIZANDO A FUNÇÃO QUICKSORT
    int copy;
    int cont = esq;

    for(int z=esq+1 ; z<=dir ; z++){

        if( vetq[z] < vetq[esq] ){
            cont++;
            copy=vetq[z];
            vetq[z]=vetq[cont];
            vetq[cont]=copy;
        }
    }

    copy=vetq[esq];
    vetq[esq]=vetq[cont];
    vetq[cont]=copy;

    return cont;
}

void quick(int vetq[],int esq, int dir){
    int pos;
    if(esq < dir){
        pos = dividir(vetq,esq,dir);
        quick(vetq,esq,pos-1);
        quick(vetq,pos+1,dir);
    }
}








int main(void){                                            //GERA O VETOR E EXIBE AS INFORMAÇÕES NA TELA
    int vetq[tam];
    int vet[tam];
    int endereco;
    float soma, media, mediana;
    int maior;
    int menor;

    int EnderecoDaMediana = tam/2;

        srand(time(NULL));

            for(i = 0; i < tam; i++){
                vet[i] = rand();
                vetq[i] = vet[i];
                }

                printf(" VET SEM ORDEM: \t");

            for (endereco=0; endereco<tam; endereco ++){                          //VET SEM ORDEM

                printf("%d\t", vet[endereco]);
}
                printf("\n");


    BubbleSort(vet, tam);
    quick(vetq,0,tam);




                printf("\n\n VET BUBBLESORT:\t");                                //VET BUBBLE

            for (endereco=0; endereco<tam; endereco ++){

                printf("%d\t", vet[endereco]);
}


                printf("\n\n\n VET QUICKSORT:\t\t");                            //VET QUICK

            for (endereco=0; endereco<=tam; endereco ++){

                printf("%d\t", vetq[endereco]);


}

            for(endereco=0;endereco<tam; endereco++){

                soma = soma + vet[endereco];
    }
                media = soma/tam;

                printf("\n\n\n MEDIA DOS VALORES DO VETOR = %f", media);



        mediana = (vet[EnderecoDaMediana-1]+vet[EnderecoDaMediana])/2;


                printf("\n\n\n MEDIANA = %f", mediana);


        maior = vet[tam-1];


                printf("\n\n\n MAIOR VALOR = %d", maior);


        menor = vet[0];

                printf("\n\n\n MENOR VALOR = %d", menor);

                printf("\n\n\n");





system("pause");



return 0;




}
