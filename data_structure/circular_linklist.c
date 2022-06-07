#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *ptr;
};
void print(struct node *head)
{
    struct node *p = head;
    do
    {
        printf("%d ", p->data);
        p = p->ptr;

    } while (p != head);
    printf("\n");
}
struct node *deletefirst(struct node *head)
{
    //p is the head node.
    struct node *p = head;
    //q is the second node.
    struct node *q = p->ptr;
    //with this loop we will make the q as the last node pointer to access the last node.
    while (q->ptr != head)
    {
        q = q->ptr;
    }
    //connencting the last node with the second the to break the chain.
    q->ptr = p->ptr;
    //making secnod node as the head node because we removed the first node.
    head = q->ptr;
    //releasing the dynamic memory (the first node).
    free(p);
    return head;
}
struct node *deleteend(struct node *head)
{
    struct node *p = head;
    struct node *q = p->ptr;
    while (q->ptr != head)
    {
        p = p->ptr;
        q = q->ptr;
    }
    p->ptr = q->ptr;
    free(q);
    return head;
}

struct node *deleteindex(struct node *head, int index)
{
    struct node *p = head;
    struct node *q = p->ptr;

    int i = 0;
    while (i != index - 1)
    {
        p = p->ptr;
        q = q->ptr;
        i++;
    }
    p->ptr = q->ptr;
    free(q);

    return head;
}
int main()
{
    struct node *one;
    struct node *two;
    struct node *three;
    struct node *four;
    struct node *five;

    //giving the address to the stack pointers of the node variables located in heap
    one = (struct node *)malloc(sizeof(struct node));
    two = (struct node *)malloc(sizeof(struct node));
    three = (struct node *)malloc(sizeof(struct node));
    four = (struct node *)malloc(sizeof(struct node));
    five = (struct node *)malloc(sizeof(struct node));

    //updating the values of heap variables with the help of stack pointers using dereferencing operator.
    one->data = 14;
    one->ptr = two;

    two->data = 15;
    two->ptr = three;

    three->data = 16;
    three->ptr = four;

    four->data = 17;
    four->ptr = five;
    //the last node.
    five->data = 18;
    five->ptr = one;     
    print(one);
    //deleting the first node.

    one = deletefirst(one);
    print(one);
    one = deleteend(one);
    print(one);
    one = deleteindex(one, 2);
    print(one);
    return 0;
}