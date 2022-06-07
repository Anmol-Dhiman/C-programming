#include<stdio.h>
int main()
{
    int maths, science, passing_marks=30;
    printf("enter the marks of science:");
scanf("%d", &science);
printf("enter the marks of maths: ");
scanf("%d", &maths);
     if (science>=passing_marks && maths>=passing_marks)
     {
         printf("you got a prize worth of rupess 45.");

     }
     else if (science>=passing_marks || maths>=passing_marks)
     {
        printf("you got a prize woth of rupess 15.");
     }
     else
     {
         printf("better luck next time.");
     }
     
    return 0;
}
