#include <stdio.h>
#include <stdlib.h>
// this program is to push value in the stack made by array.
struct stack
{
    int size;
    int top;
    int *arr;
};
void push(struct stack *ptr, int value)
{
    // incrementing top to get the index of that variable in which we want to
    // enter the value
    ptr->top++;
    // entering the value
    ptr->arr[ptr->top] = value;
}

int main()
{
    struct stack *s;
    s->size = 80;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    //  taking the input from the user to enter the value.
    int a;
    printf("enter the value: ");
    scanf("%d", &a);
    push(s, a);

    return 0;
}