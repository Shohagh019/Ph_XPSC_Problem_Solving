#include <bits/stdc++.h>
using namespace std;
void get_code(int &v, int m, string s)
{
    for (int i = 0; i < m; i++)
    {
        if (s[i] == 'U')
        {
            if (v == 0)
            {
                v = 9;
            }
            else
            {
                v--;
            }
        }
        else
        {
            if (v == 9)
            {
                v = 0;
            }
            else
            {
                v++;
            }
        }
    }
}
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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            int m;
            cin >> m;
            string s;
            cin >> s;
            get_code(v[i], m, s);
        }
        for (int val : v)
        {
            cout << val << " ";
        }
        cout << '\n';
    }
    return 0;
}

//https://codeforces.com/problemset/problem/1703/C