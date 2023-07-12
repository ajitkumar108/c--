#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll temp = 0;
    ll max = 0;
    sort(arr, arr + n);
    for (ll i = 0; i < n; i++)
    {
        temp = arr[i] * (n - i);
        if (temp > max)
        {
            max = temp;
        }
    }
    cout << max;

    return 0;
}