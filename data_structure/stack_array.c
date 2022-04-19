// this stack code is based on the array so we need three things one is the size of
// array and the top which will help us to find whether the stack is empty or full
// and one is a pointer variable which will point the dynamic memory allocated in stack
// memory

#include <stdio.h>
#include <stdlib.h>

struct stack
{
    // makint the data type of stack.
    int size;
    int top;
    int *arr;
};
int emptyStack(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    return 0;
}
int fullStack(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    return 2;
}

int main()
{
    struct stack *s;
    //a general case.
    s->size = 80;
    s->top = -1;
    // memory is allocated in the stack.
    s->arr = (int *)malloc(s->size * sizeof(int));
    // function to find whether the stack is empty or not.
    s->arr[0] = 3;
    s->top++;

    int count = emptyStack(s);
    if (count)
    {
        printf("the stack is empty\n");
    }
    else if (count == 0)
    {
        printf("the stack is not empty\n");
    }
    // function call to find whether the stack is full or not

    int count2 = fullStack(s);
    if (count2 == 1)
    {
        printf("the stack is full\n");
    }

    else if (count2 == 2)
    {
        printf("the stack is not full\n");
    }

    return 0;
}

