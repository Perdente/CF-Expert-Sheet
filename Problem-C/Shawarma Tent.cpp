//https://codeforces.com/problemset/problem/1271/C
#include<bits/stdc++.h>
using namespace std;
#define int long long int

int A[8]={-1,-1,-1,0,0,1,1,1};
int B[8]={-1,0,1,-1,1,-1,0,1};
void Malena(){
	int n,x,y;cin>>n>>x>>y;
	vector<pair<int,int>>vp;
	for(int i=0;i<n;++i){
		int p,q;cin>>p>>q;
		vp.push_back({p,q});
	}
	int ans=-1,ax=-1,ay=-1;
	for(int c=0;c<8;++c){
		int X=x+A[c],Y=y+B[c],cnt=0;
		for(int i=0;i<n;++i){
			int mi_x=min(x,vp[i].first),ma_x=max(x,vp[i].first);
			int mi_y=min(y,vp[i].second),ma_y=max(y,vp[i].second);
			if(mi_x<=X and X<=ma_x and mi_y<=Y and Y<=ma_y)cnt++;
		}
		if(cnt>ans){
			ans=cnt;
			ax=X,ay=Y;
		}
	}
	cout<<ans<<"\n"<<ax<<" "<<ay<<endl;
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
	//cin>>t;
	while(t--){
		Malena();
	}
	return 0;
}
