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
#define al(x) x.begin(),x.end()
#define ral(x) x.rbegin(),x.rend()
#define ff(i,x,y) for(ll i=x;i<y;++i)
#define co cout<<
#define el <<endl;
#define ci cin>>
#define fa(i,v) for(auto &i:v)





int main(){
	ll n;ci n;
	vll v;
	ll su=0;
	ff(i,0,n){
		ll x;ci x;
		su+=x;
		v.pub(x);
	}
	sort(al(v));
	for(ll i=0;(su%10==0)&&i<n;++i){
		if((su-v[i])%10!=0){
			co (su-v[i]) el;
			return 0;
		}
	}
	co (su%10?su:0) el;

}
