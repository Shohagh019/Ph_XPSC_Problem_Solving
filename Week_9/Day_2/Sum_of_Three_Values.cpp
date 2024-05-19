#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x;
    cin>>n>>x;
    vector<pair<ll,int>> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i].first;
        a[i].second=i+1;
    }
    sort(a.begin(),a.end());
    for(int i=0; i<n; i++)
    {
        ll x2= x-a[i].first;
        for(int j=i+1, k=n-1;j<k; j++)
        {
            while(a[j].first+a[k].first>x2)
            {
                k--;
            }
            if(j<k && a[j].first+a[k].first==x2)
            {
                cout<<a[i].second<<" "<<a[j].second<<" "<<a[k].second<<endl;
                return 0;
            }
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
    return 0;
}