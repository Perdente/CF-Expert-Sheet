//stacks
//https://codeforces.com/contest/1399/problem/D
#include<bits/stdc++.h>
using namespace std;
#define int long long int

void Malena(){
	int n;cin>>n;
	string s;cin>>s;
	vector<int>ans(n);
	stack<int>e_z,e_o;
	int comp=1,top;
	for(int i=0;i<n;++i){
		if(s[i]=='0'){
			if(e_o.empty()){
				e_z.push(comp);
				ans[i]=comp++;
			}else{
				top=e_o.top();
				e_o.pop();
				ans[i]=top;
				e_z.push(top);
			}

		}else{
			if(e_z.empty()){
				e_o.push(comp);
				ans[i]=comp++;
			}else{
				top=e_z.top();
				e_z.pop();
				ans[i]=top;
				e_o.push(top);
			}
		}
	}
	cout<<comp-1<<'\n';
	for(auto i:ans)cout<<i<<" ";
	cout<<endl;
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
