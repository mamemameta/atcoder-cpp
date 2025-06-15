#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
#include<numeric>
#include<cmath>
#include<bitset>
using namespace std;
#define ll long long
#define bl bool
#define vec vector 
#define vll vector<ll> 
#define pll pair<ll,ll> 
#define mkp make_pair
#define mll map<ll,ll> 
#define puf push_front
#define pub push_back
#define pof pop_front()
#define pob pop_back()
#define fs first
#define se second
#define fr front()
#define bk back()
#define be begin()
#define en end()
#define all(x) x.begin(),x.end()
#define ral(x) x.rbegin(),x.rend()
#define ff(i,x,y) for(ll i=x;i<y;++i)
#define fa(i,v) for(auto &i:v)
#define re return 
#define rz return 0; 
#define con continue; 
#define ma(a,x) a=max(a,x)
#define mi(a,x) a=min(a,x)
#define so(v) sort(all(v))
#define rev(v) reverse(all(v))
#define w(x) while(x--)
#define wh(x) while(x)
#define st string
#define M 8611686018427387904
#define ze(x) __builtin_ctzll(x)
#define in insert
//0->64
//O(2*10^8)
//9*10^18
//1LL<<62 4*10^18
//->. *++ ! */% +- << < == &
void cc(){ cout<<endl; };
void cj(){ cout<<endl; };
void cl(){ cout<<endl; };
template<class T,class... A> void cj(T a,A... b){ cout<<a; (cout<<...<<(cout<<' ',b)); cout<<endl; }; 
template<class T,class... A> void cc(T a,A... b){ cout<<a; (cout<<...<<(cout<<' ',b)); cout<<' '; }; 
template<class T,class... A> void cl(T a,A... b){ cout<<a; (cout<<...<<(cout<<'\n',b)); cout<<endl; }; 
template<class... A> void ci(A&... a){ (cin>>...>>a); }; 
template<class T>void po(T v){fa(i,v)cout<<i<<" ";cout<<endl;} 
template<class T>void ppo(T v){fa(i,v){fa(j,i)cout<<j<<" ";cout<<endl;}} 
template<class T> void pl(T v){fa(i,v)cout<<i<<endl;} 
template<class T>void ge(T &v){fa(i,v)cin>>i;}
template<class T>void gge(T &v){fa(i,v)fa(j,i)cin>>j;}
//#define mint modint<MOD>
#define MOD 1000000007
class mint { public: ll a; mint(ll x=0):a(x%MOD){} mint operator + (const mint rhs) const  { return mint(*this) += rhs; } mint operator - (const mint rhs) const  { return mint(*this) -= rhs; } mint operator * (const mint rhs) const  { return mint(*this) *= rhs; } mint operator / (const mint rhs) const  { return mint(*this) /= rhs; } mint &operator += (const mint rhs)  { a += rhs.a; if (a >= MOD) a -= MOD; return *this; } mint &operator -= (const mint rhs)  { if (a < rhs.a) a += MOD; a -= rhs.a; return *this; } mint &operator *= (const mint rhs)  { a = a * rhs.a % MOD; return *this; } mint &operator /= (mint rhs)  { ll exp = MOD - 2; while (exp) { if (exp % 2) *this *= rhs; rhs *= rhs; exp /= 2; } return *this; } bool operator > (const mint& rhs)const{ return (this->a>rhs.a); } bool operator < (const mint& rhs)const{ return (this->a<rhs.a); } bool operator >= (const mint& rhs)const{ return (this->a>=rhs.a); } bool operator <= (const mint& rhs)const{ return (this->a<=rhs.a); } };
int main(){
	   ios::sync_with_stdio(false);
	   cin.tie(0);
	   ll n;ci(n);
	   mint a;
	   set<mint>s={mint(0)};
	   w(n){
			 cin>>a.a;
			 s.in(a);
	   }
	   mint ans(1);
	   for(auto it=next(s.be);it!=s.en;++it){
			 //cc("a:",it->a," ");
			 //cj((*it-*prev(it)+mint(1)).a);
			 ans*=*it-*prev(it)+mint(1);
	   }
	   cout<<ans.a<<endl;
}

