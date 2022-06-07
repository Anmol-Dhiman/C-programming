#include <stdio.h>
int main()
{
    int n, m, i, j, k;
    //n=5
    //declaring all the variables.
    printf("Enter the number of rows:"); //taking input from the user.
    scanf("%d", &n);
    m = n;
    for (i = 1; i <= n; i++) //the first loop will start.
    {
        for (j = 1; j <= m - 1; j++) //the second loop will start.
        {
            printf(" "); //the free space printing.
        }
        for (k = 1; k <= 2 * i - 1; k++) //the third loop will start.
        {
            printf("*"); //printing the star sequence.
        }
        m--; //decrementing m.

        printf("\n"); //starting the new line.
    }

    return 0;
}
