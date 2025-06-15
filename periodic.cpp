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
#define uniq(v) v.erase(unique(all(v)),v.en);
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
template<class... A> void ci(A&... a){ (cin>>...>>a); }; 
template<class T>void ou(T v){fa(i,v)cout<<i<<" ";cout<<endl;} 
template<class T>void oun(T v){fa(i,v)cout<<i;cout<<endl;} 
template<class T>void ouu(T v){fa(i,v){fa(j,i)cout<<j<<" ";cout<<endl;}} 
template<class T> void oul(T v){fa(i,v)cout<<i<<endl;} 
template<class T>void in(T &v){fa(i,v)cin>>i;}
template<class T>void inn(T &v){fa(i,v)fa(j,i)cin>>j;}
#define MOD 1000000007
class mint { public: ll a; mint(ll x=0):a(x%MOD){} mint operator + (const mint rhs) const  { return mint(*this) += rhs; } mint operator - (const mint rhs) const  { return mint(*this) -= rhs; } mint operator * (const mint rhs) const  { return mint(*this) *= rhs; } mint operator / (const mint rhs) const  { return mint(*this) /= rhs; } mint &operator += (const mint rhs)  { a += rhs.a; if (a >= MOD) a -= MOD; return *this; } mint &operator -= (const mint rhs)  { if (a < rhs.a) a += MOD; a -= rhs.a; return *this; } mint &operator *= (const mint rhs)  { a = a * rhs.a % MOD; return *this; } mint &operator /= (mint rhs)  { ll exp = MOD - 2; while (exp) { if (exp % 2) *this *= rhs; rhs *= rhs; exp /= 2; } return *this; } bool operator > (const mint& rhs)const{ return (this->a>rhs.a); } bool operator < (const mint& rhs)const{ return (this->a<rhs.a); } bool operator >= (const mint& rhs)const{ return (this->a>=rhs.a); } bool operator <= (const mint& rhs)const{ return (this->a<=rhs.a); } };

struct UF{ vll par,rk,sz; UF(ll n):par(n+5,-1),rk(n+5,0){ }
	
	ll root(ll x){ if(par[x]<0)return x; else return par[x]=root(par[x]); }
	bool same(ll x,ll y){ return root(x)==root(y); }
	bool unite(ll x,ll y){ ll rx=root(x),ry=root(y); if(rx==ry) return false; if(rk[rx]<rk[ry]) swap(rx,ry); par[rx]+=par[ry]; par[ry]=rx; if(rk[rx]==rk[ry]) rk[rx]++; return true; }
	ll size(ll x){ return -par[root(x)]; }
};
/*
O(2*10^8)
9*10^18
1LL<<62 4*10^18
~~(v.be,v.be+n,x); not include v.be+n

->. *++ ! /%* +- << < == & &&
   ios::sync_with_stdio(false);
	cin.tie(0);
*/
//vll dx={-1,-1,-1,0,0,1,1,1},dy={-1,0,1,-1,1,-1,0,1};
//vll dx={-1,0,0,1},dy={0,-1,1,0};

ll ck(st s){
		  ll n=s.sz;
		  ll rt=-M;
		  ll xxx=stoll(s);
		  st yyy=string(n-1,'0');
		  yyy.in(0,"1");
		  if(s==yyy){
					 re --xxx;
		  }
		  for(ll k=2;k<=n;++k){
					 if(n%k==0){
								ll d=n/k,x=stoll(s.substr(0,d));
								//cj("d",d,"x",x,"k",k);
								//11 11 10 11 ->10 10 10 10
								//11 11 12 11 ->11 11 11 11
								//11 12 10 10 ->11 11 11 11
								vll v;
								for(ll i=1;i<k;++i){
										  ll a=stoll(s.substr(i*d,d));
										  v.pub(a);
								}
								fa(a,v){
										  if(a>x){
													 br;
										  }else if(a<x){
													 --x;
													 br;
										  }
								}
								st ss=to_string(x);
								st ans;
								i(k)
										  ans+=ss;
								ma(rt,stoll(ans));
					 }
		  }
		  re rt;
}
ll ck2(ll xx){
		  for(ll x=xx;x>=11;--x){
					 st s=to_string(x);ll n=s.sz;
					 for(ll d=1;d<s.sz;++d){
								if(n%d==0){
										  st f=s.substr(0,d);bl b=1;
										  for(ll k=1;k*d<n;++k){
													 if(s.substr(k*d,d)!=f){
													 //cj("x",x,"d",d,"f",f,"s",s.substr(k*d,d));
																b=0; br;
													 }
										  }
										  if(b){
													 //cj("done x",x,"d",d,"f",f);
													 re x;
										  }
								}
					 }
		  }
		  re 0;
}
int main(){
		  ios::sync_with_stdio(false);
		  cin.tie(0);
		  ll n;
		  /*
			  n=1000; std::random_device seed_gen; std::mt19937 engine(seed_gen());

		  x(n){
					 // 一様実数分布
					 // [-1.0, 1.0)の値の範囲で、等確率に実数を生成する
					 std::uniform_real_distribution<> dist1(0, 10000000000-1); double r1 = dist1(engine);
					 st s;
					 ll r=r1; s=to_string(r);
					 ll x=stoll(s);
					 ll f=ck(s),tw=ck2(x);
					 if(f==tw){ ;//cj("ok",tw); 
					 }else{ cj("wrong",r,f,tw);rz; }
					 //cj(f);
		  }
		  //*/
		  ci(n);x(n){ st s;ci(s); ll f=ck(s); cj(f); }
		  rz;
}
