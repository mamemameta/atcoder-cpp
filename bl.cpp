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
	vll a(n);
	map<ll,ll>mp;
	fa(i,a){
		ci i;
		mp[i]++;
	}
	ll sum=0;
	fa(i,mp){
		sum+=i.se*(i.se-1)/2;
	}
	fa(i,a){
		ll b=mp[i];
		ll ans=sum-b*(b-1)/2+(b-1)*(b-2)/2;
		co ans el;
	}
}
