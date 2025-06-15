void sub()
{
	ge(ll,n);
	map<ll,vll> mp;
	i(n)
	{
		ge(ll,x);
		mp[x].pub(i);
	}
	segtree st;
	for(auto [x,v]:mp){
		st.update(v[0],v.ba+ 1, x);
	}
	vll ans;
	i(n)
	{
		ans.pub(st.query(i,i));
	}
	ou(ans);
}
