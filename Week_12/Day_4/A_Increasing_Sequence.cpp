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
        vector<int> a(n);
        for(int i=0; i<n; i++) cin>>a[i];
        int cnt=1;
        for(int i=0; i<n; i++)
        {
            if(i==0)
            {
                if(a[i]==cnt) cnt++;
                continue;
            }
            cnt++;
            if(a[i]==cnt) cnt++; 
        }
        cout<<cnt<<endl;
    }
    return 0;
}