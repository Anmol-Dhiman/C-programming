#include <stdio.h>
int days(int md, int y)
{
    if (md == 1) //for january.
    {
        return 31;
    }
    else if (md == 2) //for february.
    {
        if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) //checking wheather the given year is a leap year or not.
            return (29);
        else
            return (28);
    }
    else if (md == 3) //for march.
    {
        return 31;
    }
    else if (md == 4) //for april.
    {
        return 30;
    }
    else if (md == 5) //for may.
    {
        return 31;
    }
    else if (md == 6) //for june.
    {
        return 30;
    }
    else if (md == 7) //for july.
    {
        return 31;
    }
    else if (md == 8) //for august.
    {
        return 31;
    }
    else if (md == 9) //for september.
    {
        return 30;
    }
    else if (md == 10) //for october.
    {
        return 31;
    }
    else if (md == 11) //for november.
    {
        return 30;
    }
    else if (md == 12) //for december.
    {
        return 31;
    }
}

int main(int argc, char const *argv[])
{
    printf("enter the year: - ");
    int y;
    scanf("%d", &y);
    if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
    {
        int s = 0;
        int t[] = {0, 3, 4, 0, 2, 5, 0, 3, 6, 1, 4, 6};
        printf("enter the month:");
        int m;
        scanf("%d", &m);
        int k;
        k = (y + y / 4 - y / 100 + y / 400 + t[m - 1] + 1) % 7;
        int d = days(m, y);
        printf("\n -----------------------------------");
        printf("\n  SUN  MON  TUE  WED  THU  FRI  SAT");
        printf("\n -----------------------------------\n");

        for (int i = 1; i <= k; i++)
        {
            printf("     ");
            s++; //s=0;
        }
        //s=3;

        for (int i = 1; i <= d; i++) //for printing the dates of a particular month given by the user.
        {
            printf("%5d", i);
            s++;
            if (s > 6)
            {
                printf("\n");
                s = 0;
            }
        }
        printf("\n -----------------------------------");
    }
    else
    {
        int s = 0;
        int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
        printf("enter the month:");
        int m;
        scanf("%d", &m);
        int k;
        k = (y + y / 4 - y / 100 + y / 400 + t[m - 1] + 1) % 7;
        int d = days(m, y);
        printf("\n -----------------------------------");
        printf("\n  SUN  MON  TUE  WED  THU  FRI  SAT");
        printf("\n -----------------------------------\n");

        for (int i = 1; i <= k; i++)
        {
            printf("     ");
            s++; //s=0;
        }
        //s=3;

        for (int i = 1; i <= d; i++) //for printing the dates of a particular month given by the user.
        {
            printf("%5d", i);
            s++;
            if (s > 6)
            {
                printf("\n");
                s = 0;
            }
        }
        printf("\n -----------------------------------");
    }

    return 0;
}
