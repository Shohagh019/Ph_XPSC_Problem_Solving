#include<bits/stdc++.h>
#define ll long long
#define edl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    stack<string> s;
    for(int i = 0; i < n; i++)
    {
        string p;
        cin >> p;
        s.push(p);
    }
    set<string> result;
    while(!s.empty())
    {
        if(result.find(s.top()) == result.end())
        {
            result.insert(s.top());
            string p= s.top();
            if(p.size()>2)
            {
                cout<<p.substr(p.size()-2);
            }
        }
        s.pop();
    }
    return 0;
}