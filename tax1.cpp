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
#define mkp make_pair
#define vll vector<ll> 
#define pll pair<ll,ll> 
#define puf push_front
#define pub push_back
#define pof pop_front()
#define pob pop_back()
#define fs first
#define se second
#define fr front()
#define bk back()
ll t,n;
ll price(ll a){
	return (100+t)*a/100;
}
int main(){
	vll p;
	cin>>t>>n;
	ll pre=1;
	for(ll i=1;i<=100;++i){
		ll now=price(i);
		for(ll k=pre+1;k<now;++k){
			p.push_back(k);
		}
		pre=now;
	}
	--n;
	ll ans=p[n%t]+(n/t)*(t+100);
	cout<<ans<<endl;
}
