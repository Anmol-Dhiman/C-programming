#include<stdio.h>

int main(int argc, char const *argv[])
{
   float c;

   printf("enter the temperature in Celsius:");//reading the input value.
   
   scanf("%f", &c);
   
   printf("the temperature in Fahrenheit: %0.8f",9*c/5+32);
   //calculating the fahrenheit temperature in printf fuction.
   //and printing the desired value.
  
    return 0;
}
