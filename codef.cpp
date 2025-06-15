#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
#include<numeric>
#include<cmath>
#include<bitset>
#include<iomanip>
#include<random>
#include<fstream>
using namespace std;
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
#define ff(i,x,y) for(ll i=x;i<y;++i)
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
#define n(x) for(ll yz=0;yz<x;++yz)
#define x(k) while(k--)
#define wh(x) while(x)
#define st string
#define M 8611686018427387904
#define ze(x) __builtin_ctzll(x)
#define z(x) ll x=0
#define in insert
#define un(v) v.erase(unique(all(v)),v.en);
#define er(i,n) erase(i,n);
#define cou(x,a) count(all(x),a)
#define lo(v,a) lower_bound(v.begin(),v.end(),a)
#define dou double
#define elif else if
#define acc(v,x) accumulate(v.begin(),v.end(),x)
#define fix(n,ans) cout<<fixed<<std::setprecision(n)<<ans<<endl;
void cc(){ cout<<endl; };
void cj(){ cout<<endl; };
void cl(){ cout<<endl; };
template<class T,class... A> void cj(T a,A... b){ cout<<a; (cout<<...<<(cout<<' ',b)); cout<<endl; }; 
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
//#define MOD 1000000007
#define MOD 998244353
class mint { public: ll a; mint(ll x=0):a(x%MOD){} mint operator + (const mint rhs) const  { return mint(*this) += rhs; } mint operator - (const mint rhs) const  { return mint(*this) -= rhs; } mint operator * (const mint rhs) const  { return mint(*this) *= rhs; } mint operator / (const mint rhs) const  { return mint(*this) /= rhs; } mint &operator += (const mint rhs)  { a += rhs.a; if (a >= MOD) a -= MOD; return *this; } mint &operator -= (const mint rhs)  { if (a < rhs.a) a += MOD; a -= rhs.a; return *this; } mint &operator *= (const mint rhs)  { a = a * rhs.a % MOD; return *this; } mint &operator /= (mint rhs)  { ll exp = MOD - 2; while (exp) { if (exp % 2) *this *= rhs; rhs *= rhs; exp /= 2; } return *this; } bool operator > (const mint& rhs)const{ return (this->a>rhs.a); } bool operator < (const mint& rhs)const{ return (this->a<rhs.a); } bool operator >= (const mint& rhs)const{ return (this->a>=rhs.a); } bool operator <= (const mint& rhs)const{ return (this->a<=rhs.a); } };

ll modpow(ll a, ll b, ll mod = MOD) {
	ll res = 1;
	for (a %= mod; b; a = a * a % mod, b >>= 1)
		if (b & 1) res = res * a % mod;
	return res;
}

struct UF{ vll par,rk,sz; UF(ll n):par(n+5,-1),rk(n+5,0){ }
	ll root(ll x){ if(par[x]<0)return x; else return par[x]=root(par[x]); }
	bool same(ll x,ll y){ return root(x)==root(y); }
	bool unite(ll x,ll y){ ll rx=root(x),ry=root(y); if(rx==ry) return false; if(rk[rx]<rk[ry]) swap(rx,ry); par[rx]+=par[ry]; par[ry]=rx; if(rk[rx]==rk[ry]) rk[rx]++; return true; }
	ll size(ll x){ return -par[root(x)]; }
};
void init(){
   ios::sync_with_stdio(false);
	cin.tie(0);
}
void solve();
void ori();
ll ck(){
   std::random_device seed_gen;
   std::mt19937 engine(seed_gen());
   // [-1.0, 1.0)の値の範囲で、等確率に実数を生成する
   std::uniform_real_distribution<> dist1(1.0, 100000);
   ll n;
   i(10000){ // 各分布法に基いて乱数を生成
   		  n  = dist1(engine);
   } rz;
}
/*
O(2*10^8)
9*10^18
1LL<<62 4*10^18
~~(v.be,v.be+n,x); not include v.be+n
set.lower_bound(x);

->. *++ ! /%* +- << < == & && +=
ios::sync_with_stdio(false);
cin.tie(0);
*/
//vll dx={-1,-1,-1,0,0,1,1,1},dy={-1,0,1,-1,1,-1,0,1};
//vll dx={-1,0,0,1},dy={0,-1,1,0};
int main(){
		  init();
		  ll t;ci(t);
		  i(t)
					 solve();
		  rz;
}
#define N 17 
#define L 64
void solve(){
		  ll n;ci(n);
		  if(n&1)
					 cj("NO");
		  else{
					 cj("YES");
					 --n;
					 x(n){
								cc(n&1?1:-1);
					 }
					 cj(1);
		  }
}
