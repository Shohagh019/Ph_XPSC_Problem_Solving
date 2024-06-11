#include<bits/stdc++.h>
#define ll long long
#define edl '\n'
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
        for(int i=0; i<n; i++) cin>>a[i];
        sort(a.begin(), a.end());
        int mn=INT_MAX;
        int i,j;
        for(int k=1; k<n; k++)
        {
            if(a[k]-a[k-1]<mn)
            {
                
                mn=min(mn, a[k]-a[k-1]);
                i=k-1, j=k;
            }
        }
        if(n==2)
        {
            cout<<a[0]<<" "<<a[1];
        }
        else
        {
            for(int k=j; k<n; k++) cout<<a[k]<<" ";
            for(int k=0; k<=i; k++) cout<<a[k]<<" ";
        }
        cout<<endl;
    }
    return 0;
}