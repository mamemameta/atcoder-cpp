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
	ll n,m,k;
	ci n>>k>>m;
	vll v(n);
	fa(i,v)
		ci i;
	set<ll>se,pre;
	ll ans=0;
	vll t(k);
	ff(i,0,k)
		t[i]=v[i];
	sort(al(t));
	/*
	co "t" el;
	fa(i,t)
		co i<<" ";
	co endl;
	*/
	ff(i,0,m){
		ans+=t[i];
		pre.insert(t[i]);
	}
	ff(i,m,k)
		se.insert(t[i]);
	co ans el;
	for(ll i=k;i<n;++i){
	/*
		co "se" el;
		fa(gg,se){
			co gg<<" ";
		}
		co endl;
		co "pre" el;
		fa(gg,pre){
			co gg<<" ";
		}
		co endl;
		*/
		ll beg=*se.begin();
		if(v[i-k]<beg){
			ans-=v[i-k];
			pre.erase(v[i-k]);
		}else{
			se.erase(v[i-k]);
		}
		ll y=v[i];
		beg=*pre.rbegin();
		//co "y"<<y<<" "<<beg el;
		if(y<beg){
				ll xx=*pre.rbegin();
				pre.erase(xx);
				ans-=xx;
				se.insert(xx);
			ans+=y;
			pre.insert(y);
		}else{
			se.insert(y);
		}
		///*
		co "seafter" el;
		fa(gg,se){
			co gg<<" ";
		}
		co endl;
		co "preafter" el;
		fa(gg,pre){
			co gg<<" ";
		}
		co endl;
		co "ans"<<ans el;
		co endl;
		//*/
		co ans el;
	}
}
