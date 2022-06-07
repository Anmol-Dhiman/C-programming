#include <stdio.h>
#include <stdlib.h>
struct node *top = NULL;
struct node
{
    int data;
    struct node *ptr;
};

void push( int value)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = value;
    n->ptr = top;
    top = n;
}
void print(struct node *head)
{
    struct node *p = head;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->ptr;
    }
    printf("\n");
}
int isempty(struct node *head)
{
    if (head == NULL)
    {
        return 1;
    }
    return 0;
}
int pop(struct node *top)
{
    int x;
    if (isempty(top))
    {
        return -1;
    }
    else
    {
        struct node *n = top;
        x = n->data;
        top = top->ptr;
        free(n);
        return x;
    }
}
int main()
{
    push(12);
    push(4);
    push(542);
    push(454);
    push(54);
    print(top);
    int element = pop(top);
    printf("%d", element);

    return 0;
}