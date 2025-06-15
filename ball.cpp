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
#define pll pair<ll,ll> 
#define vll vector<ll> 
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
	vector<pair<ll,ll>>con(cs+1);
	for(auto &p:con)
		cin>>p.fs>>p.se;
	ll ps;cin>>ps;
	vector<pair<ll,ll>>people(ps+1);
	for(auto &p:people)
		cin>>p.fs>>p.se;
	ll ans=0;
	for(ll b=0;b<1<<ps;b++){
		vll ball(n+1);
		for(ll i=0;i<ps;++i){
			const auto [c,d]=people[i];
			ball[b&1<<i?c:d]=1;
		}
		ll cnt=0;
		for(auto [a,b]:con)
			if(ball[a]&&ball[b])
				cnt++;
		if(ans<cnt)
			ans=cnt;
	}
	cout<<ans<<endl;
}
