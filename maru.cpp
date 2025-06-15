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
	ll n;ci n;
	ll b=(n+1)/2;
	ll a=b;
	if(n&1){
		a++;
	}else
		a--;
	if(a>b)
		swap(a,b);
	ll ans=n+1;
	ll k=sqrt(2*n);
	k=max(0LL,k-5);
	for(;k*(k+1)/2<=b;++k);
	k--;
	a=n+1-(k+1)*k/2;
	for(k++;k<=a;k++){
		a-=k;
	}
	k--;
	ans-=k;
	co ans el;
}
