// DEqueue using doubly link list
#include <stdio.h>
#include <stdlib.h>

struct node *f = NULL;
struct node *r = NULL;

struct node
{
    struct node *prv;
    int data;
    struct node *nxt;
};

void equeue(int val)
{
    // entering the number form the back
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = val;
    n->nxt = NULL;
    if (f == NULL)
    {
        f = r = n;
        n->prv = NULL;
    }
    else
    {
        r->nxt = n;
        n->prv = r;
        r = n;
    }
}

void traverse()
{
    // print the queue
    struct node *n = f;
    while (n != NULL)
    {
        printf("%d  ", n->data);
        n = n->nxt;
    }
    printf("\n");
}

void frontequeue(int val)
{
    // entering the number from the fornt
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = val;
    n->prv = NULL;
    n->nxt = f;
    f->prv = n;
    f = n;
}

void backdqueue()
// removing the number form the back
{
    struct node *n = r;
    r = r->prv;
    r->nxt = NULL;
    free(n);
}

void frontdqueue()
{
    // removing the number form the front
    struct node *n = f;
    f = f->nxt;
    free(n);
    f->prv = NULL;
}

int main()
{
    equeue(23);
    equeue(23);
    equeue(23);
    printf("befor front input\n");
    traverse();
    frontequeue(12);
    frontequeue(12);
    frontequeue(12);
    printf("after front input\n");
    traverse();
    frontdqueue();
    printf("front removal \n");
    traverse();
    backdqueue();
    printf("after the back removal\n");
    traverse();

     return 0;
}