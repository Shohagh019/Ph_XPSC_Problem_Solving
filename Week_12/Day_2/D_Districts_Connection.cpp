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
        vector<ll> a(n);
        set<ll> st;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            st.insert(a[i]);
        }
        if(st.size()==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl; 
        ll fi=a[0];
        ll la;
        for(int i=0; i<n; i++)
        {
            if(a[i]!=fi)
            {
                cout<<1<<" "<<i+1<<endl;
                la=i+1;
            }
        }
        for(int i=1; i<n; i++)
        {
            if(a[i]==fi)
            {
                cout<<la<<" "<<i+1<<endl;
            }
        }
    }
    return 0;
}