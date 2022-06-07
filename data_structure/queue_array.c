// program of inplementaiton of queue with the help of array
#include <stdio.h>
#include <stdlib.h>
// typedef helps to get releif from the struct keyword
typedef struct
{
    // the ADT of queue
    int size;
    // 'f' will focus on the index of top -1.
    int f;
    // 'b' will focus on the index of the end of queue
    int b;
    int *arr;
} queue;

int isfull(queue *ptr)
{
    if (ptr->b == ptr->size - 1)
    {
        return 1;
    }
    return 0;
}

void equeue(queue *p, int value)
{
    if (isfull(p))
    {
        printf("queue overflow\n");
    }
    else
    {
        p->b++;
        p->arr[p->b] = value;
    }
}

void traverse(queue *ptr)
{
    // traverse the queue
    for (int i = ptr->f + 1; i <= ptr->b; i++)
    {
        printf("%d\n", ptr->arr[i]);
    }
}

int isempty(queue *p)
{
    // checking whether the queue is empty or not
    if (p->f == p->b)
    {
        return 1;
    }
    return 0;
}


void dqueue(queue *ptr)
{
    if (isempty(ptr))
    {
        printf("queue underflow\n");
    }
    else
    {
        // using the method which has bigO of 1 complexity
        // but this code will use the extra memory
        ptr->f++;
    }
}
int main()
{
    queue *s = (queue *)malloc(sizeof(queue));
    s->size = 10;
    s->b = s->f = -1;
    s->arr = (int *)malloc((s->size) * sizeof(int));
    // entering the values in the queue
    // equeue(s, 12);
    // equeue(s, 52);
    // equeue(s, 158);
    // equeue(s, 1);
    // printing the queue
    printf("before deletion\n");
    traverse(s);
    // deleting the first element of the queue
    dqueue(s);
    printf("after deletion\n");
    traverse(s);
    return 0;
}