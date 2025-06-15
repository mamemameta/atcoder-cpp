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
//0->64
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
//O(2*10^8)
//9*10^18
//1LL<<62 4*10^18
//++ ! */% +- << < == &

int main(){
	   ll ans=1,t;
	   ll n;ci(n);
	   ff(i,0,n){
			 wh(ze(ans)<t){
				    ans+=(ans&-ans);
			 }
	   }
}
