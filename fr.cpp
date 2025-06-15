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
#define ci cin>>
#define co cout<<(
#define el )<<endl;



int main(){
	ll n;ci n;
	vll v(n+5);
	ff(i,1,n+1){
		ci v[i];
	}
	ll ans=0;
	ff(i,1,n+1)
		ans+=(i<v[i]&&i==v[v[i]]);
	co ans el;

}
