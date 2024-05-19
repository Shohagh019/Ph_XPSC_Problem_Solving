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
    vector<int> a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    set<int> st;
    int ans=-1;
    int track=0;
    for(int i = 0; i < n; i++)
    {
        
        while(st.count(a[i]))
        {
            st.erase(a[track]);
            track++;
        }
        st.insert(a[i]);
        ans=max(ans,int(st.size()));
    }
    cout<<ans<<endl;
    return 0;
}