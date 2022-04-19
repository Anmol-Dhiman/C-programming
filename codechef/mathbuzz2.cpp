#include <iostream>
using namespace std;
int factorial(int n)
{
    // single line to find factorial
    return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);
}

int main()
{
    unsigned long long r;
    unsigned long long k;
    unsigned long long sum = 0;
    unsigned long long ways = 1;
    unsigned long long q = 1;
    cin >> r;
    cin >> k;
    unsigned long long a[k];
    unsigned long long p[k];
    unsigned long long j = 0;
    unsigned long long i = 0;
    do
    {
        cin >> a[i];
        i++;
    } while (i < k);
    i = 0;
    do
    {
        cin >> p[i];
        i++;
    } while (i < k);
    i = 0;

    do
    {
        j = 0;
        do
        {
            ways *= (a[i] - j) % 998244353;
            j++;
        } while (j < r);
        ways = ways / factorial(r);
        q = (p[i] * ways) % 998244353;

        sum += q;
        ways = 1;
        i++;
    } while (i < k);

    cout << sum % 998244353;

    return 0;
}