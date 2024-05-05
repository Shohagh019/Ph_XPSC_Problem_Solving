#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
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
        set<int> st;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x <= n && (!st.count(x)))
            {
                st.insert(x);
            }
            else
            {
                v.push_back(x);
            }
        }
        sort(v.begin(),v.end(),greater<int>());
        set<int> tmp;
        for(int i=1; i<=n; i++)
        {
            if(!st.count(i))
            {
                tmp.insert(i);
            }
        }
        bool flag=false;
        for(int i:v)
        {
            auto it = tmp.end();
            it--;
            int p=*(it);
            if(p>(i-1)/2)
            {
                flag=true;
                break;
            }
            // tmp.erase(it);
        }
        if(flag) cout<<-1<<endl;
        else
        {
            cout<<v.size()<<endl;
        }
    }
    return 0;
}