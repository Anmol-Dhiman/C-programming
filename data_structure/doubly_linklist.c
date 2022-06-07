#include <stdio.h>
#include <stdlib.h>
struct node
{
    //data type for the doubly linklist.
    struct node *prev;
    int data;
    struct node *next;
};

void print_front(struct node *head)
{
    // printing the node form the front.
    struct node *p = head;
    // this loop will assign the null in p.
    while (p != NULL)
    {

        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}
void print_end(struct node *head)
{
    struct node *p = head;
    // this loop will assign the address of last node in p.
    while (p->next != NULL)
    {
        p = p->next;
    }
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->prev;
    }

    printf("\n");
}

int main()
{
    struct node *one;
    struct node *two;
    struct node *three;

    one = (struct node *)malloc(sizeof(struct node));
    two = (struct node *)malloc(sizeof(struct node));
    three = (struct node *)malloc(sizeof(struct node));
    // the first node.
    one->prev = NULL;
    one->data = 12;
    one->next = two;
    // second node.
    two->prev = one;
    two->data = 13;
    two->next = three;
    // third and the last node.
    three->prev = two;
    three->data = 14;
    three->next = NULL;
    print_front(one);
    print_end(one);

    return 0;
}