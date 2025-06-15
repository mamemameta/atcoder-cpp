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

struct UF{
	vll par,ran;
	UF(ll n):par(n+5,-1),ran(n+5,1){ };
	ll root(ll x){
		return (par[x]<0?x:par[x]=root(par[x]));
	}
	bool unite(ll x,ll y){
		ll rx=root(x),ry=root(y);
		if(rx==ry)
			return false;
		if(ran[rx]<ran[ry])
			swap(rx,ry);
		if(ran[rx]==ran[ry])
			ran[rx]++;
		par[rx]+=par[ry];
		par[ry]=rx;
		return true;
	}
	bool same(ll x,ll y){
		return root(x)==root(y);
	}
	bool size(ll x){
		return -par[root(x)];
	}
};
int main(){
	ll n,m;cin>>n>>m;
	ll a,b;
	UF uf(n);
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
