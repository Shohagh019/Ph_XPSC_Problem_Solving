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
        int n;
        cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll total=0;
        for(int i = 0; i < n; i++)
        {
            total += a[i];
            if(total < 0)
            {
                total=0;
            }
        }
        cout<<total<<endl;
    }
    return 0;
}