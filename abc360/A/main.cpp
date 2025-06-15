#include<iostream>
#include<functional>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
#include<numeric>
#include<cmath>
#include<cstring>
#include<bitset>
#include<iomanip>
#include<random>
#include<fstream>
#include<complex>
#include<time.h>
#include<stack>
#include<cassert>
using namespace std;
#define endl "\n"
#define ll long long
#define ch char
#define vec vector 
#define vll vector<ll> 
#define sll set<ll> 
#define pll pair<ll,ll> 
#define mkp make_pair
#define mll map<ll,ll> 
#define puf push_front
#define pub push_back
#define pof pop_front()
#define pob pop_back()
#define em empty()
#define fi first
#define se second
#define fr front()
#define ba back()
#define be begin()
#define rbe rbegin()
#define en end()
#define ren rend()
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define fo(i,x,y) for(ll i=x;i<=y;++i)
#define fa(i,v) for(auto &i:v)
#define re return 
#define sz size()
#define so(v) sort(all(v))
#define pop_count(x) __builtin_popcount(x)
#define rso(v) sort(rall(v))
#define rev(v) reverse(all(v))
#define i(x) for(ll i=0;i<x;++i)
#define j(x) for(ll j=0;j<x;++j)
#define k(x) for(ll k=0;k<x;++k)
#define xx(k) while(k--)

#define wh(x) while(x)
#define st string
//10^x      8765432109876543210
#define MAX 8611686018427387000
#define zeros(x) __builtin_ctzll(x)
#define in insert
#define uniq(v) v.erase(unique(all(v)),v.en);
#define er(i,n) erase(i,n);
//#define co(x,a) count(all(x),a)
#define lo(v,a) lower_bound(v.begin(),v.end(),a)
#define dou double
#define ge(x,...) x __VA_ARGS__; ci(__VA_ARGS__);
#define fix(n,ans) cout<<fixed<<std::setprecision(n)<<ans<<endl;


void cc(){ cout<<endl; };
void ff(){ cout<<endl; };
void cl(){ cout<<endl; };
template<class T,class... A> void ff(T a,A... b){ cout<<a; (cout<<...<<(cout<<' ',b)); cout<<endl; }; 
template<class T,class... A> void cc(T a,A... b){ cout<<a; (cout<<...<<(cout<<' ',b)); cout<<' '; }; 
template<class T,class... A> void cl(T a,A... b){ cout<<a; (cout<<...<<(cout<<'\n',b)); cout<<endl; }; 
template<class T,class... A> void cn(T a,A... b){ cout<<a; (cout<<...<<(cout<<"",b));  }; 
template<class... A> void ci(A&... a){ (cin>>...>>a); }; 
template<class T>void ou(T v){fa(i,v)cout<<i<<" ";cout<<endl;} 
template<class T>void oun(T v){fa(i,v)cout<<i;cout<<endl;} 
template<class T>void ouu(T v){fa(i,v){fa(j,i)cout<<j<<" ";cout<<endl;}} 
template<class T> void oul(T v){fa(i,v)cout<<i<<endl;} 
template<class T>void in(T &v){fa(i,v)cin>>i;}
template<class T>void inn(T &v){fa(i,v)fa(j,i)cin>>j;}
template<class T>void oump(T &v){fa(i,v)ff(i.fi,i.se);}

template<class T,class A>void pi(pair<T,A> &p){ci(p.fi,p.se);}
template<class T,class A>void po(pair<T,A> &p){ff(p.fi,p.se);}
template<class T,class... A> void fl(T a,A... b){ cout<<a; (cout<<...<<(cout<<' ',b)); cout<<endl<<flush; }; 

ll mod = 1000000007;
ll mod9= 998244353;
void init();
void solve();
/*
void ori();
ll random_(){
		  std::random_device seed_gen;
		  std::mt19937 engine(seed_gen());
		  // [-1.0, 1.0)の値の範囲で、等確率に実数を生成する
		  std::uniform_real_distribution<> dist1(1.0, 100000);
		  i(10000){ // 各分布法に基いて乱数を生成
					 ll n  = dist1(engine);
		  } return 0;
}
*/
mll to_prime(ll x){
		  mll mp;
		  for(ll i=2;i*i<=x;++i){
					 while(x%i==0){
								++mp[i];
								x/=i;
					 }
		  }
		  if(x!=1)
					 ++mp[x];
		  re mp;
}
#define acc(v) accumulate(v.begin(),v.end(),0LL)
#define acci(v,i) accumulate(v.begin(),v.begin()+i,0LL)
#define dll deque<ll>
int main(void){
		  init();
		  solve();
		  return 0;
}
template <typename T>class pnt{
		  public:
					 T x,y;
					 pnt(T x=0,T y=0):x(x),y(y){}
					 pnt operator + (const pnt r)const {
								return  pnt(x+r.x,y+r.y);}
					 pnt operator - (const pnt r)const {
								return  pnt(x-r.x,y-r.y);}
					 pnt operator * (const pnt r)const {
								return  pnt(x*r.x,y*r.y);}
					 pnt operator / (const pnt r)const {
								return  pnt(x/r.x,y/r.y);}
					 pnt &operator += (const pnt r){
								x+=r.x;y+=r.y;return *this;}
					 pnt &operator -= (const pnt r){
								x-=r.x;y-=r.y;return *this;}
					 pnt &operator *= (const pnt r){
								x*=r.x;y*=r.y;return *this;}
					 pnt &operator /= (const pnt r){
								x/=r.x;y/=r.y;return *this;}
					 ll dist(const pnt r){
								re (x-r.x)*(x-r.x)+(y-r.y)*(y-r.y);
					 }
					 ll man(const pnt r){
								re abs(x-r.x)+abs(y-r.y);
					 }
					 pnt rot(const dou theta){
								T xx,yy;
								xx=cos(theta)*x-sin(theta)*y;
								yy=sin(theta)*x+cos(theta)*y;
								return pnt(xx,yy);
					 }
};
istream &operator >> (istream &is,pnt<dou> &r){is>>r.x>>r.y;return is;}
ostream &operator << (ostream &os,pnt<dou> &r){os<<r.x<<" "<<r.y;return os;}

