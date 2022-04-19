#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of line which you want to delete: ");
    scanf("%d", &n);
    FILE *f;
    f = fopen("file.txt", "w");
    
    return 0;
}