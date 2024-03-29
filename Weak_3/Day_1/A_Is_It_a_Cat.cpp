#include<bits/stdc++.h>
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
        string s;

        cin >> s;
        string f="";
        char check='\0';
        for(char &c:s)
        {
            c=tolower(c);
            if(check!=c)
            {
                f+=c;
                check=c;
            }           
        }
        if(f=="meow") cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}