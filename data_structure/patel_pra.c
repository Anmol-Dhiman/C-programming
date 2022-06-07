#include <stdio.h>
#include <malloc.h>
struct stack
{
    int size;
    int top;
    int *arr;
};

void print(struct stack *a)
{
    for (int i = 0; i <= a->top; i++)
    {
        printf("%d ", a->arr[i]);
    }
    printf("\n");
}
int isfull(struct stack *a)
{
    if (a->top == a->size - 1)
    {
        return 1;
    }
    return 0;
}
void insert(struct stack *a, int val)
{
    if (isfull(a))
    {
        printf("stack overflow\n");
    }
    else
    {
        a->top++;
        a->arr[a->top] = val;
    }
}
int main()
{
    struct stack *s;
    //a general case.
    s->size = 80;
    s->top = -1;
    // memory is allocated in the stack.
    s->arr = (int *)malloc(s->size * sizeof(int));
    
    insert(s, 1);
    insert(s, 3);
    insert(s, 4);
    insert(s, 5);
    print(s);
    return 0;
}