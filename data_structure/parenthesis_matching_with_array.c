#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    char *arr;
};

int main()
{
    struct stack *s;
    s->size = 100;
    s->top = -1;
    s->arr = (char *)malloc(sizeof(char));

    return 0;
}