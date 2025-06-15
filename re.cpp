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
#define al(x) x.begin(),x.end()
#define ral(x) x.rbegin(),x.rend()
#define ff(i,x,y) for(ll i=x;i<y;++i)
#define co cout<<
#define el <<endl;
#define coel cout<<endl;
#define ci cin>>
#define fa(i,v) for(auto &i:v)
#define re return 0;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n;ci n;
	vll a(n);
	fa(i,a)
		ci i;
	vll b(n);
	if(n==1){
		co a[0] el;
		re;
	}
	ll t=n/2;
	if(n&1){
		ll i=t+1;
		b[i]=1;
		for(;i+1<n;++i){
			b[i+1]=b[i]+2;
		}
		for(;0<=t-1;t--){
			b[t-1]=b[t]+2;
		}
	}else{
		ll i=t-1;
		b[i]=1;
		for(;0<=i-1;--i){
			b[i-1]=b[i]+2;
		}
		for(;t+1<n;t++){
			b[t+1]=b[t]+2;
		}
	}
	fa(i,b){
		co a[i]<<" ";
	}
	coel;
}
