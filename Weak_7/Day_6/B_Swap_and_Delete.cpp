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
        int x=0,y=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='0') x++;
            else y++;
        }
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='0')
            {
                if(y) y--;
                else break;
            }
            else
            {
                if(x) x--;
                else break;
            }
        }
        cout<<x+y<<endl;
    }
    return 0;
}