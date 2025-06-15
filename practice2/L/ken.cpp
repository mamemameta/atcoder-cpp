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
#define up(v,a) upper_bound(v.begin(),v.end(),a)
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

void init(){
		  ios::sync_with_stdio(false);
		  cin.tie(0);
}
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
void solve(){
	//ge(ll,t);
	ll t=1;
	xx(t){
		sub();
	}
}
template <class T>
struct Edge {
    int rv, from, to;  // rev:逆向きの辺の番号
    T cap, original_cap;
    Edge(int f, int t, T c,int r ) : rv(r), from(f), to(t), cap(c), original_cap(c) {}
};

template <class T>
struct Graph {
    vector<vector<Edge<T>>> G;
    Graph(int n = 0) : G(n) {}

    vector<Edge<T>>& operator[](int i) { return G[i]; }//G[i]でi番目の辺を返す
    const size_t size() const { return G.size(); }//
    Edge<T>& redge(Edge<T> e) {  // 逆向きの辺を返す
        return G[e.to][e.rv];   // 自己ループはないと仮定（あれば G[e.to][e.rev + 1] とする必要がある）
    }
    void add_edg(int from, int to, T cap) {  // 有向辺を加える
        G[from].push_back( Edge<T>(  from, to, cap,(int)G[to].size() ));
        G[to].push_back(Edge<T>( to, from, 0 ,(int)G[from].size() - 1));
    }
};

/* FordFulkerson: Ford-Fulkersonのアルゴリズムで最大流を求める構造体
    max_flow(G,s,t)：sからtへのグラフGの最大流を求める
    副作用：G は最大流の残余ネットワークになる
    計算量: O(|f*||E|) (f*:最大流) (この最悪ケースになることはほぼ無い)
*/
template <class T>
struct Ford {
    const T INF = 1e9;
    vector<int> used;

