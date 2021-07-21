//https://codeforces.com/problemset/problem/1513/C
//https://www.youtube.com/watch?v=oKKh053zZnI&t=7363s
//x!=9--->f(m,x)=f(m-1,x+1)
//x=9--->f(m,x)=f(m-1,0)+f(m-1,1)
#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int mx=2e6+5,mod=1e9+7;
int dp[mx][11];
signed main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;cin>>t;
	memset(dp,0,sizeof(dp));
	for(int i=0;i<10;++i)dp[0][i]=1;
	for(int i=1;i<mx;++i){
		for(int j=0;j<9;++j){
			dp[i][j]=dp[i-1][j+1];
		}
		dp[i][9]=(dp[i-1][0]+dp[i-1][1])%mod;
	}
	while(t--){
		string s;
		int n;
		cin>>s>>n;
		int ans=0;
		for(char c:s){
			ans=(ans+dp[n][c-'0'])%mod;
		}
		cout<<ans<<"\n";
	}
	return 0;
}
