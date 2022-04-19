#include<stdio.h>

int main()
{
    int a,d,x1,x2,m=1,s=0,i,j;//declaring all the variables.
    printf("enter the no:");// entering the value of the no.
    scanf("%d", &a);//reding the value.
    printf("enter the no of digits of the given no:");//entering the no of digits.
    scanf("%d", &d);//reading the value.
    for ( i = 1; i < d; i++)//making the 10 with power of d-1 to divide it with a.
    {
       m = m*10;
    }
     for ( j = 1; j <=d; j++)
    {
      x1 = a%10;//taking out the last value.
      x2 = x1*m;//making it the first value.
      s = s+x2;//taking it into the printing value.
      a =a/10;//removing the last digit.
     m = m/10;//reducing the power of m by 1.
    }
     printf("the reverse no:%d", s);//printing the desired value.
    
     return 0;
}
