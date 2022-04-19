#include<stdio.h>

int main()
{
     int n;
     printf("enter the five digit NO:");
    scanf("%d", &n);
   
    int n1=n/10000;
    int n2=n-((n/10000)*10000);
    int n3=n2/1000;
    int n4=n2-((n2/1000)*1000);
    int n5=n4/100;
    int n6=n4-((n4/100)*100);
    int n7=n6/10;
    int n8=n6-((n6/10)*10);
    int sum=n1+n3+n5+n7+n8;
    printf("%d", sum);
    return 0;
}
