#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    ll k;
    cin>>k;
    vector<ll> ans;
    queue<ll> q;
    ll i=0, j=0;
       while(j<n){
           if(a[j]<0) q.push(a[j]);
           if((j-i+1)<k){
               j++;
           }
           else{
               if(!q.empty()){
                   ans.push_back(q.front());
                   if(a[i]<0) q.pop();
                   
               }
               else ans.push_back(0);
               i++;
               j++;
           }
       }
    for(int res:ans)
    {
        cout<<res<<" ";
    }
    return 0;
}


