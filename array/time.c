#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    int c = 0;
    int b[100];
    printf("enter the number of input:");
    scanf("%d", &a);
    int v[100];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &v[i]);
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (v[i] == v[j])
            {
                c++;
                b[i] = c;
            }
        }

        printf("%d occurs %d times.\n", v[i], b[i]);
        c = 0;
    }
    printf("jai shri ram ");

    return 0;
}
