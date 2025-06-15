#include<iostream>
#include<vector>
#include<set>
#include<map>
#define ll long long
using namespace std;
int main(){
	ll n,m;
	cin>>n>>m;
	vector<ll>v(n+1),cum(n+1);
	for(ll i=1;i<=n;++i){
		cin>>v[i];
		cum[i]+=cum[i-1]+v[i];
	}
	ll ma=0;
	for(ll i=1;i<=m;++i){
		ma+=v[i]*(i);
	}
	//cout<<"ma"<<ma<<endl;
	ll tmp=ma;
	for(ll i=m+1;i<=n;++i){
		tmp=tmp-cum[i-1]+cum[i-m-1]+v[i]*m;
		//cout<<"tmp"<<tmp<<"cum"<<cum[i-1]<<\
			"cum"<<cum[i-m-1]<<"v[i]"<<v[i]<<endl;
		ma=max(ma,tmp);
	}
	/*
	for(auto i:v)
		cout<<i<<" ";
	cout<<endl;
	for(auto i:cum)
		cout<<i<<" ";
	cout<<endl;
	*/
	cout<<ma<<endl;
}
