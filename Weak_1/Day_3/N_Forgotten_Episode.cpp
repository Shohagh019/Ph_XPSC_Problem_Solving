#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int freq[n+1]={0};
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        freq[x]=1;
    }
    for(int i = 1; i <= n; i++)
    {
        if(freq[i] == 0)
        {
            cout<<(i)<<'\n';
        }
    }
    return 0;
}

//https://codeforces.com/problemset/problem/440/A