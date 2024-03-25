#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, s;
    cin >> n >> s;
    vector<ll> a(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll cnt = 0, sum = 0, i = 0, j = 0;
    while (j < n)
    {
        sum += a[j];
        while(sum>=s)
        {
            cnt += n-j;
            sum -= a[i];
            i++;
        }
        j++;
    }
    cout << cnt << endl;
    return 0;
}

//https://codeforces.com/edu/course/2/lesson/9/2/practice/status