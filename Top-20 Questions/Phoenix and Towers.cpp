#include<bits/stdc++.h>
using namespace std;
#define int long long int
int h[100001];
void Malena(){
	int n,m,x;cin>>n>>m>>x;
	cout<<"YES\n";
	set<pair<int,int>>s;
	for(int i=1;i<=m;++i){
		s.insert({0,i});
	}
	for(int i=0;i<n;++i){
		cin>>h[i];
		pair<int,int>p=*s.begin();
		s.erase(p);
		cout<<p.second<<' ';
		s.insert({p.first+h[i],p.second});
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
