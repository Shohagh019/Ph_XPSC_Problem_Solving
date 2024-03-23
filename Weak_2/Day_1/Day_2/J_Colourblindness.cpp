#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s, k;
        cin >> s >> k;
        bool flag=true;
        for(int i = 0; i < n; i++)
        {
            if(s[i]!=k[i])
            {
                if(s[i]=='B')
                {
                    if(k[i] !='G')
                    {
                        flag=false;
                    }
                }
                else if(s[i]=='G')
                {
                    if(k[i]!='B')
                    {
                        flag=false;
                    }
                }
                else if(s[i]=='R')
                {
                    if(k[i]!='R')
                    {
                        flag=false;
                    }
                }
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}