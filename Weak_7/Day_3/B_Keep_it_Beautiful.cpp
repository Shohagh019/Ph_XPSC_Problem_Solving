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
        ll q;
        cin >> q;
        ll f = -1, l = -1, x, flag = 0;
        while (q--)
        {
            cin >> x;
            if (flag)
            {
                if(x>=l && x<=f)
                {
                    l=x;
                    cout<<1;
                }
                else
                {
                    cout<<0;
                }
            }
            else
            {
                if (f == -1)
                {
                    f = x, l = x;
                    cout << 1;
                }
                else if (x >= l)
                {
                    l = x;
                    cout << 1;
                }
                else if (f>=x)
                {
                    l = x;
                    flag = 1;
                    cout << 1;
                }
                else
                {
                    cout << 0;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}