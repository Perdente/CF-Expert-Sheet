//https://codeforces.com/problemset/problem/1463/B
#include<bits/stdc++.h>
using namespace std;
#define int long long int

void Malena(){
	int n;cin>>n;
	while(n--){
		int x;cin>>x;
		int tot=0;
		while((1<<tot)<=x)tot++;
		tot--;
		cout<<(1<<tot)<<" ";
	}
	cout<<'\n';
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
