#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minJumps(int a[], int n)
    {
        int count = 0;

        int c = 0;
        while (1)
        {
           
            c += a[c];
            if (n < c)
            {
                count++;
                break;
            }
            else if (a[c] == 0)
            {
                count++;
                break;
            }
            else
            {
                count++;
            }
        }
        return count;
    }
};

int main()
{
    int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};

    Solution obj;
    cout << obj.minJumps(arr, 11) << endl;
    return 0;
}