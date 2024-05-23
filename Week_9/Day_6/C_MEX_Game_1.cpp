#include <bits/stdc++.h>
#define ll long long
#define edl '\n'
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
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        map<ll, ll> mp;
        for (int i = 0; i < n; i++)
        {
            mp[v[i]]++;
        }
        ll mex = 0;
        for (int i = 0; i <= n; i++)
        {
            if (mp[i] == 0)
            {
                mex = i;
                break;
            }
        }
        ll mex2 = 0;
        ll first_one = 0;
        for (int i = 0; i <= n; i++)
        {
            if (mp[i] == 1)
            {
                first_one = i;
                break;
            }
        }
        for (int i = first_one + 1; i <= n; i++)
        {
            if (mp[i] <= 1)
            {
                mex2 = i;
                break;
            }
        }
        mex = min(mex, mex2);
        cout << mex << endl;
    }

    return 0;
}