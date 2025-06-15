#include<iostream>
#include<map>
#include<vector>
#include<set>
#define ll long long
using namespace std;
int main(){
	ll n,k;
	cin>>n>>k;
	map<ll,map<char,ll>>mp;
	string s;
	for(ll i=0;i<n;++i){
		cin>>s;
		ll j=0;
		while(s[j]!='\0'){
			++mp[i][s[j]];
			++j;
		}
	}
	ll ans=0;
	for(ll x=0;x<1<<n;++x){
		map<char,ll>lis;
		for(ll i=0;i<n;++i){
			if(x>>i&1){
				for(auto it=mp[i].begin();\
						it!=mp[i].end();++it){
					lis[it->first]+=it->second;
				}
			}
		}
		ll tmp=0;
		for(auto ele:lis){
			tmp+=(ele.second==k);
		}
		ans=max(ans,tmp);
	}
	cout<<ans<<endl;
}
