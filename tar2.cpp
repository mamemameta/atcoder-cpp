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
#define co cout<<(
#define el )<<endl
#define ci cin>>


int main(){
	ll n;ci n;
	vll v(n+5),vis(n+5);
	ff(i,1,n+1)
		ci v[i];
	ll now=1,cnt=1;
	for(;!vis[now];now=v[now],cnt++){
		if(now=2){
			co cnt el;
			return 0;
		}
		vis[now]++;
	}
	co -1 el;
}
