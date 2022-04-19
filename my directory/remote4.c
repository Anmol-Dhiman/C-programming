#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    float x1,x2,y1,y2;
    printf("enter the first cordinates (x1,y1):");
    scanf("%f%f", &x1,&y1);
    printf("enter the second cordinates (x2,y2):");
    scanf("%f%f", &x2,&y2);
    float distance;
    float a,b;
    a = x1 - x2;
    b = y1 - y2;
    float y;
    y = a*a + b*b;
    distance = sqrt(y);
    printf("the distance is %f", distance);
    
    return 0;
}
