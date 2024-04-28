#include <bits/stdc++.h>
#define ll long long
#define edl '\n'
using namespace std;
const int maxN = 1e4 + 5;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<ll> v;
    for (int i = 1; i <= maxN; i++)
    {
        v.push_back(pow(i, 3));
    }
    int t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        bool ans = false;
        for (int i = 0; i < maxN; i++)
        {
            int l = 0, r = maxN - 1, mid;
            ll need = x - v[i];
            bool found = false;
            while (l <= r)
            {
                mid = (l + r) / 2;
                if (v[mid] == need)
                {
                    found = true;
                    break;
                }
                else if (v[mid] > need)
                {
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }
            if (found)
            {
                ans = true;
                break;
            }
        }
        if (ans)
        {
            cout << "YES" << edl;
        }
        else
        {
            cout << "NO" << edl;
        }
    }

    return 0;
}
