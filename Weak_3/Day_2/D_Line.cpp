#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        if (n == 1)
        {
            cout << 0 << '\n';
            continue;
        }
        ll mx_sum = 0;
        ll x = n - 1, y = (n + 1) / 2; // for ceil round
        if (n % 2 == 0)
        {
            mx_sum = (x + y) * (x - y + 1); //(x+y)*(x-y+1)/2*2
        }
        else
        {
            mx_sum = (x + y) * (x - y + 1) + n / 2; // adding n/2 for middle number
        }
        vector<ll> v;
        ll i = 0, j = n - 1;
        ll cnt = 0;
        while (i < j)
        {
            if (s[i] == 'L')
            {
                v.push_back(n - i - 1 - cnt);
            }
            if (s[j] == 'R')
            {
                v.push_back(n - i - 1 - cnt);
            }
            i++, j--, cnt++;
        }
        sort(v.begin(), v.end());
        int d=v.size();
        vector<ll> result(n, mx_sum);
        vector<ll> pref(d + 1, 0);
        for (ll i = 1; i <= d; i++)
        {
            pref[i] = pref[i - 1] + v[i - 1];
        }
        for (ll i = 0; i < d - 1; i++)
        {
            result[i] = result[i] - pref[d - i - 1];
        }
        for (ll val : result)
        {
            cout << val << " ";
        }
        cout <<'\n';
    }
    return 0;
}
