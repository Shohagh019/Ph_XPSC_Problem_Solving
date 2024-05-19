#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    multiset<int> mt;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        mt.insert(x);
    }
    for(int i=0; i<m; i++)
    {
        int p;
        cin>>p;
        auto it = mt.upper_bound(p);
        if(it==mt.begin())
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<*(--it)<<endl;
            mt.erase(it);
        }
    }
    return 0;
}