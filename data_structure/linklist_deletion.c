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
struct node *deletfirst(struct node *head)
{
    //p node pointer will point the head node so we can free it after the use.
    struct node *p = head;
    head = head->ptr;
    
    free(p);
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
    five->ptr = NULL;
    //calling the print function to traverse and print the nodes.
    //giving the address of first node in the print function.
    print(one);
    printf("\n");
    one = deletfirst(one);
    print(one);
    return 0;
}