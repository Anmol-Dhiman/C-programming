#include<stdio.h>

int main(int argc, char const *argv[])
{
    int A,B;
    
    printf("enter the no A :"); //the first value will be readed
    scanf("%d", &A);
    printf("enter the no B :"); //second value will be readed
    scanf("%d", &B);
    
       A=A+B; //all the operations held here
       B=A-B;
       A=A-B;
    
    printf("the no A is:%d\nthe no B is:%d", A,B); 
   
    
     return 0;
}
