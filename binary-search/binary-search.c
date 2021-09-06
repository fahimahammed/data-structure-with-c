//Binary search
#include<stdio.h>

int main()
{
    int array[100], n, i, search_num, first, last, mid;

    printf("Enter the array size: ");
    scanf("%d", &n);

    printf("\nEnter the elements of array: ");
    for(i=0; i<n; i++){
        scanf("%d", &array[i]);
    }

    printf("\nEnter a number to search: ");
    scanf("%d", &search_num);

    first = 0;
    last = n-1;
    mid = (first + last)/2;

    while(first <= last){
        if(array[mid] < search_num){
            first = mid+1;
        }
        else if(array[mid] == search_num){
            printf("\n%d is found at index %d. \n", search_num, mid);
            break;
        }
        else{
            last = mid-1;
        }
        mid = (first + last)/2;
    }
    printf("%d %d", first, last);
    if(first > last){
        printf("\n%d is not found\n", search_num);
    }
    return 0;
}
