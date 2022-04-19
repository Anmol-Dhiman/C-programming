#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a[100];
    int n;
   printf("enter the number of input you want to give:");
   scanf("%d", &n); 
   printf("enter the number:");
   for (int i = 0; i < n; i++)
   {
       scanf("%d", &a[i]);
   }
   
    return 0;
}
