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
	ll n;cin>>n;
	map<ll,ll>mp;
	while(n--){
		ll a;cin>>a;
		mp[a-1]++,mp[a]++,mp[a+1]++;
	}
	ll mx=0;
	for(auto i:mp){
		if(i.se>mx)
			mx=i.se;
	}
	cout<<mx<<endl;

}
