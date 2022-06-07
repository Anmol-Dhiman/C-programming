#include <stdio.h>
#include <stdlib.h>
struct node
{
    // node data type
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
    struct node *p = head;
    struct node *q = NULL;
    struct node *r = NULL;
    while (p != NULL)
    {
        r = p->ptr;
        p->ptr = q;
        q = p;
        p = r;
    }
    head = q;
    return head;
}
int main()
{
    // making the linklist
    struct node *first;
    struct node *second;
    struct node *third;
    struct node *fourth;
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    first->data = 12;
    first->ptr = second;

    second->data = 13;
    second->ptr = third;

    third->data = 14;
    third->ptr = fourth;

    fourth->data = 15;
    fourth->ptr = NULL;
    print(first);

    first = reverse(first);
    print(first);
    return 0;
}