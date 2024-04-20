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
        ll n;
        cin >> n;
        vector<ll> a(n);
        ll mn=INT_MAX;
        ll sum=0;
        ll ncnt=0;
        for(int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i]<0) ncnt++;
            a[i]=abs(a[i]);
            mn=min(mn,a[i]);
            sum+=a[i];
        }
        if(ncnt%2!=0)
        {
            sum-=mn*2;
        }
        cout<<sum<<endl;
    }
    return 0;
}