struct BIT{
	ll n;vll v;
	BIT(ll n):n(n+n%2),v(2*(n+n%2)){};
	ll op(ll x,ll y){
		re gcd(x,y);
	}
	ll sum(ll i){
		ll s=0;
		while(i){
			s=gcd(s,v[i]);
			i-=i&-i;
		}
		re s;
	}
	void add(ll i,ll x){
		while(i<=n){
			v[i]=op(v[i],x);
			i+=i&-i;
		}
	}
	ll ran(ll l,ll r){
		re op(sum(--l),sum(r));
	}
};
template<class T>bool chmaxeq(T& a, const T& b) { if (a <= b) { a = b; return 1; } return 0; }
template<class T>bool chmineq(T& a, const T& b) { if (b <= a) { a = b; return 1; } return 0; }
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

struct Trie{
	struct Node{
		vll nxt;
		vec<st> done;
		ll dep,cnt=0;
		Node(ll c_):nxt(30),dep(c_){}
	};
	ll root=0;
	vec<Node>tree={Node(root)};
	void ins(st s){
		ll c=0; 
		for(ll i=0;i<s.sz;++i){
			ll to=tree[c].nxt[s[i]-'a'];
			if(to==0){
				to=tree.sz;
				tree[c].nxt[s[i]-'a']=to;
				tree.pub(Node(i+1));
			}
			++tree[to].cnt;
			c=to;
		}
		tree[c].done.pub(s);
	}
	ll cal(st s){
		ll ans=0,c=0;
		for(ll i=0;i<s.sz;++i){
			ll to=tree[c].nxt[s[i]-'a'];
			if(tree[to].cnt>1)++ans;
			else break;
			c=to;
		}
		re ans;
	}
};
#define fo(i,x,y) for(ll i=x;i<=y;++i)
#define rfo(_ii,_xx,_yy) for(ll _ii=_xx;_ii>=_yy;--_ii)
#define qll queue<ll>

template<typename T> using pq= priority_queue<T>;
template<typename T> using pqg= priority_queue<T,vec<T>,greater<T>>;
vec<pair<ch,ll>>rle(st s){//run_length_encoding
	ll n=s.sz;
	vec<pair<ch,ll>>ans;
	for(ll i=0;i<n;++i){
		ll cnt=1;
		wh(i+1<n&&s[i+1]==s[i]){
			++cnt;++i;
		}
		ans.pub(mkp(s[i],cnt));
	}
	re ans;
}

vector<vector<ll>> mat_mul(vector<vector<ll>> a, vector<vector<ll>> b, ll mod) {
	// 行列乗算
	int n = a.size();
	vector<vector<ll>> res(n, vector<ll>(n));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				res[i][j] += a[i][k] * b[k][j];
				res[i][j] %= mod;
			}
		}
	}
	return res;
}

vector<vector<ll>> mat_pow(vector<vector<ll>> a, ll b, ll mod) {
	// 行列累乗
	int n = a.size();
	vector<vector<ll>> res(n, vector<ll>(n));
	for (int i = 0; i < n; i++) res[i][i] = 1;
	while (b) {
		if (b & 1) res = mat_mul(res, a, mod);
		a = mat_mul(a, a, mod);
		b >>= 1;
	}
	return res;
}


void Yes(bool f){
		ff(f?"Yes":"No");re;
}
void yes(bool f){
		ff(f?"yes":"no");re;
}
void YES(bool f){
		ff(f?"YES":"NO");re;
}
void sub();
template <class T>
struct Edge {
    int rv, from, to;  // rev:逆向きの辺の番号
    T cap, original_cap;
    Edge(int f, int t, T c,int r ) : rv(r), from(f), to(t), cap(c), original_cap(c) {}
};

struct UF{ vll par,rk,siz; UF(ll n):par(n+5,-1),rk(n+5,0){ }
	ll root(ll x){ if(par[x]<0)return x; else return par[x]=root(par[x]); }
	bool same(ll x,ll y){ return root(x)==root(y); }
	bool unite(ll x,ll y){ 
		ll rx=root(x),ry=root(y); 
		if(rx==ry) return 0; 
		if(rk[rx]<rk[ry]) swap(rx,ry);
		par[rx]+=par[ry]; par[ry]=rx;
		if(rk[rx]==rk[ry]) rk[rx]++; return 1; 
	}
	ll size(ll x){ return -par[root(x)]; }
};
ll dijkstra(ll start,ll n){//O((n+m)log(n))
	vec<vec<pll>>e(n);
	vll dis(n+50,MAX);
	pqg<pll>q;q.push({0ll,start});
	dis[start]=0;
	while(q.em^1){
		auto [d,now]=q.top();q.pop();
		if(dis[now]<d)continue;
		if(now==n)re dis[now];
		for(auto[to,cst]:e[now])if(chmin(dis[to],cst+d)){
			q.push({dis[to],to});
		}
	}
	re -1;
}
struct UF_norank{ vll par,siz; UF_norank(ll n):par(n+5,-1){ }
	ll root(ll x){ if(par[x]<0)return x; else return par[x]=root(par[x]); }
	bool same(ll x,ll y){ return root(x)==root(y); }
	bool unite(ll from,ll to){ 
		ll r_fr=root(from),r_to=root(to); 
		if(r_fr==r_to) return 0; 
		par[r_to]+=par[r_fr]; par[r_fr]=r_to;
		return 1; 
	}
	ll size(ll x){ return -par[root(x)]; }
};
vll di(ll start,ll n,vec<vec<pll>>cost){//O((n+m)log(n))
	vll dis(n+5,MAX);
	pqg<pll>q;q.push({0ll,start});
	dis[start]=0;
	while(q.em^1){
		auto [d,now]=q.top();q.pop();
		if(dis[now]<d)continue;
		//if(now==goal)break;
		for(auto [to,cst]:cost[now]){
			if(chmin(dis[to],cst+d)){
				q.push({dis[to],to});
			}
		}
	}
	re dis;
}
vll z_algo(string pattern, string text) {//z algorithm 最長共通接頭辞
	string str = pattern + "$" + text;
	ll n = str.length(),np=pattern.sz;
	vll Z(n+5),ret(n+5);
	for (ll i = 1,L=0,R=0,j; i < n; ++i) {
		if (R<i) {
			L = R = i;
			while (R<n && str[R-L] == str[R])
				R++;
			Z[i] = R-L;
			if(i>np)
				ret[i-np-1]=Z[i];

			R--;
		}else{
			j= i-L;
			if (Z[j]<R-i+1){
				Z[i]=Z[j];
			}else{
				L = i;
				while (R<n && str[R-L] == str[R])
					R++;
				Z[i] = R-L;
				R--;
			}
			if(i>np)
				ret[i-np-1]=Z[i];
		}
	}
	//ff("z"); ou(Z);
	re ret;
}
// 2^10 = 1024
//vll dy={-1,-1,-1,0,0,1,1,1},dx={-1,0,1,-1,1,-1,0,1};
/* O(2*10^8) 9*10^18 1LL<<62 4*10^18
   ~~(v.be,v.be+n,x); not include v.be+n
   set.lower_bound(x);
   ->. *++~ ! /%* +- << < == & && +=?:
   */
