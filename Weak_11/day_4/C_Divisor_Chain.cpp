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
        vector<int> ans;
        int bit=0;
        ans.push_back(n);
        while(n>(1<<bit))
        {
            if(n&(1<<bit))
            {
                n=n^(1<<bit);
                ans.push_back(n);
            }
            bit++;
        }
        while(n>1)
        {
            ans.push_back(n/2);
            n=n/2;
        }
        cout<<ans.size()<<endl;
        for(auto it: ans)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}