
// implementing queue with the help of linklist
#include <stdio.h>
#include <stdlib.h>
struct queuelist *f = NULL;
struct queuelist *r = NULL;

struct queuelist
{
    int data;
    struct queuelist *ptr;
};

int isempty()
{
    if (f == r)
    {
        return 1;
    }
    return 0;
}

void equeue(int val)
{
    struct queuelist *n = (struct queuelist *)malloc(sizeof(struct queuelist));
    if (n == NULL)
    {
        printf("queue overflow\n");
    }
    n->data = val;
    n->ptr = NULL;
    if (f == NULL)
    {
        f = r = n;
    }
    else
    {
        r->ptr = n;
        r = n;
    }
}

void traversal()
{
    struct queuelist *p = f;
    while (p != NULL)
    {
        printf("%d  ", p->data);
        p = p->ptr;
    }
}
void dqueue()
{
    struct queuelist *p = f;
    f = f->ptr;
    free(p);
}

int main()
{

    equeue(12);
    equeue(1);
    equeue(122);
    equeue(1454);
    equeue(142);
    equeue(124);
    printf("before deletion\n");
    traversal();
    dqueue();
    printf("\n");
    printf("after deletion\n");
    traversal();
    return 0;
}