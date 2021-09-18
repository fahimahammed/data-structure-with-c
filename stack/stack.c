#include<stdio.h>

#define CAPACITY 5
int stack[CAPACITY];
int index = -1;

// push operation
int push(int n)
{
    if(index < CAPACITY - 1){
        index = index + 1;
        stack[index] = n;
        printf("\n--------------------------------\n");
        printf("Successfully added item: %d", stack[index]);
        printf("\n--------------------------------\n");
    }
    else{
        printf("\n--------------------------------\n");
        printf("Stack Overflow..");
        printf("\n--------------------------------\n");
    }
}

// pop
int pop()
{
    if(index >= 0){
        printf("\n--------------------------------\n");
        printf("Pop item: %d", stack[index]);
        printf("\n--------------------------------\n");
        index = index - 1;
    }
    else{
        printf("\n--------------------------------\n");
        printf("Empty Stack");
        printf("\n--------------------------------\n");
    }
}

int peek()
{
    if(index >= 0){
        printf("\n--------------------------------\n");
        printf("Peek: %d", stack[index]);
        printf("\n--------------------------------\n");
    }
    else{
        printf("\n--------------------------------\n");
        printf("Empty Stack");
        printf("\n--------------------------------\n");
    }
}

void options()
{
    printf("\nChoose Option\n");
    printf("\t1. Push\n");
    printf("\t2. Pop\n");
    printf("\t3. Peek\n");
    printf("\t0. Exit\n");
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
            printf("\nWrong input.");
            printf("\n--------------------------------\n");
        }
    }
    return 0;
}
