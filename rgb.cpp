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
#define bl bool
#define mkp make_pair
#define vll vector<ll> 
#define pll pair<ll,ll> 
#define mll map<ll,ll> 
#define puf push_front
#define pub push_back
#define pof pop_front()
#define pob pop_back()
#define fs first
#define se second
#define fr front()
#define bk back()
#define al(x) x.begin(),x.end()
#define ral(x) x.rbegin(),x.rend()
#define ff(i,x,y) for(ll i=x;i<y;++i)
#define co cout<<
#define el <<endl;
#define ci cin>>
#define fa(i,v) for(auto &i:v)

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll r,g,b;ci r>>g>>b;
	if(r<g)
		swap(g,r);
	if(r<b)
		swap(b,r);
	if(g<b)
		swap(g,b);
	ll ans=0;
	ll n;ci n;
	ll x=n;
	//co r<<g<<b el;
	for(ll i=x/r;i>=0;--i){
		x-=i*r;
		for(ll j=x/g;j>=0;--j){
			x-=g*j;
			if(x%b==0){
				//co i<<j<<x/b el;
				ans++;
			}
			x+=g*j;
		}
		x+=i*r;
	}
	co ans el;
}
