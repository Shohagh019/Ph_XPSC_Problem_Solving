//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
#include <bits/stdc++.h>
using namespace std;
class Solution{
  public:
    int longestKSubstr(string s, int k) {
    map<char,int>mp;
    int cnt= -1, l=0,r=0;
    while(r<s.size())
    {
        mp[s[r]]++;
        while(mp.size()>k)
        {
            mp[s[l]]--;
            if(mp[s[l]]==0)
            {
                mp.erase(s[l]);
            }
            l++;
        }
        if(mp.size()==k)
        {
           cnt=max(cnt, r-l+1); 
        }
        r++;
    }
     return cnt;
    }
};