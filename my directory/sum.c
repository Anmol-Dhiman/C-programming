#include<stdio.h>

int main(int argc, char const *argv[])
{
    float m1,m2,m3,m4,m5,sum, percentage;
    
    printf("enter the marks of each subject:");
    
    scanf("%f%f%f%f%f", &m1, &m2, &m3, &m4, &m5);//the enteries will come out from here.
    
         sum=m1+m2+m3+m4+m5;//total marks will be calculated here.
    
         percentage=sum/5;//the percentage will be calculated here.
    
    
    printf("your total marks is:%3.3f", sum);
    

    printf("\nyour percentage is:%2.3f", percentage);
    
    
    return 0;
}
