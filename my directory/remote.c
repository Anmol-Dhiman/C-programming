#include<stdio.h>
#include<math.h>

int main()
{
    
    float y,x;
    printf("enter the value of x:");
    scanf("%f", &x);
    int f=1;
    float a,z;
    float sum = 1;
    for (int  i = 1; i <= 5; i++)
    {
        f =f*i;
        z = pow(x,i);
        a = z/f;
        sum = sum + a;
    }
    printf("the total is : %f", sum);
    

    return 0;
}
