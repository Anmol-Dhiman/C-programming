for (int i = 1; i > 0; i++)
        {
            printf(" |------------------------------------------------------------------------------------|\n");
            printf(" |                      MONTH                     |               VALUE               |\n");
            printf(" |------------------------------------------------------------------------------------|\n");
            printf(" |                     JANUARY                    |                 1                 |\n");
            printf(" |                    FEBRUARY                    |                 2                 |\n");
            printf(" |                      MARCH                     |                 3                 |\n");
            printf(" |                      APRIL                     |                 4                 |\n");
            printf(" |                       MAY                      |                 5                 |\n");
            printf(" |                      JUNE                      |                 6                 |\n");
            printf(" |                      JULY                      |                 7                 |\n");
            printf(" |                     AUGUST                     |                 8                 |\n");
            printf(" |                    SEPTEMBER                   |                 9                 |\n");
            printf(" |                     OCTOBER                    |                 10                |\n");
            printf(" |                    NOVEMBER                    |                 11                |\n");
            printf(" |                    DECEMBER                    |                 12                |\n");
            printf(" |------------------------------------------------|-----------------------------------|\n");
            printf("\n-------------------------------------------------------\n");
            printf("* ENTER THE CORRESPONGING NUMBER OR ENTER 0 TO EXIT *");
            printf("\n-------------------------------------------------------\n");

            printf("\n_____________________");
            printf("\n  ENTER THE MONTH:");
            scanf("%d", &mon); //taking the input of the month of the paricular date.
            system("cls");
            if (mon >= 0 || mon <= 12)
            {
                break;
            }
        }
        if (da == 31)
        {
            if (mon == 2 || mon == 4 || mon == 6 || mon == 9 || mon == 11)
            {
                printf("\n-----------------------------\n");
                printf("** ENTER THE PROPER VALUE  **");
                printf("\n-----------------------------\n");
            }
        }
        
    }