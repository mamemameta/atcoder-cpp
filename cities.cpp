#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
#include<numeric>
#include<cmath>
using namespace std;
#define ll long long
#define mkp make_pair
#define vll vector<ll> 
#define pll pair<ll,ll> 
#define puf push_front
#define pub push_back
#define pof pop_front()
#define pob pop_back()
#define fs first
#define se second
#define fr front()
#define bk back()
#define all(x) x.begin(),x.end()

struct UF{
	vll par;
	ll sz;
	UF(ll n):sz(n),par(n+5){
		iota(all(par),0LL);
	}
	ll root(ll x){
		if(par[x]==x)
			return x;
		else 
			return par[x]=root(par[x]);
	}
	void unite(ll x,ll y){
		ll rx=par[x];
		ll ry=par[y];
		if(rx==ry)
			return;
		par[ry]=rx;
		/*
		for(auto i:par)
			cout<<i<<" ";
		cout<<endl;
		//*/
	}
	bool same(ll x,ll y){
		return root(x)==root(y);
	}
};
int main(){
	ll n,m;cin>>n>>m;
	UF uf(n);
	ll a,b;
	while(m--){
		cin>>a>>b;
		uf.unite(a,b);
	}
	ll ans=0;
	for(ll i=1;i<=n;++i){
		if(uf.root(i)==i)
			ans++;
	}
	cout<<ans-1<<endl;
}