//          12345678901234567890
//vll dy={-1,0,0,1},dx={0,-1,1,0};
const ll INF = mod * mod;
typedef pair<int, int>P;
#define per(i,n) for(int i=n-1;i>=0;i--)
#define Rep(i,sta,n) for(int i=sta;i<n;i++)
#define rp(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define per1(i,n) for(int i=n;i>=1;i--)
#define Rep1(i,sta,n) for(int i=sta;i<=n;i++)
ll mod_pow(ll x, ll n, ll m = mod) {
	if (n < 0) {
		ll res = mod_pow(x, -n, m);
		return mod_pow(res, m - 2, m);
	}
	if (abs(x) >= m)x %= m;
	if (x < 0)x += m;
	//if (x == 0)return 0;
	ll res = 1;
	while (n) {
		if (n & 1)res = res * x % m;
		x = x * x % m; n >>= 1;
	}
	return res;
}
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

ll gcd(ll a, ll b) {
	a = abs(a); b = abs(b);
	if (a < b)swap(a, b);
	while (b) {
		ll r = a % b; a = b; b = r;
	}
	return a;
}
struct HLD {
    int n;
    vector<int> siz, top, dep, parent, in, out, seq;
    vector<vector<int>> adj;
    int cur;
    HLD() {}
    HLD(int n) {
        init(n);
    }
    void init(int n) {//初期化
        this->n = n;
        siz.resize(n);//部分木のサイズ
        top.resize(n);//列の先頭
        dep.resize(n);//深さ
        parent.resize(n);//親
        in.resize(n); //新しい番号
        out.resize(n);//部分木の最後の番号+1
        seq.resize(n);//order iの頂点はseq[i]
        cur = 0;
        adj.assign(n, {});//隣接リスト
    }
    void add(int u, int v) {//辺を追加
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    void work(int root = 0) {//ビルド
        top[root] = root;
        dep[root] = 0;
        parent[root] = -1;
        dfs1(root);
        dfs2(root);
    }
    void dfs1(int u) {
        if (parent[u] != -1) {
            adj[u].erase(find(adj[u].begin(), adj[u].end(), parent[u]));
	    //親を隣接リストから消す
        }
        siz[u] = 1;
        for (auto &v : adj[u]) {
            parent[v] = u;
            dep[v] = dep[u] + 1;
            dfs1(v);
            siz[u] += siz[v];
	    //adj[u][0]をheavyになるようにする
            if (siz[v] > siz[adj[u][0]]) {
                swap(v, adj[u][0]);
            }
        }
    }
    void dfs2(int u) {
        in[u] = cur++;//新しい番号を割り振る
        seq[in[u]] = u;//order in[u]の頂点はu
        for (auto v : adj[u]) {
            top[v] = v == adj[u][0] ? top[u] : v;
            dfs2(v);
        }
        out[u] = cur;
    }
    int lca(int u, int v) {
        while (top[u] != top[v]) {//同じ列でない間
            if (dep[top[u]] > dep[top[v]]) {//深い方から上る
                u = parent[top[u]];
            } else {
                v = parent[top[v]];
            }
        }
        return dep[u] < dep[v] ? u : v;
    }
    int dist(int u, int v) {
        return dep[u] + dep[v] - 2 * dep[lca(u, v)];
    }
    int jump(int u, int k) {
        if (dep[u] < k) {
            return -1;
        }
        int d = dep[u] - k;
        while (dep[top[u]] > d) {
            u = parent[top[u]];
        }
        return seq[in[u] - dep[u] + d];
    }
    bool isAncester(int u, int v) {
        return in[u] <= in[v] && in[v] < out[u];
    }
    int rootedChild(int u, int v) {
        if (u == v) {
            return u;
        }
        if (!isAncester(u, v)) {
            return parent[u];
        }
        auto it = std::upper_bound(adj[u].begin(), adj[u].end(), v, [&](int x, int y) {
            return in[x] < in[y];
        }) - 1;
        return *it;
    }
    int rootedSize(int u, int v) {
        if (u == v) {
            return n;
        }
        if (!isAncester(v, u)) {
            return siz[v];
        }
        return n - siz[rootedChild(v, u)];
    }
    int rootedLca(int a, int b, int c) {
        return lca(a, b) ^ lca(b, c) ^ lca(c, a);
    }
};
void init(){
		  ios::sync_with_stdio(false);
		  cin.tie(0);
}
void solve(){
	//ge(ll,t);
	ll t=1;
	xx(t){
		sub();
	}
}

/* Rerooting: 全方位木 DP
    問題ごとに以下を書き換える
    - 型DPと単位元
    - 型DPに対する二項演算 merge
    - まとめたDPを用いて新たな部分木のDPを計算する add_root
    計算量: O(N)
*/
vll vc;
struct Rerooting {
    /* start 問題ごとに書き換え */
    struct DP {  // DP の型
        long long dp;
	ll s=0;
        DP(long long dp_) : dp(dp_){}
        DP(long long dp_,ll s_) : dp(dp_),s(s_){}
    };
    const DP identity = DP(0);  // 単位元(末端の値は add_root(identity) になるので注意)
    function<DP(DP, DP)> merge = [](DP dp_cum, DP d) -> DP {
        return DP(dp_cum.dp + d.dp ,dp_cum.s+d.s);
    };
    struct Edge {
        int to;
    };
    function<DP(DP,ll)> add_root = [](DP d,ll v) -> DP {
        return DP(d.dp+d.s , vc[v]+d.s );
    };
    /* end 問題ごとに書き換え */

