#include <iostream>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int index = -1;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0 && a[i] % 2 != 0)
        {
            index = i;
        }
        else if (index != -1 && i % 2 != 0 && a[i] % 2 == 0)
        {
            swap(a[index], a[i]);
        }
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += (a[i] + i + 1) % 2;
    }
    cout << sum << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}