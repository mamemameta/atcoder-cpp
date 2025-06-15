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
#define re return 0
int main(){
	ll k,a,b;ci k>>a>>b;
	if(b-a<2){
		co k+1 el;
		re;
	}else if(a-1>=k){
		co k+1 el;
		re;
	}else{
		ll ans=0;
		k-=a-1;
		ans=a+(b-a)*(k/2)+k%2;
		co ans el;
		re;
	}
}
