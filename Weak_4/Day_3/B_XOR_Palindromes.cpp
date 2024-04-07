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
        string a;
        cin >> a;
        int not_matched =0;
        string ans="";
        int track=0;
        for(int i=0,j=n-1; i<j; i++, j--)
        {
            if(a[i]!=a[j]) not_matched++;
        }
        for(int i=0; i<not_matched; i++)
        {
            ans+='0';
        }
        if(n&1!=0)
        {
            for(int i=not_matched; i<=n-not_matched; i++)
            {
                ans+='1';
            }
        }
        else
        {
            for(int i=not_matched; i<=n-not_matched;i++)
            {
                if((track&1)==0) ans+='1';
                else ans+='0';
                track++;
            }
        }
        for(int i=0; i<not_matched; i++)
        {
            ans+='0';
        }
        cout<<ans<<edl;
        
    }
    return 0;
}