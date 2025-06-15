ll modpow(ll a, ll b, ll mod = 4) {
	ll res = 1;
	for (a %= mod; b; a = a * a % mod, b >>= 1)
		if (b & 1) res = res * a % mod;
	return res;
}
