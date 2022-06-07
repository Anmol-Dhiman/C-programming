#include <stdio.h>
#include <stdlib.h>
struct node *top = NULL;

struct node
{
    // linklist data type
    int data;
    struct node *ptr;
};
int isfull(struct node *head)
{
    // checking whether the list is full or not
    // if the new node is not built with the dynamic memory then
    // it means their is no space
    struct node *n = (struct node *)malloc(sizeof(struct node));
    if (n == NULL)
    {
        return 1;
    }

    return 0;
}
void push(struct node *head, int x)
{
    // adding element to the stack
    if (isfull(head))
    {
        printf("stack overflow\n");
    }

    else
    {
        // adding the nodes in the stack
        struct node *n = (struct node *)malloc(sizeof(struct node));
        n->data = x;
        n->ptr = top;
        top = n;
    }
}
void print(struct node *p)
{

    //this function prints the link list till the last node.
    //in short traversal.
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->ptr;
    }
    printf("\n");
}
int isempty(struct node *top)
{
    // if the top is still equal to NULL it means no new node is added
    if (top == NULL)
    {
        return 1;
    }
    return 0;
}
int pop(struct node *head)
{

    if (isempty(head))
    {
        printf("stack underflow\n");
        return -1;
    }
    // new node is built to free the dynamic memory
    struct node *n = top;
    int x = n->data;
    top = n->ptr;
    free(n);
    return x;
}
int peek(struct node *head, int index)
{
    struct node *ptr = head;
    for (int i = 0; i < index - 1 && ptr != NULL; i++)
    {
        ptr = ptr->ptr;
    }
    if (ptr != NULL)
    {
        return ptr->data;
    }
    return -1;
}
int stacktop(struct node *head)
{
    return head->data;
}

int stackbottom(struct node *head)
{
    struct node *n = head;
    while (n->ptr != NULL)
    {
        n = n->ptr;
    }
    return n->data;
}
int main()
{
    int element;
    push(top, 23);
    push(top, 5);
    push(top, 8);
    push(top, 2);
    print(top);
    element = pop(top);
    printf("%d\n", element);
    element = pop(top);
    printf("%d\n", element);
    print(top);

    int pek = peek(top, 2);
    printf("%d\n", pek);
    printf("%d\n", stacktop(top));
    printf("%d\n", stackbottom(top));
    return 0;
}