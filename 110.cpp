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
#define ma(a,x) a=max(a,x)
#define mi(a,x) a=min(a,x)
#define so(v) sort(all(v))
#define rso(v) sort(rall(v))
#define rev(v) reverse(all(v))
#define i(x) for(ll i=0;i<x;++i)
#define t(x) for(ll yz=0;yz<x;++yz)
#define wh(x) while(x)
#define st string
#define M 8611686018427387904
#define ze(x) __builtin_ctzll(x)
#define z(x) ll x=0
#define in insert
#define uniq(v) v.erase(unique(all(v)),v.en);
#define cnt(x,a) count(all(x),a)
#define lb(v,a) lower_bound(v.begin(),v.end(),a)
#define dou double
void cc(){ cout<<endl; };
void cj(){ cout<<endl; };
void cl(){ cout<<endl; };
template<class T,class... A> void cj(T a,A... b){ cout<<a; (cout<<...<<(cout<<' ',b)); cout<<endl; }; 
template<class T,class... A> void cc(T a,A... b){ cout<<a; (cout<<...<<(cout<<' ',b)); cout<<' '; }; 
template<class T,class... A> void cl(T a,A... b){ cout<<a; (cout<<...<<(cout<<'\n',b)); cout<<endl; }; 
template<class... A> void ci(A&... a){ (cin>>...>>a); }; 
template<class T>void ou(T v){fa(i,v)cout<<i<<" ";cout<<endl;} 
template<class T>void ouu(T v){fa(i,v){fa(j,i)cout<<j<<" ";cout<<endl;}} 
template<class T> void oul(T v){fa(i,v)cout<<i<<endl;} 
template<class T>void in(T &v){fa(i,v)cin>>i;}
template<class T>void inn(T &v){fa(i,v)fa(j,i)cin>>j;}
//#define mint modint<MOD>
#define MOD 1000000007
class mint { public: ll a; mint(ll x=0):a(x%MOD){} mint operator + (const mint rhs) const  { return mint(*this) += rhs; } mint operator - (const mint rhs) const  { return mint(*this) -= rhs; } mint operator * (const mint rhs) const  { return mint(*this) *= rhs; } mint operator / (const mint rhs) const  { return mint(*this) /= rhs; } mint &operator += (const mint rhs)  { a += rhs.a; if (a >= MOD) a -= MOD; return *this; } mint &operator -= (const mint rhs)  { if (a < rhs.a) a += MOD; a -= rhs.a; return *this; } mint &operator *= (const mint rhs)  { a = a * rhs.a % MOD; return *this; } mint &operator /= (mint rhs)  { ll exp = MOD - 2; while (exp) { if (exp % 2) *this *= rhs; rhs *= rhs; exp /= 2; } return *this; } bool operator > (const mint& rhs)const{ return (this->a>rhs.a); } bool operator < (const mint& rhs)const{ return (this->a<rhs.a); } bool operator >= (const mint& rhs)const{ return (this->a>=rhs.a); } bool operator <= (const mint& rhs)const{ return (this->a<=rhs.a); } };
/*
0->64
O(2*10^8)
9*10^18
1LL<<62 4*10^18
->. *++ ! /%* +- << < == & &&

	   ios::sync_with_stdio(false);
	   cin.tie(0);
*/

int main(){
	   ios::sync_with_stdio(false);
	   cin.tie(0);

	   ll n;st s;ci(n,s);
	   if(n==1&&s=="1"){
			 cj(20000000000); rz;
	   }
	   st t="110";
	   if(s[0]=='0'){
			 s.insert(0,"1");
			 s.insert(0,"1");
	   }else if(s[1]=='0'){
			 s.insert(0,"1");
	   }
	   ff(i,0,s.sz){
			 if(s[i]!=t[i%3]){
				    cj(0);rz;
			 }
	   }
	   ll cnt=count(all(s),'0');
	   --cnt;
	   ll ans=10000000000-cnt-(s.ba=='1');
	   cj(ans);
}
