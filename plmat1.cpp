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
	vector<vector<ll>>v(n,vector<ll>(n));
	for(auto &i:v)
		for(auto &j:i)
			cin>>j;
	vector<ll>w=v[0],h(n);
	ll m=0;
	for(ll x=0;x<n;++x){
		h[x]=v[x][0]-w[0];
		if(h[x]<0){
			m=min(h[x],m);
		}
	}
	for(auto &i:h)
		i-=m;
	for(auto &i:w)
		i+=m;
	for(ll x=0;x<n;++x){
		for(ll y=0;y<n;++y){
			if(h[x]+w[y]!=v[x][y]){
				cout<<"No"<<endl;
				return 0;
			}
		}
	}
	cout<<"Yes"<<endl;
	for(auto i:h)
		cout<<i<<" ";
	cout<<endl;
	for(auto i:w)
		cout<<i<<" ";
	cout<<endl;
}
