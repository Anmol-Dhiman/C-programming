/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct CycleDetails //STRUCTURE DECLARATION

{
    int cyclenumber;
    char name[20];
    char address[20];
    char phonenumber[15];
    char nationality[15];

    char email[35];
    int period;
    int c, i;
} c;

void cycle_record()
{
    FILE *f;
    f = fopen("add.txt", "r");

    if (f == NULL)
    {
        printf("Unable to open the file");
        exit(1);
    }

    system("cls");
    printf("%-15s%-15s%-20s%-20s%-15s%-25s%-20s\n", "Cycle No", "Name", "Address", "Phone No", "Nationality", "Email", "Period");

    for (int i = 0; i < 120; i++)
    {
        printf("-");
    }
    printf("\n");
    while (fscanf(f, "%d %s %s%s %s %s %i\n", &c.cyclenumber, c.name, c.address, c.phonenumber, c.nationality, c.email, &c.period) != EOF)

    {
        printf

            ("%-15d%-15s%-20s%-20s%-15s%-25s%-20d\n", c.cyclenumber, c.name, c.address, c.phonenumber, c.nationality, c.email, c.period);
    }
    printf("\n");
    for (int i = 0; i < 120; i++)
    {
        printf("-");
    }
    printf("\n");
    fclose(f);

    getchar();
}
char *string_validation(char input_string[], int number_check)
{
    int check = 0;
    char *name;
    while

        (check != 1)
    {
        check = 1;
        printf("%s ", input_string);
        scanf

            ("%s", name);
        if (number_check == 1 && (strlen(name) > 10 || strlen(name) != 10))
        {
            check =

                0;
            printf("Phone number should be of 10 numbers from 0-9. Please, enter valid number.\n");
        }
        else
        {
            for (int j = 0; j < strlen(name); j++)
            {
                if

                    (number_check == 0 && !isalpha(name[j]))
                {
                    printf("Name contains invalid character. Please enter again.\n");

                    check = 0;
                    break;
                }
                if (number_check == 1 && isalpha(name[j]))
                {

                    printf("Please, enter valid number.\n");
                    check = 0;

                    break;
                }
            }
        }
    }
    return name;
}

void rent_cycle()
{
    FILE *f;
    f = fopen("add.txt", "a+");

    if (f == NULL)
    {

        printf("Unable to open the file");
        exit(1);
    }
    rewind(f);
    int cyclenos[1000];
    int cycleno, check = 0, i = 0;
    while

        (fscanf(f, "%d %s %s %s %s %s %i\n", &c.cyclenumber, c.name, c.address, c.phonenumber, c.nationality, c.email, &c.period) != EOF)

    {
        cyclenos[i++] = c.cyclenumber;
    }

    system("cls");
    printf

        ("\n Enter Customer Details:");
    printf("\n-------------------------\n");

    while (check != 1)
    {
        printf("\nEnter cycle number\t: ");

        scanf("%d", &cycleno);
        check = 1;
        for (int j = 0; j < i; j++)
        {

            if (cycleno == cyclenos[j])
            {
                printf("This cycle is already rented.\n");

                check = 0;
                break;
            }
        }
    }

    c.cyclenumber = cycleno;
    strcpy(c.name, string_validation("\nEnter Name\t\t: ", 0));
    strcpy(c.address, string_validation("\nEnter address\t\t: ", 0));

    strcpy(c.phonenumber, string_validation("\nEnter Phone Number\t: ", 1));
    strcpy

        (c.nationality, string_validation("\nEnter Nationality\t: ", 0));
    printf("\nEnter Email\t\t: ");
    scanf("%s", c.email);
    printf("\nEnter Time Period(\'x\'days): ");

    scanf("%d", &c.period);

    fprintf(f, "%i %s %s %s %s %s %i\n", c.cyclenumber, c.name, c.address, c.phonenumber, c.nationality, c.email, c.period);

    printf("\n\n Your Desired Cycle is rented successfully!!\n\n\n");

    fclose(f);
    getchar();
}
int main() //MAIN FUNCTION
{
    int w;
    while (1)
    {
        system("cls");

        printf("\nSelect and Enter Your Choice From Menu:\n");
        printf("\n================================");

        printf(" \n Enter 1 ->> Rent a cycle");
        printf("\n=================================");
        printf(" \n Enter 2 ->> View Rental Record");

        printf("\n=================================");
        printf(" \n Enter 3 ->> Exit");

        printf("\n=================================\n");
        int choice;
        printf(" \nEnter your choice: ");

        scanf("%d", &choice);
        switch (choice) // SWITCH STATEMENT
        {

        case 1:
            rent_cycle();
            break;
        case 2:
            cycle_record();

            break;
        case 3:
            exit(0);
        }

        getchar();
    }
    return 0;
}
