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
	ll n;
	cin>>n;
	string s;
	cin>>s;
	map<ll,ll>mp;
	ll x,ans=0;
	for(ll i=0;i<n;++i){
		cin>>x;
		if(s[i]=='0'){
			mp[x]++;
		}else{
			mp[x]--;
			ans++;
		}
	}
	ll tmp=ans;
	for(auto i:mp){
		tmp+=i.se;
		ans=max(ans,tmp);
	}
	cout<<ans<<endl;
}
