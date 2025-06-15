
#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
#include<numeric>
#include<cmath>
using namespace std;
#define ll long long
#define bl bool
#define mkp make_pair
#define vll vector<ll> 
#define pll pair<ll,ll> 
#define mll map<ll,ll> 
#define puf push_front
#define pub push_back
#define pof pop_front()
#define pob pop_back()
#define fs first
#define se second
#define fr front()
#define bk back()
#define all(x) x.begin(),x.end()
#define ral(x) x.rbegin(),x.rend()
#define ff(i,x,y) for(ll i=x;i<y;++i)
#define co cout<<
#define el <<endl;
#define coel cout<<endl;
#define ci cin>>
#define fa(i,v) for(auto &i:v)
#define re return 0;
#define ma(a,x) a=max(a,x)
#define mi(a,x) a=min(a,x)
#define so(v) sort(all(v))
#define rev(v) reverse(all(v))
#define rn return 
//O(2*10^8)
//9*10^18
//1LL<<62 4*10^18
ll bi_po(ll a,ll b,ll m=1LL<<62){
	ll ans=1;
	for(a%=m;b;a=a*a%m,b>>=1){
		if(b&1){
			ans=a*ans%m;
		}
	}
	rn ans;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll x,y,z;ci x>>y>>z;
	y=bi_po(y,z,4LL)+4;
	co bi_po(x,y,10LL) el;
}
