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
        string s;
        cin>>s;
        vector<pair<ll,char>> small,cap,ans;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]!='b' && s[i]!='B')
            {
                if(s[i]>=97)
                {
                    small.push_back({i,s[i]});
                }
                else cap.push_back({i,s[i]});
            }
            else
            {
                if(s[i]=='b'&& !small.empty())
                {
                    small.pop_back();
                }
                else if(s[i]=='B' && !cap.empty())
                {
                    cap.pop_back();
                }
            }
        }
        for(int i=0;i<small.size(); i++)
        {
            ans.push_back(small[i]);
        }
        for(int i=0;i<cap.size(); i++)
        {
            ans.push_back(cap[i]);
        }
        sort(ans.begin(),ans.end());
        for(auto p:ans)
        {
            cout<<p.second;
        }
        cout<<endl;
    }
    return 0;
}