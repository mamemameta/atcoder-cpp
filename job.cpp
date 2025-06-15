#include<iostream>
#include<vector>
using namespace std;
#define ll long long
int main(){
	ll n;
	cin>>n;
	vector<pair<ll,ll>>v(n);
	ll ans=1e10;
	for(ll i=0;i<n;++i){
		cin>>v[i].first>>v[i].second;
	}
}
