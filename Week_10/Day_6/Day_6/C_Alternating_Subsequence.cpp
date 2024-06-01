#include<bits/stdc++.h>
#define ll long long
#define edl '\n'
using namespace std;
bool sign(int n)
{
    return n>=0;
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
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        ll ans=0;
        for(int i = 0; i < n; i++)
        {
            int mx=v[i];
            int j=i;
            while(j<n && sign(v[i])==sign(v[j]))
            {
                mx=max(mx,v[j]);
                j++;
            }
            i=j-1;
            ans+=mx;
        }
        cout<<ans<<endl;

    }
    return 0;
}