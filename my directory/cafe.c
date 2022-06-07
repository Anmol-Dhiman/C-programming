#include<stdio.h>

int main()
{
    int a= 0xcafe;
    int b = a&0xfe;
    int c= a&0xca00;
    c=c>>8;
    b=b<<8;
     int d=b+c;

printf("Equivalent hexadecimal number is: %X",d);
     return 0;
}
