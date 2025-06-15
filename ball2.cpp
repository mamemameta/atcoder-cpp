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

int main(){
	ll n,cs;cin>>n>>cs;
	vector<pll>con(cs);
	for(auto &i:con)
		cin>>i.fs>>i.se;
	ll ps;cin>>ps;
	vector<pll>pe(ps);
	for(auto &i:pe)
		cin>>i.fs>>i.se;
	ll ans=0;
	for(ll bi=0;bi<1<<ps;++bi){
		vll bf(n+1);
		for(ll i=0;i<ps;++i){
			bf[(bi&(1LL<<i)?pe[i].fs:pe[i].se)]=1;
		}
		ll tmp=0;
		for(const auto [a,b]:con){
			tmp+=bf[a]&bf[b];
		}
		ans=max(ans,tmp);
	}
	cout<<ans<<endl;
}
