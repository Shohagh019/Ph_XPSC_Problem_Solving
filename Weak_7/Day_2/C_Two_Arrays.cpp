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
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        bool flag=false;
        int ans= 0;
        for(int i=0;i<n; i++)
        {
            if(a[i]>b[i] || (b[i]-a[i]>1))
            {
                flag=true;
                break;
            }

        }
        if(flag)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}