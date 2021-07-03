void SectumSempra()
{
	cin>>n;
	V v(n),u(n);
	lp(i,n)cin>>v[i];
	lp(i,n)cin>>u[i];
	sum=0;
	lp(i,n){
		sum+=v[i]*u[i];
	}
	ma=sum;
	lp(i,n){
		temp=sum;
		l=i-1,r=i+1;
		while(l>=0 and r<n){
			temp-=v[l]*u[l]+v[r]*u[r];
			temp+=v[l]*u[r]+v[r]*u[l];
			ma=max(ma,temp);
			l--,r++;
		}
	}
	
	lp(i,n){
		temp=sum;
		l=i,r=i+1;
		while(l>=0 and r<n){
			temp-=v[l]*u[l]+v[r]*u[r];
			temp+=v[l]*u[r]+v[r]*u[l];
			ma=max(ma,temp);
			l--,r++;
		}
	}
	cout<<ma;
	lol
}

signed main(){
	Loser();
	test=1;
	//cin>>test;
	while(test--)SectumSempra();
	return 0;
}
