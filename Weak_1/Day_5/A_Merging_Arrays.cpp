#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    int a[n];
    int b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    vector<int> v;
    int i = 0;
    int j = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            v.push_back(a[i]);
            i++;
        }
        else if (a[i] > b[j])
        {
            v.push_back(b[j]);
            j++;
        }
        else
        {
            v.push_back(a[i]);
            v.push_back(b[j]);
            i++;
            j++;
        }
    }
    while (i < n)
    {
        v.push_back(a[i]);
        i++;
    }
    while (j < m)
    {
        v.push_back(b[j]);
        j++;
    }
    for (int res : v)
    {
        cout << res << " ";
    }
    return 0;
}