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
        ll n,k;
        cin>>n>>k;
        vector<ll> front;
        vector<ll> back;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            if(x<0) back.push_back(-x);
            else front.push_back(x);
        }
        sort(front.begin(), front.end());
        sort(back.begin(), back.end());
        ll ans=0;
        for(int i=front.size()-1; i>=0; i-=k)
        {
            ans+=2*front[i];
        }
        for(int i=back.size()-1; i>=0; i-=k)
        {
            ans+=2*back[i];
        }
        ll l=back.size()-1,r=front.size()-1,last;
        if(back.empty()) last = front[r];
        else if(front.empty()) last = back[l];
        else
        {
            last= max(front[r],back[l]);
        }
        ans-=last;
        cout<<ans<<endl;
        
    }
    return 0;
}