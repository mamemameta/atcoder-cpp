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
	ll n;ci n;
	string s,t;ci s>>t;
	ll ans=2*n;
	ll i,tmp=0;
	for(i=n-1;i>=0;--i){
		ll k;
		for(k=0;i-k>=0;++k){
			if(t[i-k]!=s[n-1-k]){
				break;
			}
		}
		if(i-k<0){
			co ans-k el;
			return 0;
		}
	}
	co ans el;
}
