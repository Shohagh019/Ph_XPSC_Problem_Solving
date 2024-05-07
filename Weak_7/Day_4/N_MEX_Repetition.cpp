#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        ll t_sum = n * (n + 1) / 2;
        ll missing = t_sum - sum;
        k = k % (n + 1);
        if (n == 1)
        {
            if (k)
                if(v[0]==0) cout<<1;
                else cout<<0;
            else
                cout << v[0];
        }
        else if(k==0)
        {
            for(int i=0; i<n; i++)
            {
                cout<<v[i]<<" ";
            }
        }
        else
        {
            for (int i = n - k + 1; i < n; i++)
            {
                cout << v[i] << " ";
            }
            cout << missing << " ";
            for (int i = 0; i < n - k; i++)
            {
                cout << v[i] << " ";
            }
        }

        cout << endl;
    }
    return 0;
}