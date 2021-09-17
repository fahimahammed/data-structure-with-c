#include<stdio.h>

// search function...
void search(int Array[], int array_size, int search_num)
{
    int i;
    for(i=0; i<array_size; i++){
        if(Array[i] == search_num){
            printf("\n%d is found at index %d\n", search_num, i);
            break;
        }
    }
    if(array_size==i){
        printf("\n%d is not found\n", search_num);
    }
}


// print array function...
void printArray(int array[], int array_size)
{
    int i;
    for(i = 0; i<array_size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main()
{
    int Array[100], n, search_num, i;
    printf("Enter the array size: ");
    scanf("%d", &n);

    printf("\nEnter array elements: ");
    for (i =0 ; i<n; i++){
        scanf("%d", &Array[i]);
    }

    printf("\nEnter a number for search: ");
    scanf("%d", &search_num);

    printf("\nGiven array: ");
    printArray(Array, n);

    search(Array, n, search_num);
    return 0;
}
