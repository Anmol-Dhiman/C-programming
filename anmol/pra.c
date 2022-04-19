#include <stdio.h>

int main()
{
    int y;
    int c = 1;

    printf("enter the year:");
    scanf("%d", &y);
    printf("  Mon  Tue  Wed  Thu  Fri  Sat  SUN\n");
    int diff;
    diff = 2024 - y;
    if (diff < 0 && diff > -4)
    {
        diff = (diff * -1) + 1;
    }
    else if (diff > 0 && diff < 4)
    {
        diff = diff + 1;
    }
    else if (diff >= 4)
    {

        diff = (diff / 4) * 2;
    }
    else
    {
       
    }
    

    for (int i = 0; i >= 0; i++)
    {
        for (int j = 1; j <= diff; j++)
        {
            printf("     ");
        }

        for (int z = 1; z <= 7 - diff; z++)
        {
            printf("%5d", c);
            c++;
            if (c > 31)
            {
                break;
            }
        }
        diff = 0;
        if (c > 31)
        {
            break;
        }

        printf("\n");
    }

    return 0;
}
