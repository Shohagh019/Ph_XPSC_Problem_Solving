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
        int n;
        cin >> n;
        if (n % 2 != 0)
        {
            for (int i = 1; i <= n; i++)
            {
                cout<<i<<" ";
            }
        }
        else
        {
            cout<<1+n/2<<" ";
            for(int i=2; i<=n; i++)
            {
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}