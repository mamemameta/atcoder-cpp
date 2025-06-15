#include<iostream>
#include<vector>
#include<map>
using namespace std;
#define ll long long

int main(){
	map<ll,ll>mp;
	ll x,n;
	cin>>n;
	for(ll i=0;i<n;++i){
		cin>>x;
		++mp[x];
	}
	auto it=mp.end();
	ll i;
	--it;
	for(i=0;it!=mp.begin()&&i<n;++i)
		cout<<(it--)->second<<endl;
	++i;
	cout<<(it--)->second<<endl;
	for(;i<n;++i)
		cout<<0<<endl;
}
