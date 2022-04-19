#include <stdio.h>
int main()
{
    void tower(int, char, char, char);
    int n;
    char c = 'A';
    char c1 = 'B';
    char c2 = 'C';
    printf("enter the number of disk: ");
    scanf("%d", &n);
    tower(n, c, c1, c2);
    printf("the task has been completed.");

    return 0;
}
void tower(int a, char c, char c1, char c2)
{
    if (a >= 1)
    {
        tower(a - 1, c, c2, c1);
        printf("%c to %c\n", c, c2);
        tower(a - 1, c1, c, c2);
    }
   
}