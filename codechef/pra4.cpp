#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    int sum = 0;
    int n, k, ans = 0;
    cin >> n >> k;
    int save[10], odd[n], a[n];
    memset(save, 0, sizeof(save));
    save[0]++;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
            odd[i] = 0;
        else
            odd[i] = 1;
        sum += odd[i];
        if (sum >= k)
            ans += save[sum - k];
        save[sum]++;
    }
    cout << ans << endl;

    return 0;
}