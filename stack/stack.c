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
    else("Empty Stack\n");
}
int main()
{
    push(10);
    peek();
    push(20);
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    peek();
    pop();
    pop();
    peek();
    return 0;
}
