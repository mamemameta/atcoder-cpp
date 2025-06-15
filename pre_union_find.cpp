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
	vll par,rk,sz;
	UF(ll n):par(n+5,-1),rk(n+5,0),sz(n+5,1){ }
	
	ll root(ll x){
		if(par[x]==-1)return x;
		else return par[x]=root(par[x]);
	}
	bool same(ll x,ll y){
		return root(x)==root(y);
	}
	bool unite(ll x,ll y){
		ll rx=root(x),ry=root(y);
		if(rx==ry)
			return false;
		if(rk[rx]<rk[ry])
			swap(rx,ry);
		par[ry]=rx;
		if(rk[rx]==rk[ry])
			rk[rx]++;
		sz[rx]+=sz[ry];
		return true;
	}
	ll size(ll x){
		return sz[root(x)];
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
