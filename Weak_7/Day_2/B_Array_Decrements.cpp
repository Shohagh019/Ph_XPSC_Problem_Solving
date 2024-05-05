#include<bits/stdc++.h>
#define ll long long
#define edl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n+3);
        vector<int> b(n+4);
        for(int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for(int i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        bool flag = false;
        map<int,int> mp;
        int mx = 0;
        for(int i = 0; i < n; i++)
        {
            if(a[i]<b[i])
            {
                flag = true;
                break;
            }
            else
            {
                if(b[i]==0)
                {
                    mx=max(mx,a[i]);
                }
                else
                {
                    mp[(a[i]-b[i])]++;
                }
            }
        }
        int dif=-1;
        for(auto it:mp)
        {
            dif=it.first;
        }
        if(flag || mp.size()>1 || (mx> dif && dif!=-1)) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}