    // グラフの定義
    using Graph = vector<vector<Edge>>;

    vector<vector<DP>> dp;  // dp[v][i]: vから出るi番目の有向辺に対応する部分木のDP
    vector<DP> ans;         // ans[v]: 頂点vを根とする木の答え
    Graph G;

    Rerooting(int N) : G(N) {//ここからスタート
        dp.resize(N);
        ans.assign(N, identity);
    }

    void add_edge(int a, int b) {
        G[a].push_back({b});
    }
    void build() {
        dfs(0);            // 普通に木DP
        bfs(0, identity);  // 残りの部分木に対応するDPを計算
    }

    DP dfs(int v, int p = -1) {  // 頂点v, 親p
        DP dp_cum = identity;
        int deg = G[v].size();//次数
        dp[v] = vector<DP>(deg, identity);//vを根とする
        for (int i = 0; i < deg; i++) {
            int u = G[v][i].to;
            if (u == p) continue;
            dp[v][i] = dfs(u, v);
            dp_cum = merge(dp_cum, dp[v][i]);
        }
        return add_root(dp_cum,v);
    }
    void bfs(int v, const DP& dp_p, int p = -1) {  // bfs だが、実装が楽なので中身は dfs になっている
        int deg = G[v].size();
        for (int i = 0; i < deg; i++) {  // 前のbfsで計算した有向辺に対応する部分木のDPを保存
            if (G[v][i].to == p) dp[v][i] = dp_p;
        }
        vector<DP> dp_l(deg + 1, identity), dp_r(deg + 1, identity);  // 累積merge
        for (int i = 0; i < deg; i++) {
            dp_l[i + 1] = merge(dp_l[i], dp[v][i]);
        }
        for (int i = deg - 1; i >= 0; i--) {
            dp_r[i] = merge(dp_r[i + 1], dp[v][i]);
        }

        ans[v] = add_root(dp_l[deg],v);  // 頂点 v の答え

        for (int i = 0; i < deg; i++) {  // 一つ隣の頂点に対しても同様に計算
            int u = G[v][i].to;
            if (u == p) continue;
            bfs(u, add_root(merge(dp_l[i], dp_r[i + 1]),v), v);
        }
    }
};

/* SegTreeLazy<X,M>(n,fx,fa,fm,ex,em): モノイド(集合X, 二項演算fx,fa,fm, 単位元ex,em)についてサイズnで構築
    set(int i, X x), build(): i番目の要素をxにセット。まとめてセグ木を構築する。O(n)
    update(l,r,x): [l,r) O(log(n))
    query(a,b):  [a,b) 全てにfxを作用させた値を取得。O(log(n))
*/
struct lazy {
	struct X{
		//a*x+b;
		ll x;
		X(ll _x):x(_x){;}
		bool operator==(X r) {re r.x==x;}
	};
	struct A
	{
		ll a;
		A(ll _a):a(_a){;}
		bool operator==(A r) {re a==r.a;}
	};
	X opx(X x1,X x2)
	{
		return x1.x+x2.x;
	}
	X ex=X(0ll);
	X opax(A a,X x)
	{
		return a.a+x.x;
	}
	A opa(A a1,A a2)
	{
		A a=a1;
		a.a+=a2.a;
		return a;
	}
	A ea=A(0ll);
	using FX = function<X(X, X)>;
	using FAX = function<X(A,X)>;
	using FA = function<A(A, A)>;
	int n;
	vector<X> dat;
	vector<A> v_lazy;
	lazy(int n_):dat(n_*4,ex),v_lazy(n_*4,ea){
			int x = 1;
			while (n_ > x) x *= 2;
			n = x;
			//fl("n",n);
	}

	void set(int i, X x) { dat[i + n - 1] = x; }
	void build() {
		for (int k = n - 2; k >= 0; k--) dat[k] = opx(dat[2 * k + 1], dat[2 * k + 2]);
	}

	/* lazy eval */
	void eval(int k) {
		if (v_lazy[k] == ea) return;  // 更新するものが無ければ終了
		if (k < n - 1) {            // 葉でなければ子に伝搬
			v_lazy[k * 2 + 1] = opa(v_lazy[k * 2 + 1], v_lazy[k]);
			v_lazy[k * 2 + 2] = opa(v_lazy[k * 2 + 2], v_lazy[k]);
		}
		// 自身を更新
		dat[k] = opax(v_lazy[k],dat[k]);
		v_lazy[k] = ea;
	}

	void update(int a, int b, A x, int k, int l, int r) {
		eval(k);
		if (a <= l && r <= b) {  // 完全に内側の時
			v_lazy[k] = opa(v_lazy[k], x);
			eval(k);
		} else if (a < r && l < b) {                     // 一部区間が被る時
			update(a, b, x, k * 2 + 1, l, (l + r) / 2);  // 左の子
			update(a, b, x, k * 2 + 2, (l + r) / 2, r);  // 右の子
			dat[k] = opx(dat[k * 2 + 1], dat[k * 2 + 2]);
		}
	}
	void update(int L, int R, A a) { update(L, R, a, 0, 0, n); }
	void update(int L, int R, ll a) { 
		A Aa=A(a);
		update(L, R, Aa, 0, 0, n); }

	X query_sub(int a, int b, int k, int l, int r) {
		eval(k);
		if (r <= a || b <= l) {  // 完全に外側の時
			return ex;
		} else if (a <= l && r <= b) {  // 完全に内側の時
			return dat[k];
		} else {  // 一部区間が被る時
			X vl = query_sub(a, b, k * 2 + 1, l, (l + r) / 2);
			X vr = query_sub(a, b, k * 2 + 2, (l + r) / 2, r);
			return opx(vl, vr);
		}
	}
	X query(int a, int b) { return query_sub(a, b, 0, 0, n); }
};
/* SegTreeLazy<X,M>(n,fx,fa,fm,ex,em): モノイド(集合X, 二項演算fx,fa,fm, 単位元ex,em)についてサイズnで構築
    set(int i, X x), build(): i番目の要素をxにセット。まとめてセグ木を構築する。O(n)
    update(l,r,x): [l,r) O(log(n))
    query(a,b):  [a,b) 全てにfxを作用させた値を取得。O(log(n))
*/
struct segtree {
	struct X{
		ll x=0;//長さ
		X(ll _x):x(_x){;}
		X():x(0){;}
		bool operator==(X r) {re r.x==x;}
	};
	X opx(X x1,X x2)
	{
		return max(x1.x,x2.x);
	}
	X ex=X(0);
	using FX = function<X(X, X)>;
	int n;
	vector<X> dat;
	segtree(int n_):dat(n_*4,ex){
			int x = 1;
			while (n_ > x) x *= 2;
			n = x;
			//fl("n",n);
	}

