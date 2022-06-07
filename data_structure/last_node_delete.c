#include <stdio.h>
#include <stdlib.h>

struct node
{
    //this structure is used for making nodes means: -
    //it is the data type which store one variable and one pointer of link list.
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
}
struct node *deletlast(struct node *head)
{
    struct node *p = head;
    struct node *q = p->ptr;
    while (q->ptr != NULL)
    {
        p = p->ptr;
        q = p->ptr;
    }
    p->ptr = NULL;
    free(q);

    return head;
}

int main()
{
    //these are the pointers of node type located in stack.
    //these pointers point the node variables located in heap.
    struct node *one;
    struct node *two;
    struct node *three;
    struct node *four;
    struct node *five;
    struct node *six;

    //giving the address to the stack pointers of the node variables located in heap
    one = (struct node *)malloc(sizeof(struct node));
    two = (struct node *)malloc(sizeof(struct node));
    three = (struct node *)malloc(sizeof(struct node));
    four = (struct node *)malloc(sizeof(struct node));
    five = (struct node *)malloc(sizeof(struct node));
    six = (struct node *)malloc(sizeof(struct node));

    //updating the values of heap variables with the help of stack pointers using dereferencing operator.
    one->data = 14;
    one->ptr = two;

    two->data = 15;
    two->ptr = three;

    three->data = 16;
    three->ptr = four;

    four->data = 17;
    four->ptr = five;
    
    five->data = 18;
    five->ptr = six;
    //the last node.
    six->data = 19;
    six->ptr = NULL;
    //calling the print function to traverse and print the nodes.
    //giving the address of first node in the print function.
    print(one);
    printf("\n");
    one = deletlast(one);
    print(one);
    return 0;
}