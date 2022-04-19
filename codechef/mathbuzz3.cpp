#include <iostream>
using namespace std;

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

    for (i = 0; i < k; i++)
    {

        for (j = 0; j < r; j++)
        {
            ways *= (a[i] - j) % 998244353;
        }

        q = (p[i] * ways) % 998244353;
        sum += q;
        ways = 1;
    }

    cout << sum % 998244353;

    return 0;
}