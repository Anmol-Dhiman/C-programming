#include <stdio.h>
#include <inttypes.h>
#include <math.h>

void encryption(uint64_t P, uint32_t K)
{
    uint64_t num = P;
    int count = 0;
    while (num != 0)
    {
        num = num / 10;
        count++;
    }
    int loop = pow(10, count / 2);
    uint32_t l0 = P / loop;
    uint32_t r0 = P % loop;

    int temp1 = pow(r0 ^ K, 2);
    int temp2 = (pow(2, 32));
    int F = temp1 % temp2;

    l0 = l0 ^ F;
    r0 = r0 * loop;
    uint64_t ans = r0 + l0;
    printf("%d", ans);
}

int main()
{
    uint64_t p;
    uint32_t k;

    printf("enter the unsigned 64 bit int P : ");
    scanf("%I64d", &p);
    printf("enter the unsigned 32 bit int K : ");
    scanf("%I64d", &k);

    encryption(p, k);

    return 0;
}