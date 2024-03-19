#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    int a[n];
    int b[m];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<m; i++)
    {
        cin>>b[i];
    }
    int i=0, j=0, ans=0;
    while(i<m)
    {
        while(a[j]<b[i] && j<n)
        {
            ans++;
            j++;
        }
        i++;
        cout<<ans<<" ";
    }
    return 0;
}

//https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/B