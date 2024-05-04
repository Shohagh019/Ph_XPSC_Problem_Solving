#include<bits/stdc++.h>
#define ll long long
#define edl '\n'
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
        string s;
        cin>>s;
        int cnt_one = 0, cnt_zero=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='1') cnt_one++;
            else cnt_zero++;
        }
        int pr=min(cnt_one,cnt_zero);
        if(pr%2==0) cout<<"Ramos"<<endl;
        else cout<<"Zlatan"<<endl;
    }
    return 0;
}