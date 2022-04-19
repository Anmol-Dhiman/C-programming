#include <stdio.h>

//
//    return 0;
//}

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    int sum = 0;
    printf("enter the number:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d", 2 * i - 1);
        sum += 2 * i - 1;
    }
    printf("%d", sum);
   
    return 0;
}
