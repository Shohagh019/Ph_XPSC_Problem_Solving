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
        vector<string> s;
        set<string> st;
        for(int i = 0; i < n; i++)
        {
            string x;
            cin>>x;
            s.push_back(x);
            st.insert(x);
        }
        for(int i=0; i<s.size(); i++)
        {
            if(s.size()==1)
            {
                cout<<'0';
                continue;
            }
            bool check =true;
            for(int j=0; j<s[i].size(); j++)
            {
                string a= s[i].substr(0,j);
                string b= s[i].substr(j,s[i].size());
                if(st.count(a) && st.count(b))
                {
                    cout<<'1';
                    check=false;
                    break;
                }
            }
            if(check) cout<<'0';
        }
        cout<<endl;
    }
    return 0;
}