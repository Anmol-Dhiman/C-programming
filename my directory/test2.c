#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    int size = sizeof(int), count0 = 0, count1 = 0;

    printf("Number entered: %d\n", num);
    printf("Number of bytes in Int: %d\n", size);
    printf("Number of bits in Int: %d\n", size * 8);

    for (int i = 0; i < size * 8; i++)
    {
        if (num != 0)
        {
            if (num % 2 == 0)
            {
                count0++;
            }
            else
            {
                count1++;
            }
            num /= 2;
        }
        else
        {
            count0++;
        }
    }

    printf("Number of zeros: %d\n", count0);
    printf("Number of ones: %d\n", count1);
}