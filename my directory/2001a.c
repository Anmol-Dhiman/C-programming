#include<stdio.h>
#include<math.h>


int main()
{
    float a, f=1,i,z,j,k;
    float s,x;
    s=1;
    printf("enter the value of x:");
    scanf("%f", &x);
    printf("enter the no of terms:");
    scanf("%f", &a);
    for ( i = 1; i <a; i++)
    {
        f=f*i;
        z=pow(x, i);
        k=z/f;
        s=s+k;

      
    }
    
    printf("the sum is %f", s);
  
   
    
    return 0;
}
