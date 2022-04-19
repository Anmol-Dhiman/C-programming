#include <stdio.h>
int main()
{   //f.txt does not exists.
    FILE *f;
    f = fopen("f.txt", "r");
    if (f == NULL)
    {
        printf("Suyash weds Kakad");
    }
    else
    {
        printf("paisa hi paisa hoga");
    }
    return 0;
}