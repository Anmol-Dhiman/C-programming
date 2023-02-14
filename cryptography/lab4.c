#include <stdio.h>
#include <inttypes.h>
int main()
{
    uint64_t x;
    printf("enter the unsigned 64 bit int P : ");
    scanf("%I64d", &x);

    uint32_t key[32];
    for (int i = 0; i < 32; i++)
    {
        printf("enter the key %d : ", (i + 1));
        scanf("%I64d", &key[i]);
    }

        return 0;
}
