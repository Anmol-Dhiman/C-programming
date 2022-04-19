#include <stdio.h>
int main()
{
    int y;

    printf("Enter year: ");//reading the input value.
    scanf("%d",&y);

    if(y % 4 == 0)//starting of nested if statement.
    {
    	
        if( y % 100 == 0)
        {
            if ( y % 400 == 0)
            {
                printf("%d is a Leap Year", y);
            }   
            else
                printf("%d is not a Leap Year", y);
        }
        else
            printf("%d is  a Leap Year", y );
    }
    else
        printf("%d is not a Leap Year", y);

//getting the desired value.
    return 0;
}