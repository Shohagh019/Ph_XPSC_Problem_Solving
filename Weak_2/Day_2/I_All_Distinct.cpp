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
        vector<int> v(n);
        for(int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        set<int> s;
        for(int val:v)
        {
           s.insert(val);
        }
        if(s.size()%2 == 0 && v.size()%2 == 0) cout<<s.size()<<endl;
        else if(s.size()%2 != 0 && v.size()%2 == 0) cout<<s.size()-1<<endl;
        else if(s.size()%2 != 0 && v.size()%2 != 0) cout<<s.size()<<endl;
        else if(s.size()%2 == 0 && v.size()%2 != 0) cout<<s.size()-1<<endl;     
    }
    return 0;
}