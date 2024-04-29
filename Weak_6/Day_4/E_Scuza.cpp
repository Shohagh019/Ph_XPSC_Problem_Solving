#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        vector<ll> pref;
        pref.push_back(0);
        vector<ll> index;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            pref.push_back(pref.back() + x);
            if (i == 0)
            {
                index.push_back(x);
            }
            else
            {
                index.push_back(max(index.back(), x));
            }
        }
        while(q--)
        {
            int x;
            cin>>x;
            int ind = upper_bound(index.begin(), index.end(),x)-index.begin();
            cout<<pref[ind]<<" ";
        }
        cout<<endl;
    }
    return 0;
}