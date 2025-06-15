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
	ll h,w;cin>>h>>w;
	vector<vector<char>>v(h+5,vector<char>(w+5,'.'));
	for(ll x=1;x<=h;++x){
		for(ll y=1;y<=w;++y){
			cin>>v[x][y];
		}
	}
	ll dx[]={-1,1,0,0},dy[]={0,0,-1,1};
	for(ll x=1;x<=h;++x){
		for(ll y=1;y<=w;++y)
			if(v[x][y]=='#'){
				for(ll i=0;i<4;++i){
					if(v[x+dx[i]][y+dy[i]]=='#')
						continue;
					cout<<"No"<<endl;
					return 0;
				}
			}
	}
	cout<<"Yes"<<endl;
}
