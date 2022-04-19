#include <stdio.h>
int main()
{
    int add(int);
    int n;
    printf("enter the number: ");
    scanf("%d", &n);
    int s = add(n);
    printf("%d",s);
    return 0;
}
int add(int a)
{
    int sum = 0;
    int s = a;
    if (s > 0)
    {
        s--;
        sum = a + add(s);
    }
    return sum;
}