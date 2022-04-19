#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct node *top = NULL;

struct node
{
    float data;
    struct node *ptr;
};
void push(float a)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = a;
    n->ptr = top;
    top = n;
    // printf("i am pushing the element\n");
}
float pop()
{
    struct node *n = top;
    float x;
    x = n->data;
    top = n->ptr;
    free(n);
    // printf("hi i am poping the element\n");
    return x;
}

int operator(char a)
{
    if (a == '+' || a == '/' || a == '*' || a == '-' || a == '%')
    {
        return 1;
    }
    return 0;
}
float calculation(char a, int b, int c)
{
    if (a == '+')
    {
        return b + c;
    }
    else if (a == '-')
    {
        return c - b;
    }
    else if (a == '*')
    {
        return b * c;
    }
    else if (a == '/')
    {
        return c / b;
    }
    else if (a == '%')
    {
        return c % b;
    }
}
float evalutaion(char a[])
{

    float result;
    for (int i = 0; i < strlen(a); i++)
    {
        if (!operator(a[i]))
        {
            push(a[i] - '0');
        }
        else
        {
            int s = pop();
            int b = pop();
            result = calculation(a[i], s, b);
            push(result);
        }
    }
    result = pop();
    return result;
}
int main()
{
    char s[20];
    printf("enter the string: ");
    gets(s);
    printf("%0.2f", evalutaion(s));
    return 0;
}