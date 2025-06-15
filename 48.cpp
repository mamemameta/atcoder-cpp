#include<iostream>
#include<vector>
using namespace std;
#define ll long long
#define max 100
int main(){
	ll n,q;cin>>n>>q;
	ll l,x;
	vector<vector<ll>>(n);
	for(int i=1;i<=n;++i){
		cin>>l;
		v[i].resize(l+1);
		for(ll j=1;j<=l;++j){
			cin>>v[i][j];
		}
	}
	ll s,t;
	while(q--){
		cin>>s>>t;
		cout<<a[s][--t]<<endl;
	}
}
