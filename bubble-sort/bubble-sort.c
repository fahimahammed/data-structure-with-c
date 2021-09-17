#include<stdio.h>

void swap(int *l, int *r)
{
    int temp;
    temp = *l;
    *l = *r;
    *r = temp;
}

void bubbleSort(int array[], int size)
{
    int i, j;
    for(i = 0; i < size-1; i++){
        for(j = 0; j < size-i-1; j++){
            if(array[j] > array[j+1])
                swap(&array[j], &array[j+1]);
        }
    }

}

void printArray(int array[], int size)
{
    int i;
    for(i=0; i<size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main()
{
    int array[100], array_size;
    printf("Enter array size: ");
    scanf("%d", &array_size);

    printf("Enter elements of array: ");
    for(int i = 0; i<array_size; i++){
        scanf("%d", &array[i]);
    }

    printf("\nGiven array: ");
    printArray(array, array_size);

    bubbleSort(array, array_size);

    printf("\nSorted array: ");
    printArray(array, array_size);

    return 0;
}
