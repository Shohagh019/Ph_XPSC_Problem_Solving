#include <bits/stdc++.h>
#define ll long long
#define edl '\n'
using namespace std;
ll get_divisor(ll n)
{
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
            return i;
    }
    return n;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll l, r;
        cin >> l >> r;
        if (r <= 3)
        {
            cout << -1 << endl;
        }
        else
        {
            if(l<r)
            {
                if(r%2!=0)
                {
                    r--;
                }
                cout<<2<<" "<<r-2<<endl;
            }
            else
            {
                ll div=get_divisor(l);
                if(div==l) cout<<-1<<endl;
                else cout<<div<<" "<<l-div<<endl;
            }
        }
    }
    return 0;
}