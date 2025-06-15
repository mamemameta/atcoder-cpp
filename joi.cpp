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
#define mpll map<ll,ll> 
#define pll pair<ll,ll> 
#define puf push_front
#define pub push_back
#define pof pop_front()
#define pob pop_back()
#define fs first
#define se second
#define fr front()
#define bk back()
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define ff(i,x) for(ll i=0;i<x;++i)
#define co cout<<(
#define el  )<<endl;
int main(){
	ll n;cin>>n;
	mpll mp;
	ll a;
	while(n--){
		cin>>a;
		mp[a]++;
	}
	ll ans=0;
	for(auto i:mp){
		ans+=i.se&1;
	}
	co ans el
}
