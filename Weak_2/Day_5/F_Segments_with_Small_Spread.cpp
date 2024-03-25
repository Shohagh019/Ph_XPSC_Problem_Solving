#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    multiset<ll> mt;
    ll cnt = 0, l = 0, r = 0;
    while (r<n)
    {
        mt.insert(a[r]);

        while (*mt.rbegin() - *mt.begin() > k)
        {
            auto it = mt.find(a[l]);
            mt.erase(it);
            l++;
        }
        cnt += r - l + 1;
        r++;
    }
    cout << cnt << endl;
    return 0;
}
// https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/F