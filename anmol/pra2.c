#include<stdio.h>

int main()
{
    int year=2020;
   
    int month =5;
  static int t[] = {0, 3, 2, 5, 0, 3,
                      5, 1, 4, 6, 2, 4};
    year -= month < 3;
    printf("%d", (year + year / 4 - year / 100 + year / 400 + t[month - 1] ) % 7);
    return 0;
}
