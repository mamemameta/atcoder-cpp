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
#define re return 0;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	/*
	   ll x=stoll("001");
	   co x el;
	   */
	ll n,k;
	ci n>>k;
	if(k%10==0){
		co (k<=n) el;
	}else{
		ll ans=0;
		string s=to_string(k);
		reverse(al(s));
		ll rev=stoll(s);
		if(n<k){
			co 0 el;
		}else if(!(k<=rev&&rev<=n)){
			co (k<=n) el;
		}else{
			ll tmp=k;
			for(;tmp<=n;tmp*=10){
				//co tmp el;
				ans++;
			}
			//co rev<<" "<<k el;
			if(k<rev){
				for(;rev<=n;rev*=10){
					//co tmp el;
					ans++;
				}
			}
			co ans el;
		}
	}
}
