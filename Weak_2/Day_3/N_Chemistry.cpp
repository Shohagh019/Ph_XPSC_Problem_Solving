#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (k >= n)
        {
            cout << "NO" << '\n';
        }
        else
        {
            map<char, int> mp;
            for (int i = 0; i < n; i++)
            {
                char x;
                cin >> x;
                mp[x]++;
            }
            int cnt = 0;
            for (auto it : mp)
            {
                if (it.second % 2 != 0)
                {
                    cnt++;
                }
            }
            if(cnt-1<=k) cout<<"YES" << '\n';
            else cout<<"NO" << '\n';
        }
    }
    return 0;
}