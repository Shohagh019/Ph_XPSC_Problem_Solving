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
    int m;
    cin>>m;
    vector<int> b(m);
    for(int i=0; i<m; i++)
    {
        cin>>b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int cnt=0;
    for(int i=0; i<n; i++)
    { 
        for(int j=0; j<m; j++)
        {
            if(abs(a[i]-b[j])<=1)
            {
                cnt+=1;
                b[j]=-2;
                break;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}