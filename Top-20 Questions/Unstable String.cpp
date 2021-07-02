//https://codeforces.com/problemset/problem/1535/C
#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int N = 2e5+5;
void Malena(){
	string s;cin>>s;
	int n = s.size();
	vector<vector<int>>dp(n,vector<int>(2));
	if(s[0] == '?') dp[0][0] = dp[0][1] = 1;
	else if(s[0] == '1') dp[0][1] = 1;
	else dp[0][0] = 1;
 
	int ans = max(dp[0][0], dp[0][1]);
	for(int i = 1; i < n; i++) {
		if(s[i] == '?') {
			dp[i][0] = dp[i - 1][1] + 1;
			dp[i][1] = dp[i - 1][0] + 1;
		} else if(s[i] == '1') {
			dp[i][0] = 0;
			dp[i][1] = dp[i - 1][0] + 1;
		} else {
			dp[i][1] = 0;
			dp[i][0] = dp[i - 1][1] + 1;
		}
		ans += max(dp[i][0], dp[i][1]);
	}
	cout << ans << "\n";
}

signed main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	t=1;
	cin>>t;
	while(t--){
		Malena();
	}
	return 0;
}
