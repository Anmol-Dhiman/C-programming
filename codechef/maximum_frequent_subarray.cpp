#include <iostream>
using namespace std;

int main()
{
    unsigned long long t;
    cin >> t;
    unsigned long long n[t];
    unsigned long long a[t][100000];
    for (unsigned long long i = 0; i < t; i++)
    {
        cin >> n[i];
        for (unsigned long long j = 0; j < n[i]; j++)
        {
            cin >> a[i][j];
        }
    }

    return 0;
}