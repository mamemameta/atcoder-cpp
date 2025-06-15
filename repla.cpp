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
#define ff(i,x,y) for(ll i=x;i<y;++i)
#define co cout<<
#define el <<endl;
#define ci cin>>
#define fa(i,v) for(auto &i:v)





int main(){
	ll n;ci n;
	map<ll,ll>mp;
	ll a,sum=0;
	while(n--){
		ci a;
		mp[a]++;
		sum+=a;
	}
	ll q;ci q;
	ll b,c;
	while(q--){
		ci b>>c;
		sum+=(c-b)*mp[b];
		mp[c]+=mp[b];
		mp[b]=0;
		co sum el;
	}
}
