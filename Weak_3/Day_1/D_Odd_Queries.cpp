#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        vector<ll>pref(n+1,0);
        for (int i = 1; i <=n; i++)
        {
            ll x;
            cin >> x;
            pref[i] = pref[i-1]+x;
        }
        while (q--)
        {
            ll l, r, k;
            cin >> l >> r >> k;
            ll left_sum= pref[n]-(pref[r]-pref[l-1]);
            ll sum= left_sum+(r-l+1)*k;
            if(sum%2!= 0) cout<<"YES"<<'\n';
            else cout<<"NO"<<'\n';
        }
    }
    return 0;
}


