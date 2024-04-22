#include<bits/stdc++.h>
#define ll long long
#define edl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int flag = 0;
        for(int i = 2; i <= n-1; i++)
        {
            if(a[i]>a[i-1] && a[i]>a[i+1])
            {
                cout<<"YES"<<edl;
                cout<<i-1<<" "<<i<<" "<<i+1<<edl;
                flag = 1;
                break;
            }
        }
        if(flag==0) cout<<"NO"<<edl;
    }
    return 0;
}