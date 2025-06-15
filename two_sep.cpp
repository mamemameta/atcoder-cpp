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
#define fs first
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
#define w(x) while(x--)
#define wh(x) while(x)
#define st string
#define M 8611686018427387904
#define ze(x) __builtin_ctzll(x)
#define z(x) ll x=0
#define in insert
#define uniq(v) v.erase(unique(all(v)),v.en);
#define cnt(x,a) count(all(x),a)
#define lb(v,a) lower_bound(v.begin(),v.end(),a)
//0->64
//O(2*10^8)
//9*10^18
//1LL<<62 4*10^18
//->. *++ ! */% +- << < == & &&
void cc(){ cout<<endl; };
void cj(){ cout<<endl; };
void cl(){ cout<<endl; };
template<class T,class... A> void cj(T a,A... b){ cout<<a; (cout<<...<<(cout<<' ',b)); cout<<endl; }; 
template<class T,class... A> void cc(T a,A... b){ cout<<a; (cout<<...<<(cout<<' ',b)); cout<<' '; }; 
template<class T,class... A> void cl(T a,A... b){ cout<<a; (cout<<...<<(cout<<'\n',b)); cout<<endl; }; 
template<class... A> void ci(A&... a){ (cin>>...>>a); }; 
template<class T>void pj(T v){fa(i,v)cout<<i<<" ";cout<<endl;} 
template<class T>void ppj(T v){fa(i,v){fa(j,i)cout<<j<<" ";cout<<endl;}} 
template<class T> void pl(T v){fa(i,v)cout<<i<<endl;} 
template<class T>void ge(T &v){fa(i,v)cin>>i;}
template<class T>void gge(T &v){fa(i,v)fa(j,i)cin>>j;}
//#define mint modint<MOD>
#define MOD 1000000007
class mint { public: ll a; mint(ll x=0):a(x%MOD){} mint operator + (const mint rhs) const  { return mint(*this) += rhs; } mint operator - (const mint rhs) const  { return mint(*this) -= rhs; } mint operator * (const mint rhs) const  { return mint(*this) *= rhs; } mint operator / (const mint rhs) const  { return mint(*this) /= rhs; } mint &operator += (const mint rhs)  { a += rhs.a; if (a >= MOD) a -= MOD; return *this; } mint &operator -= (const mint rhs)  { if (a < rhs.a) a += MOD; a -= rhs.a; return *this; } mint &operator *= (const mint rhs)  { a = a * rhs.a % MOD; return *this; } mint &operator /= (mint rhs)  { ll exp = MOD - 2; while (exp) { if (exp % 2) *this *= rhs; rhs *= rhs; exp /= 2; } return *this; } bool operator > (const mint& rhs)const{ return (this->a>rhs.a); } bool operator < (const mint& rhs)const{ return (this->a<rhs.a); } bool operator >= (const mint& rhs)const{ return (this->a>=rhs.a); } bool operator <= (const mint& rhs)const{ return (this->a<=rhs.a); } };
/*
   ios::sync_with_stdio(false);
   cin.tie(0);
*/

struct UF{
	vll par,rk,sz;
	UF(ll n):par(n+5,-1),rk(n+5,0){ }
	
	ll root(ll x){
		if(par[x]<0)return x;
		else return par[x]=root(par[x]);
	}
	bool same(ll x,ll y){
		return root(x)==root(y);
	}
	bool unite(ll x,ll y){
		ll rx=root(x),ry=root(y);
		if(rx==ry)
			return false;
		if(rk[rx]<rk[ry])
			swap(rx,ry);
		par[rx]+=par[ry];
		par[ry]=rx;
		if(rk[rx]==rk[ry])
			rk[rx]++;
		return true;
	}
	ll size(ll x){
		return -par[root(x)];
	}
};

int main(){
	   ll n,m;cin>>n>>m;
	   ll a,b;
	   UF uf(n);
	   vec<vll>v(n+1);
	   ff(i,0,m){
			 cin>>a>>b;
			 uf.unite(a,b);
			 v[a].pub(b);
			 v[b].pub(a);
	   }
	   vll col(n+1);
	   ll ans=0;
	   bl flg=0;
	   ll cnt=0;
	   vll vv;
	   ll k;
	   ff(i,1,n+1){
			 if(col[i]!=0)
				    continue;
			 cnt++;
			 deque<ll>que;
			 col[i]=cnt;
			 que.pub(i);
			 wh(!que.empty()){
				    a=que.fr;
				    que.pof;
				    for(auto j:v[a]){
						  if(col[j]!=0){
								if(col[j]==col[a]){
									   flg=1;
								}
								continue;
						  }
						  col[j]=-col[a];
						  que.pub(j);
				    }
			 }
			 
			 ll od=count(all(col),cnt),ev=count(all(col),-cnt),su=n-od-ev;
			 //cj("od",od,"ev",ev,"su",su);
	   }
	   if(!flg){
			 ans+=(od*ev-m)+su*(od+ev);
	   }else{
			 ans+=max(su*(su-1)/2,0LL);
	   }
	   cout<<ans<<endl;
}
