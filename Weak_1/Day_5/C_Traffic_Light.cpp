#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
        int n; char c;
        cin>>n>>c;
        string s;
        cin>>s;
		s += s;
		int cnt = 0, mx = 0, flag = 0;
		for (int i = 0; i < 2*n; i++) {
			if (s[i] == c)
            {
                flag = 1;
            } 
			if (s[i] == 'g')
            {
                flag = 0;
                mx = max(mx, cnt);
                cnt = 0;
            }
			if(flag==1)
            {
                cnt++;
            }
		}
		cout << mx <<'\n';
	}
    return 0;
}