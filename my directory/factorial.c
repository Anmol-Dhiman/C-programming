#include <stdio.h>
int main()
{
  int i, n; //declaring all the variables.
  long long int f=1;
  printf("Enter a number: ");

  scanf("%d", &n); //taking the input from the user.

  for (i = 1; i <= n; i++) //starting the for loop
  {
    f = f * i;
  }

  printf("Factorial of %d is: %lld", n, f); //getting the output.

  return 0;
}