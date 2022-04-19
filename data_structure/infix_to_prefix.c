#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    char *arr;
};
int operator(char a)
{
    if (a == '+' || a == '/' || a == '*' || a == '-' || a == '%')
    {
        return 1;
    }
    return 0;
}
char stacktop(struct stack *p)
{
    if (p->top == -1)
    {
        return -1;
    }
    return p->arr[p->top];
}

int presedence(char a)
{
    if (a == '*' || a == '/' || a == '%')
    {
        return 3;
    }
    return 1;
}

char pop(struct stack *p)
{
    char x;
    x = p->arr[p->top];
    p->top--;
    return x;
}
void push(struct stack *p)
{
    p->top++;
    p->arr[p->top];
}
char *toprefix(char s[])
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = strlen(s);
    sp->top = -1;
    sp->arr = (char *)malloc(sizeof(char));
    char *prefix = (char *)malloc((strlen(s) + 1) * sizeof(char));
    int j = 0;
    for (int i = strlen(s); i >= 0; i--)
    {
        if (!operator(s[i]))
        {
            prefix[j] = s[i];
            j++;
        }
        else
        {
            if (presedence(s[i]) >= presedence(stacktop(sp)))
            {
                push(s[i]);
            }
            else
            {
                prefix[j] = pop(sp);
                j++;
            }
        }
    }
    while (sp->top != -1)
    {
        prefix[j] = pop(sp);
        j++;
    }
    prefix[j] = '\0';
    return prefix;
}

int main()
{
    char s[20];
    printf("enter the string: ");
    gets(s);

    printf("%s", toprefix(s));
    return 0;
}