	void set(int i, X x) { dat[i + n - 1] = x; }
	void build() {
		for (int k = n - 2; k >= 0; k--) dat[k] = opx(dat[2 * k + 1], dat[2 * k + 2]);
	}
	void update(int i, X x) {
		i += n - 1;
		dat[i] = x;
		while (i > 0) {
			i = (i - 1) / 2;  // parent
			dat[i] = opx(dat[i * 2 + 1], dat[i * 2 + 2]);
		}
	}
	X query_sub(int a, int b, int k, int l, int r) {
		if (r <= a || b <= l) {  // 完全に外側の時
			return ex;
		} else if (a <= l && r <= b) {  // 完全に内側の時
			return dat[k];
		} else {  // 一部区間が被る時
			X vl = query_sub(a, b, k * 2 + 1, l, (l + r) / 2);
			X vr = query_sub(a, b, k * 2 + 2, (l + r) / 2, r);
			return opx(vl, vr);
		}
	}
	X query(int a, int b) { return query_sub(a, b, 0, 0, n); }
};
#define rep(i,n) for (int i = 0; i < (n); ++i)

// Coodinate Compression
// https://youtu.be/fR3W5IcBGLQ?t=8550
template<typename T=ll>
struct CC {
  bool initialized;
  vector<T> xs;
  CC(): initialized(false) {}
  void add(T x) { xs.push_back(x);}
  void init() {
    sort(xs.begin(), xs.end());
    xs.erase(unique(xs.begin(),xs.end()),xs.end());
    initialized = true;
  }
  int operator()(T x) {
    if (!initialized) init();
    return upper_bound(xs.begin(), xs.end(), x) - xs.begin() - 1;
  }
  T operator[](int i) {
    if (!initialized) init();
    return xs[i];
  }
  int size() {
    if (!initialized) init();
    return xs.size();
  }
};

struct SCC {
	using Edge = int;
	using SGraph = vector<vector<Edge>>;

	// input
	SGraph D, rD;

	// result
	vector<vector<int>> cmp;//連結成分の配列
	vector<int> par;//vがどの連結成分に属するか
	SGraph dag;  //新たに作成されたdag

	// constructor
	SCC(int N) : D(N), rD(N) {}

	// add edge
	void addedge(int u, int v) {
		D[u].push_back(v);
		rD[v].push_back(u);
	}

	// decomp
	vector<bool> seen;
	vector<int> vs, rvs;
	void dfs(int v) {
		seen[v] = true;
		for (auto head : D[v]) if (!seen[head]) dfs(head);
		vs.push_back(v);
	}
	void rdfs(int v, int k) {
		seen[v] = true;
		par[v] = k;
		for (auto e : rD[v]) if (!seen[e]) rdfs(e, k);
		rvs.push_back(v);
	}

	// reconstruct
	set<pair<int,int>> newEdges;
	void reconstruct() {
		int N = (int)D.size();
		int dV = (int)cmp.size();
		dag.assign(dV, vector<Edge>());
		newEdges.clear();
		for (int i = 0; i < N; ++i) {
			int u = par[i];
			for (auto e : D[i]) {
				int v = par[e];
				if (u == v) continue;
				if (!newEdges.count({u, v})) {
					dag[u].push_back(v);
					newEdges.insert({u, v});
				}
			}
		}
	}

	// main
	void build() {
		// first dfs
		int N = (int)D.size();
		seen.assign(N, false);
		vs.clear();
		for (int v = 0; v < N; ++v) if (!seen[v]) dfs(v);

		// back dfs
		int k = 0;
		cmp.clear();
		par.assign(N, -1);
		seen.assign(N, false);
		for (int i = N - 1; i >= 0; --i) {
			if (!seen[vs[i]]) {
				rvs.clear();
				rdfs(vs[i], k++);
				cmp.push_back(rvs);
			}
		}

		// reconstruct
		reconstruct();
	}
};

template<int MOD> struct Fp {//formal power 
    long long val;
    constexpr Fp(long long v = 0) noexcept : val(v % MOD) {
        if (val < 0) val += MOD;
    }
    constexpr int getmod() const { return MOD; }
    constexpr Fp operator - () const noexcept {
        return val ? MOD - val : 0;
    }
    constexpr Fp operator + (const Fp& r) const noexcept { return Fp(*this) += r; }
    constexpr Fp operator - (const Fp& r) const noexcept { return Fp(*this) -= r; }
    constexpr Fp operator * (const Fp& r) const noexcept { return Fp(*this) *= r; }
    constexpr Fp operator / (const Fp& r) const noexcept { return Fp(*this) /= r; }
    constexpr Fp& operator += (const Fp& r) noexcept {
        val += r.val;
        if (val >= MOD) val -= MOD;
        return *this;
    }
    constexpr Fp& operator -= (const Fp& r) noexcept {
        val -= r.val;
        if (val < 0) val += MOD;
        return *this;
    }
    constexpr Fp& operator *= (const Fp& r) noexcept {
        val = val * r.val % MOD;
        return *this;
    }
    constexpr Fp& operator /= (const Fp& r) noexcept {
        long long a = r.val, b = MOD, u = 1, v = 0;
        while (b) {
            long long t = a / b;
            a -= t * b, swap(a, b);
            u -= t * v, swap(u, v);
        }
        val = val * u % MOD;
        if (val < 0) val += MOD;
        return *this;
    }
    constexpr bool operator == (const Fp& r) const noexcept {
        return this->val == r.val;
    }
    constexpr bool operator != (const Fp& r) const noexcept {
        return this->val != r.val;
    }
    friend constexpr istream& operator >> (istream& is, Fp<MOD>& x) noexcept {
        is >> x.val;
        x.val %= MOD;
        if (x.val < 0) x.val += MOD;
        return is;
    }
    friend constexpr ostream& operator << (ostream& os, const Fp<MOD>& x) noexcept {
        return os << x.val;
    }
    friend constexpr Fp<MOD> modpow(const Fp<MOD>& r, long long n) noexcept {
        if (n == 0) return 1;
        if (n < 0) return modpow(modinv(r), -n);
        auto t = modpow(r, n / 2);
        t = t * t;
        if (n & 1) t = t * r;
        return t;
    }
    friend constexpr Fp<MOD> modinv(const Fp<MOD>& r) noexcept {
        long long a = r.val, b = MOD, u = 1, v = 0;
        while (b) {
            long long t = a / b;
            a -= t * b, swap(a, b);
            u -= t * v, swap(u, v);
        }
        return Fp<MOD>(u);
    }
};

namespace NTT {
    long long modpow(long long a, long long n, int mod) {
        long long res = 1;
        while (n > 0) {
            if (n & 1) res = res * a % mod;
            a = a * a % mod;
            n >>= 1;
        }
        return res;
    }

