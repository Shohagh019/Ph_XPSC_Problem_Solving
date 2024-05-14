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
        int a,b,l;
        cin>>a>>b>>l;
        set<int> st;
        int x=0;
        while(true)
        {
            if(int(pow(a,x))>l) break;
            if(l%int(pow(a,x))) break;
            int res=l/int(pow(a,x));
            st.insert(res);
            while(res%b==0)
            {
                res/=b;
                st.insert(res);
            }
            x++;
        }
        cout<<st.size()<<endl;
    }
    return 0;
}


