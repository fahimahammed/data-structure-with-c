#include<stdio.h>
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

    for(i=0; i<n; i++){
        if(Array[i] == search_num){
            printf("\n%d is found at index %d", search_num, i);
            break;
        }
    }
    if(n==i){
        printf("\n%d is not found", search_num);
    }
    return 0;
}
