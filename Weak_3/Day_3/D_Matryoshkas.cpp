#include<bits/stdc++.h>
#define ll long long
#define edl '\n'
using namespace std;
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
        vector<int> a(n);
        map<int, int> mp;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        sort(a.begin(), a.end());
        int ans=0;
        for(int i = 0; i < n; i++)
        {
            int val = a[i];
            if(mp[val]!=0)
            {
                ans++;
                while(mp[val]>0)
                {
                    mp[val]--;
                    val++;
                }
            }
        }
        cout<<ans<<edl;
    }
    return 0;
}