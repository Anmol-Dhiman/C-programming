#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    // linklist data type
    char data;
    struct node *ptr;
};

struct node *top = NULL;

int isempty()
{

    if (top == NULL)
    {
        return 1;
    }

    return 0;
}

void push(char s)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = s;
    n->ptr = top;
    top = n;
}
void pop()
{
    struct node *n = top;
    top = n->ptr;
    free(n);
}
void display()
{

    //this function prints the link list till the last node.
    //in short traversal.
    struct node *p = top;
    while (p != NULL)
    {
        printf("%c ", p->data);
        p = p->ptr;
    }
    printf("\n");
}
void matching(char s[])
{
    int isCompleted = 1;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == '(')
        {
            push(s[i]);
        }
        else if (s[i] == ')')
        {
            if (isempty() != 1)
            {
                pop();
            }
            else
            {
                isCompleted = 0;
                break;
            }
        }
        display();
    }
    if ( isCompleted == 1&& top == NULL)
    {
        printf("proper parenthesis.\n");
    }
    else
    {

        printf("improper parenthesis.\n");
    }
}
int main()
{

    char s[20];
    printf("enter the string: ");
    gets(s);
    matching(s);
    return 0;
}