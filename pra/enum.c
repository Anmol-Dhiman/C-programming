#include <stdio.h>
enum codition
{
     true, false
};
int checker(int a)
{  if (a % 2 == 0)
    return true;
   else
   return false;
}
int main()
{    int n; printf("enter the number: ");
    scanf("%d", &n);
    int s = checker(n);
    if (s)
    printf("even");
     else
     printf("odd");
    return 0;
}
