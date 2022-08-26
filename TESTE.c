#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int i;
    int vet[1000];

    srand(time(NULL));

    for(i = 0; i < 1000; i++)
        vet[i] = rand();

    printf("\n\n");
    for(i = 0; i < 1000; i++)
        printf("%d ", vet[i]);
    printf("\n\n");

    return 0;
}
