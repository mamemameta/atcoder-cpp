struct UF{ 
	vector<ll> par,rk,siz;
	UF(ll n):par(n+5,-1),rk(n+5,0){ }
	ll root(ll x){ 
		if(par[x]<0)
			return x;
	       	else 
			return par[x]=root(par[x]);
       	}
	bool same(ll x,ll y){ 
		return root(x)==root(y);
       	}
	bool unite(ll x,ll y){ 
		ll rx=root(x),ry=root(y); 
		if(rx==ry) 
			return 0; 
		if(rk[rx]<rk[ry]) 
			swap(rx,ry);
		par[rx]+=par[ry]; par[ry]=rx;
		if(rk[rx]==rk[ry]) 
			rk[rx]++;
	       	return 1; 
	}
	ll size(ll x){ 
		return -par[root(x)];
       	}
};
