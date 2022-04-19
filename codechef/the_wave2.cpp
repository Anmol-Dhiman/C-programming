#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAIN1 ios_base::sync_with_stdio(false);
#define MAIN2 cin.tie(NULL);

void solve()
{
    ll ns, qs;
    cin >> ns >> qs;
    ll a[ns];

    for (ll i = 0; i < ns; i++)
        cin >> a[i];
    sort(a, a + ns);

    for (ll i = 0; i < qs; i++)
    {
        ll x;
        cin >> x;
        ll pos = lower_bound(a, a + ns, x) - a;
        if (pos < ns && a[pos] == x)
            cout << 0 << endl;
        else if (pos % 2 == 0)
            cout << "POSITIVE" << endl;
        else
            cout << "NEGATIVE" << endl;
    }
}

int main()
{
    MAIN1;
    MAIN2;
    ll n = 1;

    while (n--)
    {
        solve();
    }
}