    long long modinv(long long a, int mod) {
        long long b = mod, u = 1, v = 0;
        while (b) {
            long long t = a / b;
            a -= t * b, swap(a, b);
            u -= t * v, swap(u, v);
        }
        u %= mod;
        if (u < 0) u += mod;
        return u;
    }

    int calc_primitive_root(int mod) {
        if (mod == 2) return 1;
        if (mod == 167772161) return 3;
        if (mod == 469762049) return 3;
        if (mod == 754974721) return 11;
        if (mod == 998244353) return 3;
        int divs[20] = {};
        divs[0] = 2;
        int cnt = 1;
        long long x = (mod - 1) / 2;
        while (x % 2 == 0) x /= 2;
        for (long long i = 3; i * i <= x; i += 2) {
            if (x % i == 0) {
                divs[cnt++] = i;
                while (x % i == 0) x /= i;
            }
        }
        if (x > 1) divs[cnt++] = x;
        for (int g = 2;; g++) {
            bool ok = true;
            for (int i = 0; i < cnt; i++) {
                if (modpow(g, (mod - 1) / divs[i], mod) == 1) {
                    ok = false;
                    break;
                }
            }
            if (ok) return g;
        }
    }

    int get_fft_size(int N, int M) {
        int size_a = 1, size_b = 1;
        while (size_a < N) size_a <<= 1;
        while (size_b < M) size_b <<= 1;
        return max(size_a, size_b) << 1;
    }

    // number-theoretic transform
    template<class mint> void trans(vector<mint>& v, bool inv = false) {
        if (v.empty()) return;
        int N = (int)v.size();
        int MOD = v[0].getmod();
        int PR = calc_primitive_root(MOD);
        static bool first = true;
        static vector<long long> vbw(30), vibw(30);
        if (first) {
            first = false;
            for (int k = 0; k < 30; ++k) {
                vbw[k] = modpow(PR, (MOD - 1) >> (k + 1), MOD);
                vibw[k] = modinv(vbw[k], MOD);
            }
        }
        for (int i = 0, j = 1; j < N - 1; j++) {
            for (int k = N >> 1; k > (i ^= k); k >>= 1);
            if (i > j) swap(v[i], v[j]);
        }
        for (int k = 0, t = 2; t <= N; ++k, t <<= 1) {
            long long bw = vbw[k];
            if (inv) bw = vibw[k];
            for (int i = 0; i < N; i += t) {
                mint w = 1;
                for (int j = 0; j < t/2; ++j) {
                    int j1 = i + j, j2 = i + j + t/2;
                    mint c1 = v[j1], c2 = v[j2] * w;
                    v[j1] = c1 + c2;
                    v[j2] = c1 - c2;
                    w *= bw;
                }
            }
        }
        if (inv) {
            long long invN = modinv(N, MOD);
            for (int i = 0; i < N; ++i) v[i] = v[i] * invN;
        }
    }

    // for garner
    static constexpr int MOD0 = 754974721;
    static constexpr int MOD1 = 167772161;
    static constexpr int MOD2 = 469762049;
    using mint0 = Fp<MOD0>;
    using mint1 = Fp<MOD1>;
    using mint2 = Fp<MOD2>;
    static const mint1 imod0 = 95869806; // modinv(MOD0, MOD1);
    static const mint2 imod1 = 104391568; // modinv(MOD1, MOD2);
    static const mint2 imod01 = 187290749; // imod1 / MOD0;

    // small case (T = mint, long long)
    template<class T> vector<T> naive_mul
    (const vector<T>& A, const vector<T>& B) {
        if (A.empty() || B.empty()) return {};
        int N = (int)A.size(), M = (int)B.size();
        vector<T> res(N + M - 1);
        for (int i = 0; i < N; ++i)
            for (int j = 0; j < M; ++j)
                res[i + j] += A[i] * B[j];
        return res;
    }

    // mint
    template<class mint> vector<mint> mul
    (const vector<mint>& A, const vector<mint>& B) {
        if (A.empty() || B.empty()) return {};
        int N = (int)A.size(), M = (int)B.size();
        if (min(N, M) < 30) return naive_mul(A, B);
        int MOD = A[0].getmod();
        int size_fft = get_fft_size(N, M);
        if (MOD == 998244353) {
            vector<mint> a(size_fft), b(size_fft), c(size_fft);
            for (int i = 0; i < N; ++i) a[i] = A[i];
            for (int i = 0; i < M; ++i) b[i] = B[i];
            trans(a), trans(b);
            vector<mint> res(size_fft);
            for (int i = 0; i < size_fft; ++i) res[i] = a[i] * b[i];
            trans(res, true);
            res.resize(N + M - 1);
            return res;
        }
        vector<mint0> a0(size_fft, 0), b0(size_fft, 0), c0(size_fft, 0);
        vector<mint1> a1(size_fft, 0), b1(size_fft, 0), c1(size_fft, 0);
        vector<mint2> a2(size_fft, 0), b2(size_fft, 0), c2(size_fft, 0);
        for (int i = 0; i < N; ++i)
            a0[i] = A[i].val, a1[i] = A[i].val, a2[i] = A[i].val;
        for (int i = 0; i < M; ++i)
            b0[i] = B[i].val, b1[i] = B[i].val, b2[i] = B[i].val;
        trans(a0), trans(a1), trans(a2), trans(b0), trans(b1), trans(b2);
        for (int i = 0; i < size_fft; ++i) {
            c0[i] = a0[i] * b0[i];
            c1[i] = a1[i] * b1[i];
            c2[i] = a2[i] * b2[i];
        }
        trans(c0, true), trans(c1, true), trans(c2, true);
        static const mint mod0 = MOD0, mod01 = mod0 * MOD1;
        vector<mint> res(N + M - 1);
        for (int i = 0; i < N + M - 1; ++i) {
            int y0 = c0[i].val;
            int y1 = (imod0 * (c1[i] - y0)).val;
            int y2 = (imod01 * (c2[i] - y0) - imod1 * y1).val;
            res[i] = mod01 * y2 + mod0 * y1 + y0;
        }
        return res;
    }

