#include<bits/stdc++.h>
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
        map<int,int> mp;
        set<int> s;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            s.insert(x);
            if(mp.find(x)!=mp.end())
            {
                mp[x]++;
            }
            else
            {
                mp[x]=1;
            }
        }
        int mx=INT_MIN;
        for(auto it: mp)
        {
            mx=max(mx, it.second);
        }
        int tmp= mx;
        int cnt=0;
        while(tmp<n)
        {
            cnt++;
            tmp*=2;
        }
        int swp = n-mx;
        cout<<cnt+swp<<'\n';
    }
    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         int mx=INT_MIN;
//         set<int> s;
//         for(int i=0; i<n; i++)
//         {
//             int x;
//             cin>>x;
//             s.insert(x);
//         }
 
//         int multi= max(1,int(n-s.size()));
//         int count_clone=0;
//         while(multi<n)
//         {
//             count_clone++;
//             multi=multi*2;
//         }
//         int swp;
//         multi= max(1,int(n-s.size()));
//         if(multi==1)
//         {
//             swp= s.size()-1;
//         }
//         else swp= s.size();
//         int ans = count_clone + swp;
//         if(s.size()>1) cout<<ans<<endl;
//         else cout<<0<<endl;
//     }
//     return 0;
// }