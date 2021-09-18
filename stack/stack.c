#include<stdio.h>

#define CAPACITY 5
int stack[CAPACITY];
int index = -1;

// push
int push(int n)
{
    if(index < CAPACITY - 1){
        index = index + 1;
        stack[index] = n;
        printf("\n--------------------------------\n");
        printf("Successfully added item: %d\n", stack[index]);
        printf("\n--------------------------------\n");
    }
    else{
        printf("\n--------------------------------\n");
        printf("Stack Overflow..\n");
        printf("\n--------------------------------\n");
    }
}

// pop
int pop()
{
    if(index >= 0){
        printf("\n--------------------------------\n");
        printf("Pop item: %d\n", stack[index]);
        printf("\n--------------------------------\n");
        index = index - 1;
    }
    else{
        printf("\n--------------------------------\n");
        printf("Empty Stack\n");
        printf("\n--------------------------------\n");
    }
}

int peek()
{
    if(index >= 0){
        printf("\n--------------------------------\n");
        printf("Peek: %d\n", stack[index]);
        printf("\n--------------------------------\n");
    }
    else{
        printf("\n--------------------------------\n");
        printf("Empty Stack\n");
        printf("\n--------------------------------\n");
    }
}

void options()
{
    printf("\nChoose Option\n");
    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. Peek\n");
    printf("0. Exit\n");
}


int main()
{
    printf("Stack capacity: %d\n", CAPACITY);
    printf("--------------------------------");
    while(1){
        int n, value;
        options();
        printf("Enter your choice option num: ");
        scanf("%d", &n);
        if(n == 0){
            break;
        }
        else if(n == 1){
            printf("\nEnter a number to PUSH: ");
            scanf("%d", &value);
            push(value);
        }
        else if(n == 2){
            pop();
        }
        else if(n == 3){
            peek();
        }
        else{
            printf("\n--------------------------------\n");
            printf("\nWrong input\n");
            printf("\n--------------------------------\n");
        }
    }
    return 0;
}
