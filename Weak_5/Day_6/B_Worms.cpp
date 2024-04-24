#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    vector<int> fq(n);
    fq[0] = a[0];
    for(int i=1; i<n; i++)
    {
        fq[i]=fq[i-1]+a[i];
    }
    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        auto it = lower_bound(fq.begin(),fq.end(),x)-fq.begin();
        cout<<it+1<<endl;
    }
    return 0;
}