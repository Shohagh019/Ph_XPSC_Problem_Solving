#include <bits/stdc++.h>
#define ll long long
#define edl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int mx_bit=0;
        for(auto x: a)
        {
            for(int i=0; i<61; i++)
            {
                if(((1ll<<i) & x)>0)
                {
                    mx_bit = max(mx_bit,i);
                }
            }
        }
        int cnt = 0;
        for(auto x: a)
        {
            cnt+= (((1ll<<mx_bit) & x)>0);
        }
        cout << (cnt+1)/2 << edl;
    }
    return 0;
}