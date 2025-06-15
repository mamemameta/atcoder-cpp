#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#define ll long long
using namespace std;
int main(){
	ll n;cin>>n;
	vector<vector<ll>>v(n+1);
	ll a;
	for(ll i=1;i<=n;++i){
		cin>>a;
		v[a].push_back(i);
	}
	ll q;cin>>q;
	ll l,r,x;
	while(q--){
		cin>>l>>r>>x;
		auto s=lower_bound(v[x].begin(),\
			v[x].end(),l);
		auto t=upper_bound(v[x].begin(),\
			v[x].end(),r);
		cout<<t-s<<endl;
	}
}
