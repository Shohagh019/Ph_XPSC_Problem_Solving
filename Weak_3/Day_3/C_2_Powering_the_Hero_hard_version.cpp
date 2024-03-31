#include<bits/stdc++.h>
#define ll long long
#define edl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll ans=0;
        priority_queue<ll> pq;
        for(int i = 0; i < n; i++)
        {
            if(a[i] ==0)
            {
                if(pq.empty()) continue;
                ans=ans+pq.top();
                pq.pop();
            }
            else
            {
                pq.push(a[i]);
            }
        }
        cout<<ans<<edl;
    }
    return 0;
}