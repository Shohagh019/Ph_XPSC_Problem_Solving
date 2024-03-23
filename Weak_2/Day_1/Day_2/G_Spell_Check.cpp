#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (n != 5)
            cout << "NO";
        else
        {
            int T = 0, i = 0, u = 0, r = 0, m = 0;
            for (int j = 0; j < n; j++)
            {
                if (s[j] == 'T')
                    T++;
                else if (s[j] == 'i')
                    i++;
                else if (s[j] == 'u')
                    u++;
                else if (s[j] == 'r')
                    r++;
                else if (s[j] == 'm')
                    m++;
            }
            if (T == 1 && i == 1 && u == 1 && r == 1 && m == 1)
                cout << "YES";
            else
                cout << "NO";
        }
        cout << '\n';
    }
    return 0;
}