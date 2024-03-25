#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    map<int,int> freq;
    ll cnt = 0, l=0,r=0;
    while(r<n)
    {
        freq[a[r]]++;
        while(freq.size()>k)
        {
            freq[a[l]]--;
            if(freq[a[l]]==0)
            {
                freq.erase(a[l]);
            }
            l++;
        }
        cnt+=r-l+1;
        r++;
    }
    cout<<cnt<<endl;
    return 0;
}
//https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/E