    // long long
    vector<long long> mul_ll
    (const vector<long long>& A, const vector<long long>& B) {
        if (A.empty() || B.empty()) return {};
        int N = (int)A.size(), M = (int)B.size();
        if (min(N, M) < 30) return naive_mul(A, B);
        int size_fft = get_fft_size(N, M);
        vector<mint0> a0(size_fft, 0), b0(size_fft, 0), c0(size_fft, 0);
        vector<mint1> a1(size_fft, 0), b1(size_fft, 0), c1(size_fft, 0);
        vector<mint2> a2(size_fft, 0), b2(size_fft, 0), c2(size_fft, 0);
        for (int i = 0; i < N; ++i)
            a0[i] = A[i], a1[i] = A[i], a2[i] = A[i];
        for (int i = 0; i < M; ++i)
            b0[i] = B[i], b1[i] = B[i], b2[i] = B[i];
        trans(a0), trans(a1), trans(a2), trans(b0), trans(b1), trans(b2);
        for (int i = 0; i < size_fft; ++i) {
            c0[i] = a0[i] * b0[i];
            c1[i] = a1[i] * b1[i];
            c2[i] = a2[i] * b2[i];
        }
        trans(c0, true), trans(c1, true), trans(c2, true);
        static const long long mod0 = MOD0, mod01 = mod0 * MOD1;
        vector<long long> res(N + M - 1);
        for (int i = 0; i < N + M - 1; ++i) {
            int y0 = c0[i].val;
            int y1 = (imod0 * (c1[i] - y0)).val;
            int y2 = (imod01 * (c2[i] - y0) - imod1 * y1).val;
            res[i] = mod01 * y2 + mod0 * y1 + y0;
        }
        return res;
    }
};

// Binomial Coefficient
template<class T> struct BiCoef {
    vector<T> fact_, inv_, finv_;
    constexpr BiCoef() {}
    constexpr BiCoef(int n) noexcept : fact_(n, 1), inv_(n, 1), finv_(n, 1) {
        init(n);
    }
    constexpr void init(int n) noexcept {
        fact_.assign(n, 1), inv_.assign(n, 1), finv_.assign(n, 1);
        int MOD = fact_[0].getmod();
        for(int i = 2; i < n; i++){
            fact_[i] = fact_[i-1] * i;
            inv_[i] = -inv_[MOD%i] * (MOD/i);
            finv_[i] = finv_[i-1] * inv_[i];
        }
    }
    constexpr T com(int n, int k) const noexcept {
        if (n < k || n < 0 || k < 0) return 0;
        return fact_[n] * finv_[k] * finv_[n-k];
    }
    constexpr T fact(int n) const noexcept {
        if (n < 0) return 0;
        return fact_[n];
    }
    constexpr T inv(int n) const noexcept {
        if (n < 0) return 0;
        return inv_[n];
    }
    constexpr T finv(int n) const noexcept {
        if (n < 0) return 0;
        return finv_[n];
    }
};

// Formal Power Series
template <typename mint> struct FPS : vector<mint> {
    using vector<mint>::vector;

    // constructor
    FPS(const vector<mint>& r) : vector<mint>(r) {}

    // core operator
    inline FPS pre(int siz) const {
        return FPS(begin(*this), begin(*this) + min((int)this->size(), siz));
    }
    inline FPS rv() const {
        FPS res = *this;
	rev(res);
        return res;
    }
    inline FPS& normalize() {
        while (!this->empty() && this->back() == 0) this->pop_back();
        return *this;
    }

    // basic operator
    inline FPS operator - () const noexcept {
        FPS res = (*this);
        for (int i = 0; i < (int)res.size(); ++i) res[i] = -res[i];
        return res;
    }
    inline FPS operator + (const mint& v) const { return FPS(*this) += v; }
    inline FPS operator + (const FPS& r) const { return FPS(*this) += r; }
    inline FPS operator - (const mint& v) const { return FPS(*this) -= v; }
    inline FPS operator - (const FPS& r) const { return FPS(*this) -= r; }
    inline FPS operator * (const mint& v) const { return FPS(*this) *= v; }
    inline FPS operator * (const FPS& r) const { return FPS(*this) *= r; }
    inline FPS operator / (const mint& v) const { return FPS(*this) /= v; }
    inline FPS operator << (int x) const { return FPS(*this) <<= x; }
    inline FPS operator >> (int x) const { return FPS(*this) >>= x; }
    inline FPS& operator += (const mint& v) {
        if (this->empty()) this->resize(1);
        (*this)[0] += v;
        return *this;
    }
    inline FPS& operator += (const FPS& r) {
        if (r.size() > this->size()) this->resize(r.size());
        for (int i = 0; i < (int)r.size(); ++i) (*this)[i] += r[i];
        return this->normalize();
    }
    inline FPS& operator -= (const mint& v) {
        if (this->empty()) this->resize(1);
        (*this)[0] -= v;
        return *this;
    }
    inline FPS& operator -= (const FPS& r) {
        if (r.size() > this->size()) this->resize(r.size());
        for (int i = 0; i < (int)r.size(); ++i) (*this)[i] -= r[i];
        return this->normalize();
    }
    inline FPS& operator *= (const mint& v) {
        for (int i = 0; i < (int)this->size(); ++i) (*this)[i] *= v;
        return *this;
    }
    inline FPS& operator *= (const FPS& r) {
        return *this = NTT::mul((*this), r);
    }
    inline FPS& operator /= (const mint& v) {
        assert(v != 0);
        mint iv = modinv(v);
        for (int i = 0; i < (int)this->size(); ++i) (*this)[i] *= iv;
        return *this;
    }
    inline FPS& operator <<= (int x) {
        FPS res(x, 0);
        res.insert(res.end(), begin(*this), end(*this));
        return *this = res;
    }
    inline FPS& operator >>= (int x) {
        FPS res;
        res.insert(res.end(), begin(*this) + x, end(*this));
        return *this = res;
    }
    inline mint eval(const mint& v){
        mint res = 0;
        for (int i = (int)this->size()-1; i >= 0; --i) {
            res *= v;
            res += (*this)[i];
        }
        return res;
    }
    inline friend FPS gcd(const FPS& f, const FPS& g) {
        if (g.empty()) return f;
        return gcd(g, f % g);
    }

    // advanced operation
    // df/dx
    inline friend FPS diff(const FPS& f) {
        int n = (int)f.size();
        FPS res(n-1);
        for (int i = 1; i < n; ++i) res[i-1] = f[i] * i;
        return res;
    }

    // \int f dx
    inline friend FPS integ(const FPS& f) {
        int n = (int)f.size();
        FPS res(n+1, 0);
        for (int i = 0; i < n; ++i) res[i+1] = f[i] / (i+1);
        return res;
    }

    // inv(f), f[0] must not be 0
    inline friend FPS inv(const FPS& f, int deg) {
        assert(f[0] != 0);
        if (deg < 0) deg = (int)f.size();
        FPS res({mint(1) / f[0]});
        for (int i = 1; i < deg; i <<= 1) {
            res = (res + res - res * res * f.pre(i << 1)).pre(i << 1);
        }
        res.resize(deg);
        return res;
    }
    inline friend FPS inv(const FPS& f) {
        return inv(f, f.size());
    }

    // division, r must be normalized (r.back() must not be 0)
    inline FPS& operator /= (const FPS& r) {
        assert(!r.empty());
        assert(r.back() != 0);
        this->normalize();
        if (this->size() < r.size()) {
            this->clear();
            return *this;
        }
        int need = (int)this->size() - (int)r.size() + 1;
        *this = ((*this).rv().pre(need) * inv(r.rv(), need)).pre(need).rv();
        return *this;
    }
    inline FPS& operator %= (const FPS &r) {
        assert(!r.empty());
        assert(r.back() != 0);
        this->normalize();
        FPS q = (*this) / r;
        return *this -= q * r;
    }
    inline FPS operator / (const FPS& r) const { return FPS(*this) /= r; }
    inline FPS operator % (const FPS& r) const { return FPS(*this) %= r; }

    // log(f) = \int f'/f dx, f[0] must be 1
    inline friend FPS log(const FPS& f, int deg) {
        assert(f[0] == 1);
	//
        FPS res = integ(diff(f) * inv(f, deg));
        res.resize(deg);
        return res;
    }
    inline friend FPS log(const FPS& f) {
        return log(f, f.size());
    }

    // exp(f), f[0] must be 0
    inline friend FPS exp(const FPS& f, int deg) {
        assert(f[0] == 0);
        FPS res(1, 1);
        for (int i = 1; i < deg; i <<= 1) {
            res = res * (f.pre(i<<1) - log(res, i<<1) + 1).pre(i<<1);
        }
        res.resize(deg);
        return res;
    }
    inline friend FPS exp(const FPS& f) {
        return exp(f, f.size());
    }

    // pow(f) = exp(e * log f)
    inline friend FPS pow(const FPS& f, long long e, int deg) {
        long long i = 0;
        while (i < (int)f.size() && f[i] == 0) ++i;
        if (i == (int)f.size()) return FPS(deg, 0);
        if (i * e >= deg) return FPS(deg, 0);
        mint k = f[i];
        FPS res = exp(log((f >> i) / k, deg) * e, deg) * modpow(k, e) << (e * i);
        res.resize(deg);
        return res;
    }
    inline friend FPS pow(const FPS& f, long long e) {
        return pow(f, e, f.size());
    }

    // sqrt(f), f[0] must be 1
    inline friend FPS sqrt_base(const FPS& f, int deg) {
        assert(f[0] == 1);
        mint inv2 = mint(1) / 2;
        FPS res(1, 1);
        for (int i = 1; i < deg; i <<= 1) {
            res = (res + f.pre(i << 1) * inv(res, i << 1)).pre(i << 1);
            for (mint& x : res) x *= inv2;
        }
        res.resize(deg);
        return res;
    }
    inline friend FPS sqrt_base(const FPS& f) {
        return sqrt_base(f, f.size());
    }
};
/*
const int MOD = 998244353;
using modint = Fp<MOD>;
FPS<modint> ;
*/
//int modl[5] = {998244353, 1000000007, 1000000009, 1000000021, 1000000033};
int modl[5] = { 10000019,10000079,10000103,10000121,10000139};
struct Hash{
	vll h;
	Hash(st s):h(5)
	{
		for(ll i=0;i<s.sz;++i)
		{
			ll x=s[i]-'0';
			j(5)
			{
				h[j]*=10;
				h[j]+=x;
				h[j]%=modl[j];
			}
		}
	}
	bool operator<(const Hash& r)const
	{
		i(5)
		{
			if(h[i]!=r.h[i])
			{
				return h[i]<r.h[i];
			}
		}
		return false;
	};
	bool operator==(const Hash& r)const
	{
		bool ok=1;
		i(5)
		{
			ok&=h[i]==r.h[i];
		}
		return ok;
	}
	Hash op(const Hash r)
	{
		Hash a("0");
		i(5)
		{
			a.h[i]=(h[i]*r.h[i])%modl[i];
		}
		return a; 
	};
};
void sub() {
	ge(st,s);
	ll m,r;
	i(s.sz)
	{
		if(s[i]=='M')
			m=i;
		else if(s[i]=='R')
			r=i;
	}
	Yes(r<m);
}
