//mod should be <2^31
struct mint {
	int n;
	mint() :n(0) { ; }
	mint(ll m) {
		if (m < 0 || mod <= m) {
			m %= mod; if (m < 0)m += mod;
		}
		n = m;
	}
	operator int() { return n; }
};
bool operator==(mint a, mint b) { return a.n == b.n; }
bool operator<(mint a, mint b) { return a.n < b.n; }
mint operator+=(mint& a, mint b) { a.n += b.n; if (a.n >= mod)a.n -= (int)mod; return a; }
mint operator-=(mint& a, mint b) { a.n -= b.n; if (a.n < 0)a.n += (int)mod; return a; }
mint operator*=(mint& a, mint b) { a.n = ((ll)a.n * b.n) % mod; return a; }
mint operator+(mint a, mint b) { return a += b; }
mint operator-(mint a, mint b) { return a -= b; }
mint operator*(mint a, mint b) { return a *= b; }
mint operator^(mint a, ll n) {
	if (n == 0)return mint(1);
	mint res = (a * a) ^ (n / 2);
	if (n % 2)res = res * a;
	return res;
}
ll inv(ll a, ll p) {
	return (a == 1 ? 1 : (1 - p * inv(p % a, a)) / a + p);
}
mint operator/(mint a, mint b) { return a * mint(inv(b, mod)); }
mint operator/=(mint& a, mint b) { a = a / b; return a; }

bool operator==(mint a, ll b) {re a==mint(b);}
bool operator<(mint a, ll b) {re a<mint(b);}
mint operator+=(mint& a, ll b) {re a+=mint(b);}
mint operator-=(mint& a, ll b) {re a-=mint(b);}
mint operator*=(mint& a, ll b) {re a*=mint(b);}
mint operator+(mint a, ll b) {re a+mint(b);}
mint operator-(mint a, ll b) {re a-mint(b);}
mint operator*(mint a, ll b) {re a*mint(b);}
mint operator/(mint a, ll b) {re a/mint(b);}
mint operator/=(mint& a, ll b) {re a/=mint(b);}

bool operator==(ll a, mint b) {re mint(a)==b;}
bool operator<(ll a, mint b) {re mint(a)<(b);}
mint operator+(ll a, mint b) {re mint(a)+(b);}
mint operator-(ll a, mint b) {re mint(a)-(b);}
mint operator*(ll a, mint b) {re mint(a)*(b);}
mint operator/(ll a, mint b) {re mint(a)/(b);}

bool operator==(mint a, int b) {re a==mint(b);}
bool operator<(mint a, int b) {re a<mint(b);}
mint operator+=(mint& a, int b) {re a+=mint(b);}
mint operator-=(mint& a, int b) {re a-=mint(b);}
mint operator*=(mint& a, int b) {re a*=mint(b);}
mint operator+(mint a, int b) {re a+mint(b);}
mint operator-(mint a, int b) {re a-mint(b);}
mint operator*(mint a, int b) {re a*mint(b);}
mint operator/(mint a, int b) {re a/mint(b);}
mint operator/=(mint& a, int b) {re a/=mint(b);}

bool operator==(int a, mint b) {re mint(a)==b;}
bool operator<(int a, mint b) {re mint(a)<(b);}
mint operator+(int a, mint b) {re mint(a)+(b);}
mint operator-(int a, mint b) {re mint(a)-(b);}
mint operator*(int a, mint b) {re mint(a)*(b);}
mint operator/(int a, mint b) {re mint(a)/(b);}

//istream &operator >> (istream &is,pnt<dou> &r){is>>r.x>>r.y;return is;}
//ostream &operator << (ostream &os,pnt<dou> &r){os<<r.x<<" "<<r.y;return os;}
istream &operator >> (istream &is, mint &x)
{
	ll m;
	is >> m;
	if (m < 0 || mod <= m) {
		m %= mod; if (m < 0)m += mod;
	}
	x.n = m;
	return is;
}


ostream &operator << (ostream &os, mint &i)
{
    os << i.n;
    return os;
}


const int max_n = 1 << 21;
mint fact[max_n], factinv[max_n];
void init_f() {
	fact[0] = mint(1);
	for (int i = 0; i < max_n - 1; i++) {
		fact[i + 1] = fact[i] * mint(i + 1);
	}
	factinv[max_n - 1] = mint(1) / fact[max_n - 1];
	for (int i = max_n - 2; i >= 0; i--) {
		factinv[i] = factinv[i + 1] * mint(i + 1);
	}
}
mint comb(int a, int b) {
	if (a < 0 || b < 0 || a < b)return 0;
	return fact[a] * factinv[b] * factinv[a - b];
}
mint combP(int a, int b) {
	if (a < 0 || b < 0 || a < b)return 0;
	return fact[a] * factinv[a - b];
}
