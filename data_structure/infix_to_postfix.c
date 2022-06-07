// code to convert infix to postfix.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct node *top = NULL;

struct node
{
    char data;
    struct node *ptr;
};

int operator(char a)
{
    if (a == '+' || a == '/' || a == '*' || a == '-' || a == '%')
    {
        return 1;
    }
    return 0;
}
int isempty()
{
    if (top == NULL)
    {
        return 1;
    }
    return 0;
}
char stacktop()
{
    // find the last element of the stack
    if (isempty())
    {
        return -1;
    }
    return top->data;
}
void push(char a)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = a;
    n->ptr = top;
    top = n;
}
char pop()
{
    struct node *n = top;
    char x;
    x = n->data;
    top = n->ptr;
    free(n);
    return x;
}

int presedence(char a)
{
    if (a == '*' || a == '/' || a == '%')
    {
        return 3;
    }
    return 1;
}

void infixtopostfix(char s[])
{
    int j = 0;
    char postfix[strlen(s)];
    for (int i = 0; i < strlen(s); i++)
    {
        // a+b-t/3;
        if (!operator(s[i]))
        {
            postfix[j] = s[i];
            j++;
        }
        else
        {
            if (presedence(s[i]) > presedence(stacktop()))
            {
                push(s[i]);
            }
            else
            {
                postfix[j] = pop();
                j++;
            }
        }
    }
    while (!isempty())
    {
        postfix[j] = pop();
        j++;
    }
    postfix[j] = '\0';
    printf("%s", postfix);
}

int main()
{
    char s[20];
    printf("enter the string: ");
    gets(s);
    infixtopostfix(s);
    return 0;
}