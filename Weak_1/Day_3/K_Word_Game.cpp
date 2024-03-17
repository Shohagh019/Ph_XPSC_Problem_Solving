// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         int n;
//         cin >> n;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<set<string>> players(3);
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                string word;
                cin >> word;
                players[i].insert(word);
            }
        }
        map<string, int> wordCount;
        for (int i = 0; i < 3; i++)
        {
            for (string word : players[i])
            {
                wordCount[word]++;
            }
        }
        int point[3] = {0};
        for (auto it : wordCount)
        {
            int freq = it.second;
            if (freq == 1)
            {
                for (int i = 0; i < 3; i++)
                {
                    if (players[i].count(it.first))
                    {
                        point[i] += 3;
                    }
                }
            }
            if (freq == 2)
            {
                for (int i = 0; i < 3; i++)
                {
                    if (players[i].count(it.first))
                    {
                        point[i] += 1;
                    }
                }
            }
        }
        for (int i = 0; i < 3; i++)
        {
            cout << point[i] << " ";
        }
        cout << '\n';
    }
    return 0;
}

// for this problem need to understand set, map and frequency array clearly