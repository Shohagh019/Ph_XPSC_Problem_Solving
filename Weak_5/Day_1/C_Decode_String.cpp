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
        int i=n-1;
        string s;
        cin >> s;
        vector<string> st;
        while(i>=0)
        {
            if(s[i]=='0' && i-2>=0)
            {
                st.push_back((s.substr(i-2, 2)));
                i=i-3;
            }
            else
            {
                st.push_back(s.substr(i,1));
                i=i-1;
            }
        }
        reverse(st.begin(), st.end());
        for(string s: st)
        {
            cout<<char(96+stoi(s));
        }
        cout<<endl;

    }
    return 0;
}