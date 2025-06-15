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
	ll n,m;ci n>>m;
	ll pre=0,mi=1LL<<60;
	deque<ll>que;
	ll d;
	vll v(m);
	fa(i,v)
		ci i;
	sort(all(v));
	fa(a,v){
		d=a-pre-1;
		if(d!=0){
			mi=min(mi,d);
			que.pub(d);
		}
		pre=a;
	}
	d=n+1-pre-1;
	if(d!=0){
		mi=min(mi,d);
		que.pub(d);
	}
	ll ans=0;
	while(!que.empty()){
		ans+=((que.fr+mi-1)/mi);
		que.pof;
	}
	co ans el;
}
