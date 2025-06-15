#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
#include<numeric>
using namespace std;
#define ll long long
#define mkp make_pair
#define pll pair<ll,ll> 
int main(){
	ll n,x,y,z;
	cin>>n>>x>>y>>z;
	vector<ll>a(n+1),b(n+1),vis(n+1);
	for(ll i=1;i<=n;++i)
		cin>>a[i];
	for(ll i=1;i<=n;++i)
		cin>>b[i];
	while(x--){
		pll p=mkp(-1LL,-1LL);
		for(ll i=1;i<=n;++i){
			if(!vis[i]){
				p=max(p,mkp(a[i],-i));
			}
		}
		vis[-p.second]=1;
	}
	while(y--){
		pll p=mkp(-1LL,-1LL);
		for(ll i=1;i<=n;++i){
			if(!vis[i]){
				p=max(p,mkp(b[i],-i));
			}
		}
		vis[-p.second]=1;
	}
	while(z--){
		pll p=mkp(-1LL,-1LL);
		for(ll i=1;i<=n;++i){
			if(!vis[i]){
				p=max(p,mkp(a[i]+b[i],-i));
			}
		}
		vis[-p.second]=1;
	}
	for(ll i=1;i<=n;++i){
		if(vis[i])
			cout<<i<<endl;
	}
}
