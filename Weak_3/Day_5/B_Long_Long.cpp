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
        ll sum = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += abs(a[i]);
        }
        ll cnt = 0;
        bool flag = false;
        for(int i = 0; i < n; i++)
        {
            if(a[i]<0 && !flag)
            {
                flag = true;
                cnt++;
            }
            if(a[i]>0)
            {
                flag = false;
            }
        }
        cout<<sum<<" "<<cnt<<edl;
    }
    return 0;
}