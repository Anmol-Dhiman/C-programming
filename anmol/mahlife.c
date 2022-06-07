#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    int s = 0;
    int y = 0;
    int z=0;
    printf("enter the number:");
    scanf("%d", &a);
    for (int i = 1; i > 0; i++)
    {
        s = s + 4040;
        if (a == s)
        {
            printf("YES");
            break;
        }
        
        if (s > a)
        {
            break;
        }
    }
    for (int i = 1; i > 0; i++)
    {
        y = y + 4041;
        if (a == y)
        {
            printf("YES");
            break;
        }
        if (y > a)
        {
            break;
        }
    }
    for (int i = 1; i >0; i++)
    {
       z=z+8081;
       if (a==z)
       {
           printf("YES");
           break;
       }
       if (z>a)
       {
          break;
       }
       
       
    }
    

    return 0;
}
