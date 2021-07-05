//https://codeforces.com/problemset/problem/1372/C
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;++i)
        {
            cin>>v[i];
        }
        int cnt=0,pos=-1,pos1=-1;
        //bool flag=false;
        for(int i=0;i<n;++i)
        {
            if(v[i]!=i+1)
            {
                cnt++;
                if(pos==-1)pos=i;
                pos1=i;
            }
        }
        if(cnt==0)cout<<0<<endl;
        else if(cnt==pos1-pos+1)cout<<1<<endl;
        else cout<<2<<endl;
    }
    return 0;
}
