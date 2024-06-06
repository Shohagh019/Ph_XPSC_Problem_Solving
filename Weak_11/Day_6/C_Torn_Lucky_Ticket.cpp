#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;
bool cmp(string &a, string &b)
{
    return a.size()<b.size();
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    vector<string> a(n);
    for(ll i=0; i<n; i++) cin>>a[i];
    sort(a.begin(),a.end(), cmp);
    map<pair<ll,ll>,ll> mp;
    ll ans=n;
    for(auto s:a)
    {
        ll sz=s.size();
		for(ll m = 1; m <= sz; m++) {
			if((sz + m) % 2 != 0) continue;
			ll mid = (m + sz) / 2;
			ll req = 0;
			for(ll i = 0; i < mid; i++) req += (s[i] - '0');
			for(ll i = mid; i < sz; i++) req -= (s[i] - '0');
 
			if(req >= 0) ans += mp[{m, req}];
		}
 
		reverse(s.begin(), s.end());
		for(ll m = 1; m <= sz; m++) {
			if((sz + m) % 2 != 0) continue;
			ll mid = (m + sz) / 2;
			ll req = 0;
			for(ll i = 0; i < mid; i++) req += (s[i] - '0');
			for(ll i = mid; i < sz; i++) req -= (s[i] - '0');
 
			if(req >= 0) ans += mp[{m, req}];
		}
        ll sum=0;
        for(ll i=0; i<sz; i++) sum+=(s[i]-'0');
        mp[{sz,sum}]++;
    }
    cout<<ans<<endl;
    return 0;
}