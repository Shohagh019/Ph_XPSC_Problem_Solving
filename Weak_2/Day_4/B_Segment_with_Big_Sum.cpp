#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, s;
    cin >> n >> s;
    vector<ll> a(n + 1);
    ll t_sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        t_sum += a[i];
    }
    if (t_sum < s)
        cout << -1 << endl;
    else
    {
        ll sum = 0;
        ll cnt = INT_MAX;
        ll i = 0, j = 0;
        while (i < n)
        {
            sum += a[i];
            while (sum - a[j] >= s)
            {
                sum -= a[j];
                j++;
            }
            if (sum >= s)
            {
                cnt = min(cnt, i - j + 1);
            }
            i++;
        }
        cout << cnt << endl;
    }
    return 0;
}