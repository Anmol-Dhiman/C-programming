#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *ptr;
};

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

struct node *reverse(struct node *head)
{
    struct node *prev = NULL;
    struct node *p = head;
    struct node *q = p->ptr;
    while (q!=head)
    {
        
    }
    
}

int main()
{
    //  making the linklist of four node.
    struct node *first;
    struct node *third;
    struct node *second;
    struct node *fourth;

    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    first->data = 14;
    first->ptr = second;

    second->data = 15;
    second->ptr = third;

    third->data = 16;
    third->ptr = fourth;

    fourth->data = 17;
    fourth->ptr = NULL;
    print(first);

    first = reverse(first);
    print(first);

    return 0;
}