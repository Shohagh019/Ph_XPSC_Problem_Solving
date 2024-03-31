#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<pair<int, int>> list1(n);
        vector<pair<int, int>> list2(n);
        vector<pair<int, int>> list3(n);
        for (int i = 0; i < n; i++)
        {
            cin >> list1[i].first;
            list1[i].second = i + 1;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> list2[i].first;
            list2[i].second = i + 1;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> list3[i].first;
            list3[i].second = i + 1;
        }
        sort(list1.rbegin(), list1.rend());
        sort(list2.rbegin(), list2.rend());
        sort(list3.rbegin(), list3.rend());
        int ans=0;
        for(int i=0; i<3; i++)// for only top 3 days
        {
            for(int j=0; j<3; j++)
            {
                for(int k=0; k<3; k++)
                {
                    if(list1[i].second!=list2[j].second && list2[j].second!=list3[k].second && list1[i].second!=list3[k].second)
                    {
                        ans= max(ans,list1[i].first+list2[j].first+list3[k].first);
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}