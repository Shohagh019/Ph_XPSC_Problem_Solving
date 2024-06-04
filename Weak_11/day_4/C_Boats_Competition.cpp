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
        int n;
        cin>>n;
        vector<int> a(n+1);
        for(int i=1; i<=n; i++) cin>>a[i];
        sort(a.begin(),a.end());
        int ans=0;
        for(int s=1; s<=100; s++)
        {
            int cnt=0;
            for(int i=1,j=n;i<j;)
            {
                if(a[i]+a[j]>s) j--;
                else if(a[i]+a[j]<s) i++;
                else
                {
                    cnt++;
                    i++,j--;
                }
            }
            ans=max(ans,cnt);
        }
        cout<<ans<<endl;
    }
    return 0;
}