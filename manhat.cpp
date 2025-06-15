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

ll dis(ll a, ll b, ll c, ll d){
	return abs(a-c)+abs(b-d);
}
int main(){
	ll n,m;cin>>n>>m;
	vector<pll>st(n);
	for(auto &i:st)
		cin>>i.fs>>i.se;
	vector<pll>po(m);
	for(auto &i:po)
		cin>>i.fs>>i.se;
	for(auto [c,d]:st){
		ll mi=1LL<<60;
		ll ans=1,now=1;
		for(auto [a,b]:po){
			//cout<<now<<"a"<<a<<" b"<<b<<" c"<<c<<" d"<<d<<":"<<dis(a,b,c,d)<<endl;
			if(dis(a,b,c,d)<mi){
				mi=dis(a,b,c,d);
				ans=now;
			}
			now++;
		}
		cout<<ans<<endl;
	}
}
