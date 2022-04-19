#include <stdio.h>

double square(int num)
{
    return (num * num);
}
int main()
{
    int num;
    double n;
	printf("\n\n Function : find square of any number :\n");
	printf("------------------------------------------------\n");	
     
    printf("Input any number for square : ");
    scanf("%d", &num);
    n = square(num);
    printf("The square of %d is : %.2lf\n", num, n); 
    return 0;
}