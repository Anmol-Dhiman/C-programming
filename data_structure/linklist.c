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

struct node *inseratbegning(struct node *head, int data)
{

    //this function if for inserting the node in the begning.
    //making an another node and updaing its ptr with the first node of the link list.
    //and inserting the data in the ptr data.
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->ptr = head;
    return ptr;                                                       
}
struct node *insertatindex(struct node *head, int data, int index)
{
    //making a node whom we have to addup is ptr.
    //p node is the initial node.
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;
    //this while loop is to find the node of index -1;
    //and sign that node the the ptr node
    while (i != index - 1)
    {
        p = p->ptr;
        i++;
    }
    //just giving the data into the ptr node.
    ptr->data = data;
    //updating the ptr node ptr(pointer variable in the node) to that address
    //which is stored in the ptr of p so that ptr node will point the index node.
    ptr->ptr = p->ptr;
    //updating the ptr of index -1 node with that new ptr node.
    p->ptr = ptr;
    return head;
}
struct node *insertatend(struct node *head, int data)
{
    //making the node which we have to add in the last.
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    //making the node pointer which will point the first node.
    struct node *p = head;
    //this loop is the find the last second node as the ptr of that node
    //will help to use the last node.
    while (p->ptr != NULL)
    {
        p = p->ptr;
    }
    //inserting the data value in the node which we want to add.
    ptr->data = data;
    //making the ptr of last node NULL as it is the last node.
    ptr->ptr = NULL;
    //the ptr of last node will point the new node which we added in the last.
    p->ptr = ptr;
    return head;
}
//fuction to call when we know the location of any node.
void insertafternode(struct node *head, int data)
{
    //making the node which we want to insert in between.
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    //inserting the data into the new node.
    ptr->data = data;
    //giving the value of ptr of ptr node to the next node i.e. head +1.
    ptr->ptr = head->ptr;
    //updating the ptr of head node to the address of new node.
    head->ptr = ptr;
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
    one = inseratbegning(one, 13);
    printf("\n");
    print(one);
    one = insertatindex(one, 156, 3);
    printf("\n");
    print(one);
    one = insertatend(one, 123);
    printf("\n");
    print(one);
    insertafternode(three, 1234);
    printf("\n");
    print(one);

    return 0;
}