#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#define ll long long
using namespace std;
int main(){
	ll n;cin>>n;
	map<ll,vector<ll>>mp;
	ll a;
	for(ll i=1;i<=n;++i){
		cin>>a;
		mp[a].push_back(i);
	}
	ll q;cin>>q;
	ll l,r,x;
	while(q--){
		cin>>l>>r>>x;
		auto s=lower_bound(mp[x].begin(),\
			mp[x].end(),l);
		auto t=upper_bound(mp[x].begin(),\
			mp[x].end(),r);
		/*cout<<"lis_of_"<<x<<endl;
		for(auto i:mp[x]){
			cout<<i<<" ";
		}
		cout<<endl;
		*/
		cout<<t-s<<endl;
	}
}
