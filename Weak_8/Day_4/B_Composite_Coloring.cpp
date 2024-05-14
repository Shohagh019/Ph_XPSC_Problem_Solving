#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> prime={2,3,5,7,11,13,17,19,23,29,31};
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        vector<int> ans(n,-1);
        int cur_col=1;
        for(int p: prime)
        {
            bool flag=0;
            for(int i=0; i<n; i++)
            {
                if(ans[i]!=-1) continue;
                if(a[i]%p) continue;
                flag=1;
                ans[i]=cur_col;
            }
            if(flag) cur_col++;
        }
        cout<<cur_col-1<<endl;
        for(int i=0; i<n; i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}