#include<bits/stdc++.h>
#define ll long long
#define edl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i <n; i++)
    {
        cin >> a[i];
    }
    while(k--)
    {
        int x;
        cin >> x;
        auto it = lower_bound(a.begin(), a.end(),x)-a.begin();
        cout << it+1 << endl;
    }
    return 0;
}