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
        int n,m,h;
        cin >> n >> m >> h;
        vector<int> a(n);
        vector<int> b(m);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<m; i++)
        {
            cin>>b[i];
        }
        sort(a.begin(),a.end(),greater<int>());
        sort(b.begin(),b.end(),greater<int>());
        ll result=0;
        for(int i=0; i<min(n,m); i++)
        {
            result+= min(1ll*b[i]*h,1ll*a[i]);
        }
        cout<<result<<edl;
    }
    return 0;
}