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
#define ff(i,x) for(ll i=0;i<x;++i)

int main(){
	string s;cin>>s;
	ll n=s.length();
	ll ans=0,pre=1LL<<60;
	vll v(n+1);
	ff(i,n){
		if(s[i]=='<'){
			ll cnt=0;
			while(i<n&&s[i]=='<'){
				++i;
				v[i]=cnt+1;
				cnt++;
			}
		}
	}
	for(ll i=n-1;i>=0;i--){
		if(s[i]=='>'){
			v[i]=max(v[i+1]+1,v[i]);
		}
	}
	cout<<accumulate(all(v),0LL)<<endl;
}
