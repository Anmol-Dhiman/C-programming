#include<stdio.h>

int main(int argc, char const *argv[])
{
    float r;
    printf("enter the radius of the circle:");
    //reading the value of radius
   
    scanf("%f", &r);
   
    printf("area of the circle is:%8.8f\n", 3.14*r*r);
    //finding the area.
   
   
    printf("circumference of the circle is:%8.8f", 2*3.14*r );
    //finding the circumference.
   
   
    return 0;
}
