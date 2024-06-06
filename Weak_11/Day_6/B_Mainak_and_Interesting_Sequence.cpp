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
        int n,m;
        cin>>n>>m;
        vector<int> a(n+1);
        if(n>m)
        {
            cout<<"No"<<endl;
            continue;
        }
        if(n%2==0 && m%2==0)
        {
            cout<<"Yes"<<endl;
            for(int i=1; i<=n-2; i++)
            {
                a[i]=1;
            }
            a[n-1]=(m-(n-2))/2;
            a[n]=a[n-1];
        }
        else if(n%2==0 && m%2==1)
        {
            cout<<"No"<<endl;
            continue;
        } 
        else
        {
            cout<<"Yes"<<endl;
            for(int i=1; i<=n-1; i++)
            {
                a[i]=1;
            }
            a[n]=m-(n-1);
        }
        for(int i=1; i<=n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}