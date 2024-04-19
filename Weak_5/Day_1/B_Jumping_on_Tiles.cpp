#include <bits/stdc++.h>
#define ll long long
#define edl '\n'
using namespace std;
bool cmp_asc(pair<int, int> a, pair<int, int> b)
{
    return a.first < b.first;
}
bool cmp_dsc(pair<int, int> a, pair<int, int> b)
{
    return a.first > b.first;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        char start = s[0];
        char end = s[s.length() - 1];
        string a = "";
        vector<pair<char, int>> pr;
        for (int i = 1; i < s.length() - 1; i++)
        {
            if (start < end)
            {
                if (s[i] >= start && s[i] <= end)
                {
                    a += s[i];
                    pr.push_back({s[i], i});
                }
            }
            else
            {
                if (s[i] <= start && s[i] >= end)
                {
                    a += s[i];
                    pr.push_back({s[i], i});
                }
            }
        }
        if (start < end)
        {
            sort(a.begin(), a.end());
        }
        else
        {
            sort(a.begin(), a.end(), greater<char>());
        }
        a=s[0]+a+s[s.length()-1];
        int ans=0;
        for(int i=0; i<a.length()-1; i++)
        {
            ans += abs(a[i+1]-a[i]);
        }
        cout<<ans<<" "<<a.size()<<endl;
        cout<<1<<" ";
        if (start < end)
        {
            sort(pr.begin(), pr.end(), cmp_asc);
        }
        else
        {
            sort(pr.begin(), pr.end(), cmp_dsc);
        }
        for (pair<char, int> p : pr)
        {
            cout << p.second + 1 << " ";
        }
        cout<<s.length()<<" ";
        cout<<endl;
    }
    return 0;
}
