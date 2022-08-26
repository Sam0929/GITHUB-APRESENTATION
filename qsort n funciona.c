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

# include <stdio.h>
void quicksort(int a[], int left, int right);

int msec(void)
{
    int array[5];
    for (int i=0; i<5; i++) {
        scanf("%d", &array[i]);
    }
    quicksort(array, 0, 4);
    for (int i=0; i<5; i++) {
        printf("%d\n", array[i]);
    }
    return 0;
}

void quicksort(int a[], int left, int right)
{
    int i, last;
    void swap(int v[], int i, int j);

    if (left >= right) {
        return;
    }
    swap(a, left, (left+right)/2);
    last = left;
    for (i = left + 1; i <= right; i++) {
        if (a[i] < a[left]) {

            swap(a, ++last, i);
        }
    }
    swap(a, last, left);
    quicksort(a, left, last-1);
    quicksort(a, 1+last, right);
}


void swap(int v[], int i, int j)
{
    int temp;
    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

