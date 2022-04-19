// DEqueue in which we can add or remove the data form both the sides
// it has two types: -
// 1. restricted input DEqueue, in which we cannot give input form the front
// 2. restricted output DEqueue, in which we cannot remove form the end
#include <stdio.h>
#include <stdlib.h>
struct queue
{
    // it's data typeis same as the normal queue built using array
    int size;
    int f;
    int r;
    int *arr;
};

int isfull(struct queue *ptr)
{
    // condition for the full queue
    if (ptr->r == ptr->size - 1)
    {
        return 1;
    }
    return 0;
}

void equeue(struct queue *p, int val)
{
    // adding the elements form the back just like the normal queue.
    if (isfull(p))
    {
        printf("queue overflow\n");
    }
    else
    {
        p->r++;
        p->arr[p->r] = val;
    }
}

void traverse(struct queue *ptr)
{
    // printing the elements of the queue
    for (int i = ptr->f + 1; i <= ptr->r; i++)
    {
        printf("%d ", ptr->arr[i]);
    }
    printf("\n");
}

void forntequeue(struct queue *ptr, int val)
{
    // adding the elements form the fornt side of the queue
    if (ptr->f == -1)
    {
        printf("no space in the fornt side\n");
    }
    else
    {
        ptr->arr[ptr->f] = val;
        ptr->f--;
    }
}

int isempty(struct queue *ptr)
{
    // queue empty condition
    if (ptr->f == ptr->r)
    {
        return 1;
    }
    return 0;
}

void dqueue(struct queue *ptr)
{
    // removing the elements form the front just like the normal way
    if (isempty(ptr))
    {
        printf("queue under flow\n");
    }
    else
    {
        ptr->f++;
    }
}

void backdqueue(struct queue *ptr)
{
    // removing the elements form the back of queue
    if (isempty(ptr))
    {
        printf("queue under flow\n");
    }
    else
    {
        ptr->r--;
    }
}

int main()
{
    // dynamic memory allocation for the array, used to built the queue
    struct queue *sp;
    sp = (struct queue *)malloc(sizeof(struct queue));
    sp->size = 10;
    sp->f = sp->r = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    equeue(sp, 12);
    equeue(sp, 141);
    equeue(sp, 1);
    equeue(sp, 17);
    equeue(sp, 16);
    printf("adding form the back\n");
    traverse(sp);
    printf("removing form the front\n");
    dqueue(sp);

    traverse(sp);
    printf("adding from the fornt\n");
    forntequeue(sp, 12323);
    traverse(sp);
    printf("removing from the back\n");
    backdqueue(sp);
    traverse(sp);
    return 0;
}