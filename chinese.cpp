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
	ll n;cin>>n;
	vector<ll>v(n);
	ll x,pos;
	vector<ll>inv(n);
	for(ll i=0;i<n;++i){
		cin>>x;
		v[i]=x;
		inv[x]=i;
	}
	vector<ll>s(n+5);
	for(ll i=0;i<n;++i){
		x=(i+n-1)-inv[i];
		x%=n;
		//cout<<"x"<<x<<endl;
		s[x]++;
		s[(x+1)%n]++;
		s[(x+2)%n]++;
		/*
		for(auto i:s){
			cout<<i<<" ";
		}
		cout<<endl;
		//*/
	}
	ll ans=0;
	for(ll i=0;i<n;++i){
		ans=max(ans,s[i]);
	}
	cout<<ans<<endl;
}
