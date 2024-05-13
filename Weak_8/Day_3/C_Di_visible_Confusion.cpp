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
        vector<int> a(n+2);
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        int ans=0;
        for(int i=1; i<=n; i++)
        {
            int ind=0;
            for(int j=2; j<=i+1; j++)
            {
                if(a[i]%j!=0)
                {
                    ind=1;
                    break;
                }
            }
            if(ind==0)
            {
                ans=1;
                break;
            }
        }
        if(!ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}