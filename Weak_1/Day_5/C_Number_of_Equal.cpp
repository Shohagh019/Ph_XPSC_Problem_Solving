#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    int a[n], b[m];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int j=0; j<m; j++)
    {
        cin>>b[j];
    }
    int i=0,j=0; ll ans=0;
    while(i<n && j<m)
    {
        int cnt1=0; int cnt2=0; int curr= a[i];
        while(a[i]==curr && i<n)
        {
            cnt1++;
            i++;
        }
        while(curr>b[j] && j<m)
        {
            j++;
        }
        while(b[j]==curr && j<m)
        {
            cnt2++;
            j++;
        }
        ans+=(1ll*cnt1*cnt2);
    }
    cout<<ans<<endl;
    return 0;
}

