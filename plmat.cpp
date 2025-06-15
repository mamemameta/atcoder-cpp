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
	ll v[505][505]={};
	ll mix,miy,mi=1LL<<60;

	for(ll i=0;i<n;++i){
		for(ll j=0;j<n;++j){
			cin>>v[i][j];
			if(v[i][j]<mi)
				mix=i,miy=j,mi=v[i][j];
		}
	}
	for(ll y=1;y<n;++y){
		for(ll x=1;x<n;++x){
			if((v[x][y]-v[x][y-1])!=(v[x-1][y]-v[x-1][y-1])){
				cout<<"No"<<endl;
				return 0;
			}
		}
	}
	for(ll x=1;x<n;++x){
		for(ll y=1;y<n;++y){
			if((v[x][y]-v[x-1][y])!=(v[x][y-1]-v[x-1][y-1])){
				cout<<"No"<<endl;
				return 0;
			}
		}
	}
	vll h(n),w(n);
	w[miy]=v[mix][miy],h[mix]=0;
	for(ll x=mix-1;x>=0;--x){
		h[x]=h[x+1]+(v[x][0]-v[x+1][0]);
	}
	for(ll x=mix+1;x<n;++x){
		h[x]=h[x-1]+(v[x][0]-v[x-1][0]);
	}
	for(ll y=miy-1;y>=0;--y){
		w[y]=w[y+1]+(v[0][y]-v[0][y+1]);
	}
	for(ll y=miy+1;y<n;++y){
		w[y]=w[y-1]+(v[0][y]-v[0][y-1]);
	}
	cout<<"Yes"<<endl;
	for(auto i:h){
		cout<<i<<" ";
	}
	cout<<endl;
	for(auto i:w){
		cout<<i<<" ";
	}
	cout<<endl;
}
