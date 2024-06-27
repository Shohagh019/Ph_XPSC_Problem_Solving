#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,d,w;
        cin>>n>>k>>d>>w;
        vector<int> a(n);
        for(int i=0; i<n; i++) cin>>a[i];
        ll ans=0, valid, rem=k;
        for(int i=0; i<n; i++)
        {
            if(i==0 || valid<a[i] || rem<1)
            {
                ans++;
                rem=k;
                valid=a[i]+d+w;
            }
            rem--;
        }
        cout<<ans<<endl;
    }
    return 0;
}