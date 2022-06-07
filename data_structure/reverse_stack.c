#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node *top = NULL;
struct node
{
    char data;
    struct node *ptr;
};

void push(char c)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = c;
    p->ptr = top;
    top = p;
}
char pop()
{
    struct node *n = top;
    char x = n->data;
    top = top->ptr;
    free(n);
    return x;
}

void reverse(char a[])
{
    char d[strlen(a)];
    for (int i = 0; i < strlen(a); i++)
    {
        push(a[i]);
    }
    for (int i = 0; i < strlen(a); i++)
    {
        d[i] = pop();
    }
    puts(d);
}

int main()
{

    char s[20];
    printf("enter the string: ");
    gets(s);
    reverse(s);
    return 0;
}