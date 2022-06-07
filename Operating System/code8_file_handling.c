#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *fptr;
    char ch;
    int wrd = 0, charctr = 0;
    char fname[20];
   
    printf(" Input the filename to be opened : ");
    scanf("%s", fname);

    fptr = fopen(fname, "r");
    if (fptr == NULL)
    {
        printf(" File does not exist or can not be opened.");
    }
    else
    {
        ch = fgetc(fptr);
        printf(" The content of the file %s are : ", fname);
        while (ch != EOF)
        {
            printf("%c", ch);
            if (ch != ' ')
            {
                charctr++;
            }
            if (ch == ' ')
            {
                wrd++;
            }

            ch = fgetc(fptr);
        }
        printf("\n The number of words in the  file %s are : %d\n", fname, wrd + 1);
        printf(" The number of characters in the  file %s are : %d\n\n", fname, charctr - 1);
    }
    fclose(fptr);
}
