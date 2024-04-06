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
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int odd=0;
        int ans=0;
        for(int i=0; i<k; i++)
        {
            if(a[i]&1!=0) odd++;
        }
        if(odd>0) ans++;
        for(int i=k; i<n; i++)
        {
            if(a[i-k]&1!=0) odd--;
            if(a[i]&1!=0) odd++;
            if(odd>0) ans++;
        }
        cout<<ans<<edl;
    }
    
    return 0;
}