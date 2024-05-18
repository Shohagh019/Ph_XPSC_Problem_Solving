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
        int a, b;
        cin >> a >> b;
        ll z = a * b;
        ll x = a;
        ll y = z + a;
        if (b != 1)
        {
            cout << "YES" << endl;
            cout << z << " " << x << " " << y << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}