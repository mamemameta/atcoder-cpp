#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
#include<numeric>
using namespace std;
#define ll long long

int main(){
	ll n,m;
	cin>>n>>m;
	map<ll,set<ll>>mp;
	ll a,b;
	for(ll i=0;i<m;++i){
		cin>>a>>b;
		mp[a].insert(b);
	}
	ll ans=0;
	for(ll i=1;i+2<=n;++i){
		for(ll j=i+1;j+1<=n;++j){
			for(ll k=j+1;k<=n;++k){
				//cout<<i<<" "<<j<<" "<<k<<endl;
				if(mp[i].find(j)!=mp[i].end()&&mp[i].find(k)!=mp[i].end()&&mp[j].find(k)!=mp[j].end()){
					ans++;
				}
			}
		}
	}
	cout<<ans<<endl;
}
