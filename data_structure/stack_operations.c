// this code includes the isfull, isempty, pop and push operations of the stack

#include <stdio.h>
#include <stdlib.h>
struct stack

{
    // stack data type
    int size;
    int top;
    int *arr;
};
int isfull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    return 0;
}
int isempty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    return 0;
}
void push(struct stack *ptr, int value)
{

    if (isfull(ptr))
    {
        printf("Stack Overflow\n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}
int pop(struct stack *ptr)
{
    if (isempty(ptr))
    {
        printf("Stack underflow\n");
        return -1;
    }
    else
    {
        int va = ptr->arr[ptr->top];
        ptr->top--;
        return va;
    }
}
int peek(struct stack *ptr, int index)
{
    // code to print the value of stack in LIFO format
    if (ptr->top - index + 1 < 0)
    {
        printf("the index is not valid\n");
        return -1;
    }
    else
    {
        return ptr->arr[ptr->top - index + 1];
    }
}

int stacktop(struct stack *ptr)
{
    // find the last element of the stack
    if (isempty(ptr))
    {
        printf("the stack is empty: \n");
        return -1;
    }
    return ptr->arr[ptr->top];
}
int stackbottom(struct stack *ptr)
{
    // find the first element of the stack
    if (isempty(ptr))
    {
        printf("the stack is empty: \n");
        return -1;
    }
    return ptr->arr[0];
}

int main()
{
    // pointer which will point the dynamic memory in the heap of stack data type
    struct stack *s;
    // memory has been allocated
    s = (struct stack *)malloc(sizeof(struct stack));
    // the size of array
    s->size = 10;
    // a variable which will help to find the index of array variable in which we have to
    // perform the operations
    s->top = -1;
    // dynamic memory for array has been allocated in the heap
    s->arr = (int *)malloc(s->size * sizeof(int));
    // checking whether the stack is empty or full
    printf("befor push full: %d\n", isfull(s));
    printf("befor push emty: %d\n", isempty(s));
    // pushing some of the value in the stack
    push(s, 216);
    push(s, 214);
    push(s, 1);
    push(s, 2);
    push(s, 223);
    push(s, 56);
    push(s, 95);
    push(s, 87);
    push(s, 64);
    push(s, 12);
    //again checking the whether the stack is empty or full.
    // 1 means full and 0 means not full.
    printf("After push full: %d\n", isfull(s));
    // 1 means empty and 0 means not empty
    printf("After push emty: %d\n", isempty(s));
    // poping the values form the stack in LIFO format
    printf("%d\n", pop(s));
    printf("%d\n", pop(s));
    printf("%d\n", pop(s));
    printf("%d\n", pop(s));
    printf("%d\n", pop(s));
    printf("%d\n", pop(s));
    printf("%d\n", pop(s));
    printf("%d\n", pop(s));

    for (int i = 1; i <= s->top + 1; i++)
    {
        printf("%d\n", peek(s, i));
    }
     printf("the last element: %d\n",stacktop(s));
     printf("the first element: %d\n",stackbottom(s));

    return 0;
}