    Ford(){};
    T dfs(Graph<T>& G, int v, int t, T f) {  // 増加可能経路を見つけて増加分のフローを返す
	    if (v == t) return f;
	    used[v] = true;
	    for (auto& e : G[v]) {
		    if (!used[e.to] && e.cap > 0) {
			    T d = dfs(G, e.to, t, min(f, e.cap));
			    if (d > 0) {
				    e.cap -= d;
				    G.redge(e).cap += d;
				    return d;
			    }
		    }
	    }
	    return 0;
    }
    T max_flow(Graph<T>& G, int s, int t) {
	    T flow = 0;
	    while (true) {
		    used.assign(G.size(), 0);
		    T f = dfs(G, s, t, INF);  // f が増加分のフロー
		    if (f == 0) {
			    return flow;
		    } else {
			    flow += f;
		    }
	    }
	    return 0;
    }
    /*
	  Ford<ll>f;
	  ff(f.max_flow(g,s,sink));
	  */
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
struct HLDecomposition {//Heavy light decomposition
	vector<set<int>> g;
       	vector<int> vid, head, heavy, parent, depth, inv, in, out;
	HLDecomposition() {} HLDecomposition(int n) { init(n); }
	void init(int n) {
		g.resize(n); vid.resize(n, -1); head.resize(n); heavy.resize(n, -1);
		parent.resize(n); depth.resize(n); inv.resize(n); in.resize(n); out.resize(n);
	}
	void add(int u, int v) { g[u].insert(v); g[v].insert(u); }
	void build(int root) { dfs(root, -1); t = 0; dfs_hld(root); }
	int dfs(int curr, int prev) {
		parent[curr] = prev; int sub = 1, max_sub = 0;
		heavy[curr] = -1;
		for (int next : g[curr]) if (next != prev) {
			depth[next] = depth[curr] + 1;
			int sub_next = dfs(next, curr); sub += sub_next;
			if (max_sub < sub_next) max_sub = sub_next, heavy[curr] = next;
		}return sub;
	}
	int t = 0;
	void dfs_hld(int v = 0)
	{
		vid[v] = in[v] = t;
		t++;
		inv[in[v]] = v;
		if (0 <= heavy[v]) {
			head[heavy[v]] = head[v];
			dfs_hld(heavy[v]);
		}
		for (auto u : g[v]) if (depth[v] < depth[u])  if (u != heavy[v]) {
			head[u] = u;
			dfs_hld(u);
		}
		out[v] = t;
	}
	void foreach(int u, int v, function<void(int, int)> f) { // [x,y]
		if (vid[u] > vid[v]) swap(u, v); f(max(vid[head[v]], vid[u]), vid[v]);
		if (head[u] != head[v]) foreach(u, parent[head[v]], f);
	}
	int ancestor(int from, int times) {
		while (true) {
			if (depth[head[from]] > depth[from] - times) {
				times -= depth[from] - depth[head[from]] + 1; if (head[from] == 0)return -1; from = parent[head[from]];
			}
			else return inv[vid[from] - times];
		}
	}
	int lca(int u, int v) {//lowest common ancestor 最近共通祖先
		if (vid[u] > vid[v]) swap(u, v);
	       	if (head[u] == head[v]) return u;
		return lca(u, parent[head[v]]);
	}
	int distance(int u, int v) { return depth[u] + depth[v] - 2 * depth[lca(u, v)]; }
	int child(int parent, int child, int times) {
		assert(depth[parent] < depth[child]);
		int d = distance(parent, child); assert(times - 1 <= d); return ancestor(child, d - times);
	}
	int go(int from, int to, int times) {
		int d = distance(from, to); assert(0 <= times and times <= d);
		int lc = lca(from, to); if (lc == to)return ancestor(from, times); if (lc == from)return child(from, to, times);
		int dd = distance(from, lc); if (dd <= times)return go(lc, to, times - dd); return ancestor(from, times);
	}
};
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
ll mod = 1000000007;
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
const int max_n = 1 << 20;
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
struct SegTree{
	ll n=1;vll v;
	 SegTree(ll _n){
		while(n<_n)
			n*=2;
		v.resize(n*2);
	}
	ll op(ll a,ll b){
		re a+b;
	}
	void update(ll pos,ll val){
		pos+=n-1;
		v[pos]=op(v[pos],val);
		//v[pos]=val;
		while(pos){
			pos=(pos-1)/2;
			v[pos]=op(v[pos],val);
		}
	}
	ll ran(ll l,ll r){
		re sub(l,r,0ll,0ll ,n-1);
	}
	ll sub(ll l,ll r,ll nowl,ll now,ll nowr){
		if(nowr<l||r<nowl) re 0ll;
		if(l<=nowl&&nowr<=r)re v[now];
		ll vall=sub(l,r,nowl,(now*2)+1,(nowl+nowr)/2);
		ll valr=sub(l,r,(nowl+nowr)/2+1,(now*2)+2,nowr);
		re op(vall,valr);
	}
};
#include <bits/stdc++.h>
using namespace std;

// Lazy Segment Tree
template<class Monoid, class Action> struct LazySegmentTree {
    // various function types
    using FuncMonoid = function<Monoid(Monoid, Monoid)>;
    using FuncAction = function<Monoid(Action, Monoid)>;
    using FuncComposition = function<Action(Action, Action)>;

    // core member
    int N;
    FuncMonoid OP;
    FuncAction ACT;
    FuncComposition COMP;
    Monoid IDENTITY_MONOID;
    Action IDENTITY_ACTION;

    // inner data
    int log, offset;
    vector<Monoid> dat;
    vector<Action> lazy;

    // constructor
    LazySegmentTree() {}
    LazySegmentTree(int n, const FuncMonoid op, const FuncAction act, const FuncComposition comp,
                    const Monoid &identity_monoid, const Action &identity_action) {
        init(n, op, act, comp, identity_monoid, identity_action);
    }
    LazySegmentTree(const vector<Monoid> &v,
                    const FuncMonoid op, const FuncAction act, const FuncComposition comp,
                    const Monoid &identity_monoid, const Action &identity_action) {
        init(v, op, act, comp, identity_monoid, identity_action);
    }
    void init(int n, const FuncMonoid op, const FuncAction act, const FuncComposition comp,
              const Monoid &identity_monoid, const Action &identity_action) {
        N = n, OP = op, ACT = act, COMP = comp;
        IDENTITY_MONOID = identity_monoid, IDENTITY_ACTION = identity_action;
        log = 0, offset = 1;
        while (offset < N) ++log, offset <<= 1;
        dat.assign(offset * 2, IDENTITY_MONOID);
        lazy.assign(offset * 2, IDENTITY_ACTION);
    }
    void init(const vector<Monoid> &v,
              const FuncMonoid op, const FuncAction act, const FuncComposition comp,
              const Monoid &identity_monoid, const Action &identity_action) {
        init((int)v.size(), op, act, comp, identity_monoid, identity_action);
        build(v);
    }
    void build(const vector<Monoid> &v) {
        assert(N == (int)v.size());
        for (int i = 0; i < N; ++i) dat[i + offset] = v[i];
        for (int k = offset - 1; k > 0; --k) pull_dat(k);
    }
    int size() const {
        return N;
    }

    // basic functions for lazy segment tree
    void pull_dat(int k) {
        dat[k] = OP(dat[k * 2], dat[k * 2 + 1]);
    }
    void apply_lazy(int k, const Action &f) {
        dat[k] = ACT(f, dat[k]);
        if (k < offset) lazy[k] = COMP(f, lazy[k]);
    }
    void push_lazy(int k) {
        apply_lazy(k * 2, lazy[k]);
        apply_lazy(k * 2 + 1, lazy[k]);
        lazy[k] = IDENTITY_ACTION;
    }
    void pull_dat_deep(int k) {
        for (int h = 1; h <= log; ++h) pull_dat(k >> h);
    }
    void push_lazy_deep(int k) {
        for (int h = log; h >= 1; --h) push_lazy(k >> h);
    }

    // setter and getter, update A[i], i is 0-indexed, O(log N)
    void set(int i, const Monoid &v) {
        assert(0 <= i && i < N);
        int k = i + offset;
        push_lazy_deep(k);
        dat[k] = v;
        pull_dat_deep(k);
    }
    Monoid get(int i) {
        assert(0 <= i && i < N);
        int k = i + offset;
        push_lazy_deep(k);
        return dat[k];
    }
    Monoid operator [] (int i) {
        return get(i);
    }

    // apply f for index i
    void apply(int i, const Action &f) {
        assert(0 <= i && i < N);
        int k = i + offset;
        push_lazy_deep(k);
        dat[k] = ACT(f, dat[k]);
        pull_dat_deep(k);
    }
    // apply f for interval [l, r)
    void apply(int l, int r, const Action &f) {
        assert(0 <= l && l <= r && r <= N);
        if (l == r) return;
        l += offset, r += offset;
        for (int h = log; h >= 1; --h) {
            if (((l >> h) << h) != l) push_lazy(l >> h);
            if (((r >> h) << h) != r) push_lazy((r - 1) >> h);
        }
        int original_l = l, original_r = r;
        for (; l < r; l >>= 1, r >>= 1) {
            if (l & 1) apply_lazy(l++, f);
            if (r & 1) apply_lazy(--r, f);
        }
        l = original_l, r = original_r;
        for (int h = 1; h <= log; ++h) {
            if (((l >> h) << h) != l) pull_dat(l >> h);
            if (((r >> h) << h) != r) pull_dat((r - 1) >> h);
        }
    }

    // get prod of interval [l, r)
    Monoid prod(int l, int r) {
        assert(0 <= l && l <= r && r <= N);
        if (l == r) return IDENTITY_MONOID;
        l += offset, r += offset;
        for (int h = log; h >= 1; --h) {
            if (((l >> h) << h) != l) push_lazy(l >> h);
            if (((r >> h) << h) != r) push_lazy(r >> h);
        }
        Monoid val_left = IDENTITY_MONOID, val_right = IDENTITY_MONOID;
        for (; l < r; l >>= 1, r >>= 1) {
            if (l & 1) val_left = OP(val_left, dat[l++]);
            if (r & 1) val_right = OP(dat[--r], val_right);
        }
        return OP(val_left, val_right);
    }
    Monoid all_prod() {
        return dat[1];
    }

    // get max r that f(get(l, r)) = True (0-indexed), O(log N)
    // f(IDENTITY) need to be True
    int max_right(const function<bool(Monoid)> f, int l = 0) {
        if (l == N) return N;
        l += offset;
        push_lazy_deep(l);
        Monoid sum = IDENTITY_MONOID;
        do {
            while (l % 2 == 0) l >>= 1;
            if (!f(OP(sum, dat[l]))) {
                while (l < offset) {
                    push_lazy(l);
                    l = l * 2;
                    if (f(OP(sum, dat[l]))) {
                        sum = OP(sum, dat[l]);
                        ++l;
                    }
                }
                return l - offset;
            }
            sum = OP(sum, dat[l]);
            ++l;
        } while ((l & -l) != l);  // stop if l = 2^e
        return N;
    }

    // get min l that f(get(l, r)) = True (0-indexed), O(log N)
    // f(IDENTITY) need to be True
    int min_left(const function<bool(Monoid)> f, int r = -1) {
        if (r == 0) return 0;
        if (r == -1) r = N;
        r += offset;
        push_lazy_deep(r - 1);
        Monoid sum = IDENTITY_MONOID;
        do {
            --r;
            while (r > 1 && (r % 2)) r >>= 1;
            if (!f(OP(dat[r], sum))) {
                while (r < offset) {
                    push_lazy(r);
                    r = r * 2 + 1;
                    if (f(OP(dat[r], sum))) {
                        sum = OP(dat[r], sum);
                        --r;
                    }
                }
                return r + 1 - offset;
            }
            sum = OP(dat[r], sum);
        } while ((r & -r) != r);
        return 0;
    }

    // debug stream
    friend ostream& operator << (ostream &s, LazySegmentTree seg) {
        for (int i = 0; i < (int)seg.size(); ++i) {
            s << seg[i];
            if (i != (int)seg.size() - 1) s << " ";
        }
        return s;
    }

    // dump
    void dump() {
        for (int i = 0; i <= log; ++i) {
            for (int j = (1 << i); j < (1 << (i + 1)); ++j) {
                cout << "{" << dat[j] << "," << lazy[j] << "} ";
            }
            cout << endl;
        }
    }
};

/* セグメント木のための構造体と、二項演算関数 op と、単位元関数 e */
struct Node {
    long long zero, one, tentou;  // 区間内部の 0 の個数、1 の個数、転倒数
};

// 二項演算
Node op(Node x, Node y) {
    return Node{x.zero + y.zero,
                x.one + y.one,
                x.tentou + y.tentou + x.one * y.zero};
}

// 単位元
const Node identity_monoid = Node{0, 0, 0};

/* 遅延評価のための型と、作用関数 mapping と、作用の合成関数 composition と、単位元関数 id() */
using Act = bool;  // 区間反転するかどうか

// 作用関数
Node mapping(Act f, Node x) {
    if (f) return Node{x.one, x.zero, x.one * x.zero - x.tentou};
    else return x;
}

// 作用の合成関数
Act composition(Act g, Act f) {
    if (g) f = !f;
    return f;
}

// 作用の単位元
const Act identity_action = false;

int main() {
    // 入力
    int N, Q;
    cin >> N >> Q;
    vector<Node> A(N);
    for (int i = 0; i < N; ++i) {
        int x;
        cin >> x;
        if (x) A[i] = Node{0, 1, 0};
        else A[i] = Node{1, 0, 0};
    }

    // 遅延評価セグメント木のセットアップ
    LazySegmentTree<Node, Act> seg(A, op, mapping, composition,
                                   identity_monoid, identity_action);

    // クエリ処理
    while (Q--) {
        int t, l, r;
        cin >> t >> l >> r;
        --l;
        if (t == 1) {
            seg.apply(l, r, true);
        } else {
            Node res = seg.prod(l, r);
            cout << res.tentou << endl;
        }
    }
}
struct Z3{
	ll zero,one,t;
};
void sub()
{
	using X=Z3;
	function<Z3(Z3,Z3)> op=[](Z3 l,Z3 r)->Z3
	{
		return Z3 {
			l.zero+r.zero,
			l.one+r.one,
			l.t+r.t+l.one*r.zero
		};
	};
	Z3 e=Z3(0,0,0)	;

	using Y=Z3;
	function<Z3(bool,Z3)>=f[](bool b,Z3 x)
	{
		if(b)
			return Z3(x.one,x.zero,x.one*x.zero-x.t);
		else return x;
	};
}
