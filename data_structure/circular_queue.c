#include <stdio.h>
#include <stdlib.h>

struct circularqueue
{
    int size;
    int *arr;
    int f;
    int r;
};

int isempty(struct circularqueue *p)
{
    if (p->f == p->r)
    {
        return 1;
    }
    return 0;
}

void traversal(struct circularqueue *ptr)
{
    if (isempty(ptr))
    {
        printf("queue underflow\n");
    }
    // traverse the queue
    for (int i = (ptr->f + 1) % ptr->size; i <= ptr->r; i = (i + 1) % ptr->size)
    {
        printf("%d\n", ptr->arr[i]);
    }
}

int isfull(struct circularqueue *p)
{
    int a = (p->r + 1) % p->size;
    if (a == p->f)
    {
        return 1;
    }
    return 0;
}

void equeue(struct circularqueue *p, int val)
{
    if (isfull(p))
    {
        printf("queue overflow\n");
    }
    p->r = (p->r + 1) % p->size;
    p->arr[p->r] = val;
}

void dqueue(struct circularqueue *p)
{
    p->f = (p->f + 1) % p->size;
}
int main()
{

    struct circularqueue *sp;
    sp = (struct circularqueue *)malloc(sizeof(struct circularqueue));

    sp->size = 10;
    sp->f = sp->r = sp->size - 1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    equeue(sp, 12);
    equeue(sp, 12);
    equeue(sp, 12);
    printf("before dqueue\n");
    traversal(sp);
    dqueue(sp);
    printf("after dqueue\n");
    traversal(sp);
    return 0;
}