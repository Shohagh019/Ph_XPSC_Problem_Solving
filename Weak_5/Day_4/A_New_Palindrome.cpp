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
        string tmp= s.substr(0,(s.size()/2));
        if(tmp.size()==1) cout<<"NO"<<endl;
        else
        {
            int flag=0;
            for(int i=0;i<tmp.size()-1;i++)
            {
                if(tmp[i]!=tmp[i+1])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
    return 0;
}