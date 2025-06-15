#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
using namespace std;
#define ll long long

int main(){
	ll n,m;
	cin>>n>>m;
	map<ll,set<ll>>mp;
	ll a,b;
	while(m--){
		cin>>a>>b;
		mp[a].insert(b);
		mp[b].insert(a);
	}
	for(ll i=1;i<=n;++i){
		auto it=mp.find(i);
		if(it==mp.end()){
			cout<<0<<endl;
		}else{
			cout<<it->second.size()<<" ";
			for(auto i:it->second){
				cout<<i<<" ";
			}
			cout<<endl;
		}
	}
}
