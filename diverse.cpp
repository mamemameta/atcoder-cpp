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
	ll n,k;cin>>n>>k;
	ll a;
	map<ll,ll>mp;
	while(n--){
		cin>>a;
		mp[a]++;
	}
	vector<pll>v;
	for(auto [a,b]:mp)
		v.push_back(mkp(b,a));
	ll ans=0,sz=mp.size();
	sort(v.begin(),v.end());
	for(auto it=v.begin();sz>k;sz--,it++){
		ans+=it->fs;
	}
	cout<<ans<<endl;

}
