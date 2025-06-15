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
#define pll pair<ll,ll> 

struct UF{
	vector<ll>par;
	UF(ll n):par(n){
		iota(par.begin(),par.end(),0LL);
	}
	ll root(ll x){
		if(par[x]==x)
			return x;
		else
			return par[x]=root(par[x]);
	}
	void unite(ll x,ll y){
		ll rx=root(x);
		ll ry=root(y);
		if(rx==ry)
			return ;
		par[rx]=ry;
	}
	bool same(ll x,ll y){
		return root(x)==root(y);
	}
};

ll dist(ll x,ll y,ll xx,ll yy){
	return (x-xx)*(x-xx)+(y-yy)*(y-yy);
}
int main(){
	ll n;
	cin>>n;
	ll sx,sy,gx,gy;
	cin>>sx>>sy>>gx>>gy;
	vector<vector<ll>>v(n,vector<ll>(2));
	vector<ll>r(n);
	for(ll i=0;i<n;++i){
		cin>>v[i][0]>>v[i][1]>>r[i];
	}
	UF uf(n+5);
	for(ll i=0;i<n;++i){
		for(ll j=i+1;j<n;++j){
			ll dis=dist(v[i][0],v[i][1],v[j][0],v[j][1]);
			if(dis>(r[i]+r[j])*(r[i]+r[j]))
				continue;
			else if(dis<(r[i]-r[j])*(r[i]-r[j]))
				continue;
			else 
				uf.unite(i,j);
		}
	}

	for(ll i=0;i<n;++i){
		if(dist(v[i][0],v[i][1],sx,sy)==r[i]*r[i]){
			for(ll j=0;j<n;++j){
				if(dist(v[j][0],v[j][1],gx,gy)==r[j]*r[j]){
					if(uf.same(i,j)){
						cout<<"Yes"<<endl;
						return 0;
					}
				}
			}
		}
	}
	cout<<"No"<<endl;
}
