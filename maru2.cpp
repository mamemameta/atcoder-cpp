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
#define ci cin>>
#define fa(i,v) for(auto &i:v)

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n;ci n;
	ll ans=n+1;
	ll l=0,r=n+1;
	while(l<r){
		ll mid=(l+r+1)>>1;
		if(mid*(mid+1)/2<=n+1){
			co "ll"<<l<<"mi"<<mid<<"r"<<r el;
			l=mid;
		}else{
			co "l"<<l<<"mi"<<mid<<"r"<<r el;
			r=mid-1;
		}
	}
	co ans-l el;
}
