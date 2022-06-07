#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    char *arr;
};

void push(struct stack *p, char m)
{
    p->top++;
    p->arr[p->top] = m;
}
char pop(struct stack *p)
{
    char x;
    x = p->arr[p->top];
    p->top--;
    return x;
}

char *reverse(char s[])
{
    struct stack *a = (struct stack *)malloc(sizeof(struct stack));
    a->size = 100;
    a->top = -1;
    a->arr = (char *)malloc(a->size * sizeof(char));
    char *rev = (char *)malloc((strlen(s) + 1) * sizeof(char));
    for (int i = 0; i < strlen(s); i++)
    {
        push(a, s[i]);
    }
    int j = 0;
    for (j = 0; j < strlen(s); j++)
    {
        rev[j] = pop(a);
    }
    rev[j] = '\0';
    return rev;
}

int main()
{
    char s[20];
    printf("enter the string :");
    gets(s);
    printf("%s", reverse(s));
    return 0;
}