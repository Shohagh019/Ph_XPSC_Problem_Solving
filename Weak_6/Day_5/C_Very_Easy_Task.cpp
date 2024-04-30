#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;
const ll maxN = 1e12;
auto solve(ll ans, ll n, ll x, ll y)
{

    ll result = (ans / x + ans / y);
    return result >= n-1;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, x, y;
    cin >> n >> x >> y;
    ll l = 0, r = maxN, ans = -1, mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (solve(mid,n,x,y))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans+min(x,y) << endl;
    return 0;
}