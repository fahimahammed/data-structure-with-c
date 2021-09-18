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
        printf("Successfully added item: %d\n", stack[index]);
    }
    else{
        printf("Stack Overflow..\n");
    }
}

// pop
int pop()
{
    if(index >= 0){
        printf("Pop item: %d\n", stack[index]);
        index = index - 1;
    }
    else{
        printf("Empty Stack\n");
    }
}

int peek()
{
    if(index >= 0){
        printf("Peek: %d\n", stack[index]);
    }
    else{
        printf("Empty Stack\n");
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
    printf("Stack capacity: %d", CAPACITY);
    while(1){
        int n, value;
        options();
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
            printf("\nWrong input\n");
        }
    }
    return 0;
}
