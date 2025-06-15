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
	ll n;cin>>n;
	string s;cin>>s;
	ll ans=0;
	for(ll rs=0;rs<n;++rs){
		vll buf(30);
		for(ll l=0;l<rs;++l){
			buf[s[l]-'a']|=1;
		}
		for(ll r=rs;r<n;++r){
			buf[s[r]-'a']|=2;
		}
		ll tmp=0;
		for(ll i=0;i<26;++i){
			tmp+=(buf[i]&1)&&(buf[i]&2);
		}
		ans=max(tmp,ans);
	}
	cout<<ans<<endl;
}
