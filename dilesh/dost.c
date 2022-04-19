#include <stdio.h>
int main()
{
    char data[100][3];
    int choice;
    int a = 0;
    printf("Enter 1 for part 1\n");
    printf("Enter 2 for part 2\n");
    printf("Enter 3 for part 3\n");
    printf("Enter 4 for part 4\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:

        break;
    case 2:
        printf("Enter the file name: ");
        fflush(stdin);
        gets(data[a][0]);

        printf("Enter the size of file: ");
        gets(data[a][1]);

        printf("Enter the owner name: ");
        gets(data[a][2]);
        a++;
        break;
    case 3:

        break;
    case 4:

        break;
    }

    return 0;
}