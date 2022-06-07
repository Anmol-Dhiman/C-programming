#include <stdio.h>

int main()
{
   int n, i; //declaring the variables.
   long long int a = 0, b = 1, c;
   //making them long integers as they are the long numbers.
   printf("enter the no:"); //taking the input from the user.
   scanf("%d", &n);
   printf("%lld %lld ", a, b); //printing the first two digits of fibonacci series.
   for (i = 2; i < n; i++)     //starting of the for loop
   {
      c = a + b; //calculating the next value by adding the previous two values
      printf("%lld ", c);
      a = b; //updating the 2nd previous value.
      b = c; //updating the previous value
   }
   return 0;
}
