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
using namespace std;
#define endl "\n"
#define ll long long
#define bl bool
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
#define rz return 0; 
#define sz size()
#define len length()
#define con continue; 
#define br break; 
#define ma(a,x) a=max(a,x)
#define mi(a,x) a=min(a,x)
#define so(v) sort(all(v))
#define rso(v) sort(rall(v))
#define rev(v) reverse(all(v))
#define i(x) for(ll i=0;i<x;++i)
#define j(x) for(ll j=0;j<x;++j)
#define k(x) for(ll k=0;k<x;++k)
#define xx(k) while(k--)

#define wh(x) while(x)
#define st string
#define M 8611686018427387904
#define zeros(x) __builtin_ctzll(x)
#define in insert
#define un(v) v.erase(unique(all(v)),v.en);
#define er(i,n) erase(i,n);
#define co(x,a) count(all(x),a)
#define lo(v,a) lower_bound(v.begin(),v.end(),a)
#define up(v,a) upper_bound(v.begin(),v.end(),a)
#define dou double
#define elif else if
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
void ori();
ll random_(){
		  std::random_device seed_gen;
		  std::mt19937 engine(seed_gen());
		  // [-1.0, 1.0)の値の範囲で、等確率に実数を生成する
		  std::uniform_real_distribution<> dist1(1.0, 100000);
		  i(10000){ // 各分布法に基いて乱数を生成
					 ll n  = dist1(engine);
		  } rz;
}
bl isup(ch c){
		  re 'A'<=c&&c<='Z';
}
bl islo(ch c){
		  re 'a'<=c&&c<='z';
}
//isdigit
mll pr_fa(ll x){
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
ch to_up(ch a){
		  re toupper(a);
}
ch to_lo(ch a){
		  re tolower(a);
}
#define acc(v) accumulate(v.begin(),v.end(),0LL)
#define acci(v,i) accumulate(v.begin(),v.begin()+i,0LL)
#define dll deque<ll>
int main(void){
		  init();
		  solve();
		  rz;
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
ll MOD= 1000000007;
//#define MOD 1000000007
//#define MOD 10007
//#define MOD 998244353
//ll MOD;
ll mod_pow(ll a, ll b, ll mod = MOD) {
		  ll res = 1;
		  for (a %= mod; b; a = a * a % mod, b >>= 1)
					 if (b & 1) res = res * a % mod;
		  return res;
}
class mint { 
		  public:
					 ll a;
					 mint(ll x=0):a(x%MOD){} 
					 mint operator + (const mint rhs) const  { 
								return mint(*this) += rhs; } 
					 mint operator - (const mint rhs) const  { 
								return mint(*this) -= rhs; } 
					 mint operator * (const mint rhs) const  { 
								return mint(*this) *= rhs; } 
					 mint operator / (const mint rhs) const  { 
								return mint(*this) /= rhs; } 
					 mint &operator += (const mint rhs)  { 
								a += rhs.a; if (a >= MOD) a -= MOD; return *this; } 
					 mint &operator -= (const mint rhs)  { 
								if (a < rhs.a) a += MOD; a -= rhs.a; return *this; } 
					 mint &operator *= (const mint rhs)  { 
								a = a * rhs.a % MOD; return *this; } 
					 mint &operator /= (mint rhs)  { 
								ll exp = MOD - 2; while (exp) { if (exp % 2) *this *= rhs; rhs *= rhs; exp /= 2; } return *this; } 
					 bool operator > (const mint& rhs)const{ return (this->a>rhs.a); } 
					 bool operator < (const mint& rhs)const{ return (this->a<rhs.a); } 
					 bool operator >= (const mint& rhs)const{ return (this->a>=rhs.a); } 
					 bool operator <= (const mint& rhs)const{ return (this->a<=rhs.a);} 
					 bool operator == (const mint& rhs)const{ return (this->a==rhs.a);} 
}; 
istream& operator>>(istream& is, mint& r) { is>>r.a;r.a%=MOD; return is;} 
ostream& operator<<(ostream& os, const mint& r) { os<<r.a;return os;}

ll sumw(ll v,ll r){ re (v==0?0:sumw(v/10,r)*r+v%10); }
#define com complex<dou>
struct UFS{ 
		  map<st,st> par;map<st,ll>rk,siz;
		  st root(st x){ 
					 auto it=par.find(x);
					 if(it==par.en){
								par[x]=x;siz[x]=1;re x;
					 }
					 if(par[x]==x)return x;
					 else return par[x]=root(par[x]);
		  }
		  bool same(st x,st y){ return root(x)==root(y); }
		  bool unite(st x,st y){ 
					 st rx=root(x),ry=root(y);
					 if(rx==ry) return false;
					 if(rk[rx]<rk[ry]) swap(rx,ry);
					 siz[rx]+=siz[ry];
					 par[ry]=rx;
					 if(rk[rx]==rk[ry]) rk[rx]++;
					 return true;
		  }
		  ll size(st s){
					 re siz[s];
		  }
};

//vector<long long> fact, fact_inv, inv;
/*  init_nCk :二項係数のための前処理
    計算量:O(n)
    */
vll fact,inv,fact_inv;
void init_nCk(int SIZE) {
	fact.resize(SIZE + 5);
	fact_inv.resize(SIZE + 5);
	inv.resize(SIZE + 5);
	fact[0] = fact[1] = 1;
	fact_inv[0] = fact_inv[1] = 1;
	inv[1] = 1;
	for (int i = 2; i < SIZE + 5; i++) {
		fact[i] = fact[i - 1] * i % MOD;
		inv[i] = MOD - inv[MOD % i] * (MOD / i) % MOD;
		fact_inv[i] = fact_inv[i - 1] * inv[i] % MOD;
	}
}
long long nCk(int n, int k) {
	return fact[n] * (fact_inv[k] * fact_inv[n - k] % MOD) % MOD;
}
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
#define rfo(i,x,y) for(ll i=x;i>=y;--i)
#define qll queue<ll>

template<typename T> using pq= priority_queue<T>;
template<typename T> using apq= priority_queue<T,vec<T>,greater<T>>;
ll dijkstra(ll s){
	ll N; ll n,m,k;
	vec<vec<pll>>e(N);
	vll dis(N,M);
	apq<pll>q;q.push({0,s});
	dis[s]=0;
	ll d,c,to,cst;
	while(q.em^1){
		tie(d,c)=q.top();q.pop();
		if(dis[c]<d)continue;
		if(c==n||c==n+n)re dis[c];
		for(auto[to,cst]:e[c])if(chmin(dis[to],cst+d)){
			q.push({dis[to],to});
		}
	}
	re -1;
}
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


/* O(2*10^8) 9*10^18 1LL<<62 4*10^18
   ~~(v.be,v.be+n,x); not include v.be+n
   set.lower_bound(x);
   ->. *++ ! /%* +- << < == & && +=?:
   */
//vll dx={-1,-1,-1,0,0,1,1,1},dy={-1,0,1,-1,1,-1,0,1};
#define N  2019
//          12345678901234567890
#define A 26
#define Path -1ll
#define Cycle 1ll
#define Visited 2ll
#define Visiting 1ll
#define NotVisited 0ll
#define top top()
//vll dx={-1,0,0,1},dy={0,-1,1,0};
void solve(){
	ge(ll,n,x,y);
	vll a(n);in(a);

	ll i=0,ans=0;
	while(i<n){
		vll v;
		while(i<n&&y<=a[i]&&a[i]<=x){
			v.pub(a[i++]);
		}
		//n<=i||a[i]<y||x<a[i];
		if(v.sz){

			ll r=0,xx=0,yy=0;
			for(ll l=0;l<v.sz;){
				while(r<v.sz&&(xx==0||yy==0)){
					xx+=v[r]==x;
					yy+=v[r]==y;
					r++;
				}//xx&&yy||v.sz<=r
				if(xx&&yy){
					ans+=v.sz+1-r;
				}
				xx-=(v[l]==x);
				yy-=(v[l]==y);
				++l;
			}
		}

		else ++i;
	}
	ff(ans);
}
