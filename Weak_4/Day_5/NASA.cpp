#include<bits/stdc++.h>
#define ll long long
#define edl '\n'
using namespace std;
vector<ll> pal;
void count_palindrome()
{
    int n=1<<15;
    for(int i=0; i<n; i++)
    {
        string str = to_string(i);
        string rvs_str = str;
        reverse(str.begin(), str.end());
        if(str==rvs_str)
        {
            pal.push_back(i);
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        unordered_map<ll,int> mp;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        ll ans=0;
        count_palindrome();
        for(auto x: a)
        {
            for(auto y:pal)
            {
                ans += mp[(x^y)];
            }
            mp[x]--;
        }
        cout<<ans<<edl;
        pal.clear();
    }
    return 0;
}