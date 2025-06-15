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
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()

int main(){
	ll n;cin>>n;
	vll v(n);
	for(auto &i:v)
		cin>>i;
	sort(all(v));
	ll ans=0;
	for(ll i=0;i<n;++i){
		ans+=v[i]*i-v[i]*(n-i-1);
	}
	cout<<ans<<endl;
}
