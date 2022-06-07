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
char pop()
{
    char x;

    struct node *n = top;
    x = n->data;
    top = n->ptr;
    free(n);
    return x;
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
int match(char p, char s)
{
    if (p == '(' && s == ')')
    {
        return 1;
    }

    else if (p == '{' && s == '}')
    {
        return 1;
    }

    else if (p == '[' && s == ']')
    {
        return 1;
    }

    return 0;
}
void matching(char s[])
{
    char pooped;
    int m = 1;
    int count = 1;
    for (int i = 0; i < strlen(s); i++)
    {

        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            push(s[i]);
        }
        else if (s[i] == ')' || s[i] == '}' || s[i] == ']')
        {
            if (isempty())
            {
                count = 0;
                break;
            }
            else
            {
                pooped = pop();
                m = match(pooped, s[i]);
                if (m == 0)
                {
                    break;
                }
            }
        }
    }
    if (m == 1 && count == 1 && top == NULL)
    {
        printf("proper parenthesis\n");
    }
    else
    {
        printf("improper parenthesis\n");
    }
}
int main()
{
    // ()(
    char s[20];
    printf("enter the string: ");
    gets(s);
    matching(s);
    return 0;
}