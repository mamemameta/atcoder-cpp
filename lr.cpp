#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
#include<numeric>
using namespace std;
#define ll long long

int main(){
	ll n,l,r;
	cin>>n>>l>>r;
	vector<ll>v(n);
	for(auto &i:v)
		cin>>i;
	vector<ll>vr(n+5),vl(n+5);
	ll s=0;
	vl[0]=-(1LL<<58);
	for(ll i=1;i<=n;++i){
		s+=v[i-1];
		vl[i]=max(s-l*(i),vl[i-1]);
	}
	s=0;
	vr[n]=-(1LL<<58);
	for(ll i=n-1;i>=0;--i){
		s+=v[i];
		vr[i]=max(s-r*(n-i),vr[i+1]);
	}
	ll ans=-(1LL<<58);
	vl[0]=0;
	vr[n]=0;
	/*
	for(auto i:vl){
		printf("%2d ",i);
	}
	cout<<endl;
	for(auto i:vr){
		printf("%2d ",i);
	}
	cout<<endl;
	//*/
	for(ll i=0;i<=n+1;++i){
		ans=max(ans,vr[i]+vl[i]);
	}
	cout<<s-ans<<endl;
}
